import chisel3._
import chisel3.util._

class TOP extends Module {
  val io = IO(new Bundle {
    val in = Input(Vec(4, UInt(1.W)))
    val sel = Input(UInt(2.W))
    val out = Output(UInt(1.W))
  })

  val selector4 = Module(new Selector(4, 1))
  io <> selector4.io
}
