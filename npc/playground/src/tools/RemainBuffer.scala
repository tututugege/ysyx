import chisel3._
import chisel3.util._
import chisel3.util.experimental._

object RemBuffer {
  def apply(reset: Bool, cond: Bool, out: Bool) = {
    val rem = Module(new RemBuffer)
    rem.io.reset := reset
    rem.io.cond  := cond
    out          := rem.io.out
    rem
  }
}

class RemBuffer extends Module {
  val io = IO(new Bundle {
    val reset = Input(Bool())
    val cond  = Input(Bool())
    val out   = Output(Bool())
  })

  val record = Reg(Bool())
  record := Mux(io.reset, false.B, Mux(io.cond, true.B, record))
  io.out := record || io.cond

}
