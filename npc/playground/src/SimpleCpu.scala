import chisel3._
import chisel3.util._

class SimpleCpu extends Module {
  val io = IO(new Bundle {
    val inst_addr = Output(UInt(32.W))
    val inst      = Input(UInt(32.W))
  })

  val START_PC = 0x80000000
  val PC       = RegInit(START_PC.U)
  val PC_next  = Wire(UInt(32.W))
  val PC_br    = Wire(UInt(32.W))
  val PC_inc   = Wire(UInt(32.W))

  PC_inc  := PC + 4.U
  PC_next := PC_inc
}
