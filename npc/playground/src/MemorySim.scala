import chisel3._
import chisel3.util._
import chisel3.util.experimental._

class MemorySim extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Reset())
    val PC    = Input(UInt(32.W))
    val Inst  = Output(UInt(32.W))

    val Address       = Input(UInt(32.W))
    val MemSize       = Input(UInt(2.W))
    val MemRead       = Input(Bool())
    val MemReadSigned = Input(Bool())
    val MemWrite      = Input(Bool())

    val Wdata = Input(UInt(32.W))
    val Wstrb = Input(UInt(4.W))

    val ReadData = Output(UInt(32.W))
  })
}
