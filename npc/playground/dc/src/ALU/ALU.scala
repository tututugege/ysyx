import chisel3._
import chisel3.util._

class ALU (width: Int)extends Module {
    val io = IO(new Bundle{
        val aluOp    = Input(UInt(3.W))
        val A        = Input(UInt(width.W))
        val B        = Input(UInt(width.W))
        val Result   = Output(UInt(width.W))
        val Zero     = Output(Bool())
        val Cout     = Output(Bool())
        val OF       = Output(Bool())
    })

    val ADD = "b000"
    val SUB = "b001"
    val NOT = "b010"
    val AND = "b011"
    val OR  = "b100"
    val XOR = "b101"
    val SLT = "b110"
    val EQU = "b111"

    val addOp = (io.aluOp === ADD.U)
    val subOp = (io.aluOp === SUB.U)
    val notOp = (io.aluOp === NOT.U)
    val andOp = (io.aluOp === AND.U)
    val  orOp = (io.aluOp ===  OR.U)
    val xorOp = (io.aluOp === XOR.U)
    val equOp = (io.aluOp === EQU.U)
    val sltOp = (io.aluOp === SLT.U)

    class aluOutBundle extends Bundle {
        val Cout     = Bool()
        val Result   = UInt(width.W)
    }

    val adderA    = Wire(UInt(width.W))
    val adderB    = Wire(UInt(width.W))
    val adderOut  = Wire(UInt(width.W + 1))
    val Cin       = Wire(UInt(1.W))
    val adderOutBundle = Wire(new aluOutBundle)

    Cin      := ~addOp
    adderA   := io.A
    adderB   := io.B ^ Fill(width, Cin)
    adderOut := adderA +& adderB +& Cin
    adderOutBundle.Result := adderOut(width - 1, 0)
    adderOutBundle.Cout   := adderOut(width)

    val notRes = Wire(UInt(width.W))
    val andRes = Wire(UInt(width.W))
    val orRes  = Wire(UInt(width.W))
    val xorRes = Wire(UInt(width.W))
    val equRes = Wire(UInt(width.W))
    val sltRes = Wire(UInt(width.W))

    notRes := ~io.A
    andRes := io.A & io.B
    orRes  := io.A | io.B
    xorRes := io.A ^ io.B
    equRes := ~(adderOutBundle.Result.orR)
    sltRes := (adderA(width - 1) && adderB(width - 1)
           || (adderA(width - 1) ^ adderB(width - 1)) && adderOutBundle.Result(width - 1))

    io.Result := Mux1H(Seq(
        addOp -> adderOutBundle.Result,
        subOp -> adderOutBundle.Result,
        notOp -> notRes,
        andOp -> andRes,
         orOp ->  orRes,
        xorOp -> xorRes,
        equOp -> equRes,
        sltOp -> sltRes
    ))

    io.Cout := adderOutBundle.Cout ^ Cin
    io.OF   := (adderA(width - 1) &&  adderB(width - 1) && ~adderOutBundle.Result(width - 1)
            || ~adderA(width - 1) && ~adderB(width - 1) &&  adderOutBundle.Result(width - 1))
    io.Zero := ~(io.Result.orR)
}
