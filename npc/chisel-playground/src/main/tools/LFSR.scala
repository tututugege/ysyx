import chisel3._
import chisel3.util._

class LFSR(init: Int) extends Module {
  val io = IO(new Bundle {
    val out = Output(UInt(5.W))
  })

  val nxtVal   = Wire(UInt(5.W))
  val newBit   = Wire(UInt(1.W))
  val zero     = Wire(Bool())
  val shiftReg = RegNext(nxtVal, init.U)

  zero   := ~shiftReg.orR
  nxtVal := Mux(zero, init.U, newBit ## shiftReg(4, 1))
  newBit := shiftReg(4) ^ shiftReg(3) ^ shiftReg(2) ^ shiftReg(0)
  io.out := shiftReg
}
