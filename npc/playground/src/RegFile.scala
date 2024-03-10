import chisel3._
import chisel3.util._

class RegFile extends Module {
  val io = IO(new Bundle {
    val raddr1 = Input(UInt(5.W))
    val raddr2 = Input(UInt(5.W))

    val wdata = Input(UInt(32.W))
    val waddr = Input(UInt(5.W))
    val wen   = Input(Bool())

    val rdata1 = Output(UInt(32.W))
    val rdata2 = Output(UInt(32.W))
  })

  val RF = for (i <- 0 until 32) yield {
    RegEnable(io.wdata, (io.waddr === i.U) && io.wen)
  }

}
