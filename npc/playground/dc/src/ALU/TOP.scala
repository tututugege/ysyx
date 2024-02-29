import chisel3._
import chisel3.util._

class TOP extends Module {
    val io = IO(new Bundle {
        val A     = Input(UInt(4.W))
        val B     = Input(UInt(4.W))
        val aluOp = Input(UInt(3.W))

        val segRes  = Output(UInt(8.W))
        val segZero = Output(UInt(8.W))
        val segCout = Output(UInt(8.W))
        val segOF   = Output(UInt(8.W))
    })

    val aluRes  = Wire(UInt(4.W))
    val aluZero = Wire(UInt(4.W))
    val aluCout = Wire(UInt(4.W))
    val aluOF   = Wire(UInt(4.W))

    val alu = Module(new ALU(4))
    alu.io.aluOp := io.aluOp
    alu.io.A := io.A
    alu.io.B := io.B

    aluRes  := alu.io.Result
    aluZero := alu.io.Zero
    aluCout := alu.io.Cout
    aluOF   := alu.io.OF


    val seg7Res  = Module(new hex7seg)
    val seg7Zero = Module(new hex7seg)
    val seg7Cout = Module(new hex7seg)
    val seg7OF   = Module(new hex7seg)

    seg7Res .io.in := aluRes
    seg7Zero.io.in := aluZero
    seg7Cout.io.in := aluCout
    seg7OF  .io.in := aluOF

    io.segRes  := ~(seg7Res .io.out ## 0.U(1.W))
    io.segZero := ~(seg7Zero.io.out ## 0.U(1.W))
    io.segCout := ~(seg7Cout.io.out ## 0.U(1.W))
    io.segOF   := ~(seg7OF  .io.out ## 0.U(1.W))
}