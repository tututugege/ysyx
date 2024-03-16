import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import Decoder._

class ALU(width: Int) extends Module {
  val io = IO(new Bundle {
    val AluOp  = Input(UInt(4.W))
    val A      = Input(UInt(width.W))
    val B      = Input(UInt(width.W))
    val Result = Output(UInt(width.W))
    val Zero   = Output(Bool())
    val Cout   = Output(Bool())
    val OF     = Output(Bool())
  })

  val AluOpTable = TruthTable(
    Map(
      BitPat("b" + AluOpAdd) -> BitPat("b0000000001"),
      BitPat("b" + AluOpSub) -> BitPat("b0000000010"),
      BitPat("b" + AluOpSlt) -> BitPat("b0000000100"),
      BitPat("b" + AluOpSltu) -> BitPat("b0000001000"),
      BitPat("b" + AluOpXor) -> BitPat("b0000010000"),
      BitPat("b" + AluOpOr) -> BitPat("b0000100000"),
      BitPat("b" + AluOpAnd) -> BitPat("b0001000000"),
      BitPat("b" + AluOpSll) -> BitPat("b0010000000"),
      BitPat("b" + AluOpSrl) -> BitPat("b0100000000"),
      BitPat("b" + AluOpSra) -> BitPat("b1000000000")
    ),
    BitPat("b??????????")
  )

  val Operation = Wire(UInt(10.W))
  Operation := decoder(io.AluOp, AluOpTable)
  val AddOp  = Operation(0)
  val SubOp  = Operation(1)
  val SltOp  = Operation(2)
  val SltuOp = Operation(3)
  val XorOp  = Operation(4)
  val OrOp   = Operation(5)
  val AndOp  = Operation(6)
  val SllOp  = Operation(7)
  val SrlOp  = Operation(8)
  val SraOp  = Operation(9)

  // adder
  class AluOutBundle extends Bundle {
    val Cout   = Bool()
    val Result = UInt(width.W)
  }

  val AdderA         = Wire(UInt(width.W))
  val AdderB         = Wire(UInt(width.W))
  val AdderOut       = Wire(UInt(width.W + 1))
  val Cin            = Wire(UInt(1.W))
  val AdderOutBundle = Wire(new AluOutBundle)

  Cin    := ~AddOp
  AdderA := io.A
  AdderB := io.B ^ Fill(width, Cin)
  // AdderOut              := AdderA +& AdderB +& Cin
  AdderOut              := AdderA +& AdderB +& Cin
  AdderOutBundle.Result := AdderOut(width - 1, 0)
  AdderOutBundle.Cout   := AdderOut(width)

  // shifter
  val Shifter    = Module(new BarrelShifter(32))
  val ShifterOut = Wire(UInt(width.W))

  Shifter.io.din    := io.A
  Shifter.io.shamt  := io.B
  Shifter.io.signed := SraOp
  Shifter.io.left   := SllOp
  ShifterOut        := Shifter.io.dout

  // others
  val SltRes  = Wire(UInt(width.W))
  val SltuRes = Wire(UInt(width.W))
  val XorRes  = Wire(UInt(width.W))
  val OrRes   = Wire(UInt(width.W))
  val AndRes  = Wire(UInt(width.W))

  SltRes := (AdderA(width - 1) && AdderB(width - 1)
    || (AdderA(width - 1) ^ AdderB(width - 1)) && AdderOutBundle.Result(width - 1))
  SltuRes := io.Cout
  XorRes  := io.A ^ io.B
  OrRes   := io.A | io.B
  AndRes  := io.A & io.B

  io.Result := Mux1H(
    Seq(
      AddOp -> AdderOutBundle.Result,
      SubOp -> AdderOutBundle.Result,
      AndOp -> AndRes,
      OrOp -> OrRes,
      XorOp -> XorRes,
      SltOp -> SltRes,
      SllOp -> ShifterOut,
      SrlOp -> ShifterOut,
      SraOp -> ShifterOut
    )
  )

  io.Cout := AdderOutBundle.Cout ^ Cin
  io.OF := (AdderA(width - 1) && AdderB(width - 1) && ~AdderOutBundle.Result(width - 1)
    || ~AdderA(width - 1) && ~AdderB(width - 1) && AdderOutBundle.Result(width - 1))
  io.Zero := ~(io.Result.orR)
}
