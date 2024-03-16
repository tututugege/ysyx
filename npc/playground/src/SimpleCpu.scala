import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import Decoder._

class FetchBundle extends Bundle {
  val PC   = Output(UInt(32.W))
  val Inst = Input(UInt(32.W))
}

class SimpleCpu extends Module {

  val Halt = IO(Output(Bool()))

  val START_PC      = "h80000000"
  val PcReg         = RegInit(START_PC.U)
  val DecoderModule = Module(new Decoder())
  val RF            = Module(new RegFile)
  val Alu           = Module(new ALU(32))
  val MemoryAccess  = Module(new MemorySim)

  val Fetch = Wire(new FetchBundle)
  // Decoder
  val DecoderBundle = Wire(Flipped(new DecoderBundle))
  DecoderBundle.Inst := Fetch.Inst
  DecoderModule.io <> DecoderBundle

  // PC Module
  val PcNext  = Wire(UInt(32.W))
  val PcBr    = Wire(UInt(32.W))
  val PcImm   = Wire(UInt(32.W))
  val PcInc   = Wire(UInt(32.W))
  val BrTaken = Wire(Bool())
  val BrCond  = Wire(Bool())
  val BrReg   = Wire(Bool())
  val BrImm   = Wire(Bool())

  BrReg    := (DecoderBundle.PcSrc === ("b" + PcSrcReg).asUInt)
  BrImm    := (DecoderBundle.PcSrc === ("b" + PcSrcImm).asUInt)
  PcInc    := PcReg + 4.U
  PcImm    := PcReg + DecoderBundle.Imm
  PcBr     := Mux(BrReg, RF.io.rdata1, PcImm)
  PcNext   := Mux(BrTaken, PcBr, PcInc)
  PcReg    := PcNext
  Fetch.PC := PcReg
  BrCond := MuxLookup(
    DecoderBundle.BrCond,
    false.B,
    Seq(
      ("b" + BrCondEq).U -> (Alu.io.Zero ^ Fetch.Inst(12)),
      ("b" + BrCondGl).U -> (Alu.io.Result(0) ^ Fetch.Inst(12)),
      ("b" + BrCondGlu).U -> (Alu.io.Result(0) ^ Fetch.Inst(12)),
      ("b" + BrCondJ).U -> true.B
    )
  )
  BrTaken := BrCond && BrImm || BrReg

  // RegFile
  RF.io.rs1   := DecoderBundle.rs1
  RF.io.rs2   := DecoderBundle.rs2
  RF.io.waddr := DecoderBundle.rd

  // ALU
  val AluOut = Wire(UInt(32.W))
  Alu.io.A := MuxLookup(
    DecoderBundle.AluSrc1,
    0.U,
    Seq(
      ("b" + Decoder.AluSrc1R1).U -> RF.io.rdata1,
      ("b" + Decoder.AluSrc1PC).U -> PcReg,
      ("b" + Decoder.AluSrc1x0).U -> 0.U(32.W)
    )
  );

  Alu.io.B := MuxLookup(
    DecoderBundle.AluSrc2,
    0.U,
    Seq(
      ("b" + Decoder.AluSrc2R2).U -> RF.io.rdata2,
      ("b" + Decoder.AluSrc2Imm).U -> DecoderBundle.Imm,
      ("b" + Decoder.AluSrc24).U -> 4.U(32.W),
      ("b" + Decoder.AluSrc2Rs2).U -> 0.U(27.W) ## DecoderBundle.rs2
    )
  );

  Alu.io.AluOp := DecoderBundle.AluOp
  AluOut       := Alu.io.Result

  // Memory Access

  val StrbTable = TruthTable(
    Map(
      BitPat("b00" + Decoder.MemSizeB) -> BitPat("b0001"),
      BitPat("b01" + Decoder.MemSizeB) -> BitPat("b0010"),
      BitPat("b10" + Decoder.MemSizeB) -> BitPat("b0100"),
      BitPat("b11" + Decoder.MemSizeB) -> BitPat("b1000"),
      BitPat("b00" + Decoder.MemSizeH) -> BitPat("b0011"),
      BitPat("b01" + Decoder.MemSizeH) -> BitPat("b0110"),
      BitPat("b10" + Decoder.MemSizeH) -> BitPat("b1100"),
      BitPat("b00" + Decoder.MemSizeW) -> BitPat("b1111")
    ),
    BitPat("b????")
  )

  MemoryAccess.io.clock := clock
  MemoryAccess.io.reset := reset
  Fetch.Inst            := MemoryAccess.io.Inst

  MemoryAccess.io.PC            := Fetch.PC
  MemoryAccess.io.Address       := AluOut
  MemoryAccess.io.MemRead       := DecoderBundle.MemRead
  MemoryAccess.io.MemReadSigned := DecoderBundle.MemReadSigned
  MemoryAccess.io.MemWrite      := DecoderBundle.MemWrite
  MemoryAccess.io.MemSize       := DecoderBundle.MemSize

  MemoryAccess.io.Wdata := RF.io.rdata2
  MemoryAccess.io.Wstrb := decoder(AluOut(1, 0) ## DecoderBundle.MemSize, StrbTable)

  // write back
  RF.io.wen   := DecoderBundle.RegWrite
  RF.io.wdata := Mux(DecoderBundle.MemRead, MemoryAccess.io.ReadData, AluOut)

  // Halt
  Halt := DecoderBundle.Halt
}
