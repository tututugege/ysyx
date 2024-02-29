import chisel3._
import chisel3.util._

class LFSR8 (init: Int) extends Module {
    val io = IO(new Bundle{
        val out = Output(UInt(8.W))
    })

    val regVal  = Wire(UInt(8.W))
    val newBit  = Wire(UInt(1.W))
    val zero    = Wire(Bool())
    val shftReg = RegNext(newBit ## regVal(7, 1), init.U)

    zero   := ~shftReg.orR()
    regVal := Mux(zero, (1 << 7).U(8.W), shftReg)
    newBit := shftReg(4) ^ shftReg(3) ^ shftReg(2) ^ shftReg(0)
    io.out := shftReg
}