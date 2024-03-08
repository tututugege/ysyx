import chisel3._
import chisel3.util._

class SelectorBundle(width: Int) extends Module {
  val io = IO(new Bundle {
    val shamt = Input(Bool())
    val left = Input(Bool())
    val din = Input(Vec(width, Vec(4, UInt(1.W))))
    val dout = Output(UInt(width.W))
  })

  val switch = Wire(Vec(width, UInt(1.W)))
  val selectorList = for (i <- 0 until width) yield {
    val sel = Module(new Selector4)

    sel.io.shamt := io.shamt
    sel.io.left := io.left
    sel.io.din := io.din(i)
    switch(i) := sel.io.dout
  }

  io.dout := switch.asUInt
}
