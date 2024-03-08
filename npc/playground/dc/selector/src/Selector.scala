import chisel3._
import chisel3.util._

class Selector(num: Int, width: Int) extends Module {
  val io = IO(new Bundle {
    val in = Input(Vec(num, UInt(width.W)))
    val sel = Input(UInt(log2Up(num).W))
    val out = Output(UInt(width.W))
  })

  val map = for (i <- 0 until num) yield {
    i.U -> io.in(i)
  }

  io.out := MuxLookup(io.sel, 0.U, map)
}
