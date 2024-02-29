import chisel3._
import chisel3.util._

class selector4 (dataWidth: Int) extends Module {
  val io = IO(new Bundle {
    val inData = Input(Vec(4, UInt(dataWidth.W)))
    val sel = Input(UInt(2.W))
    val outData = Output(UInt(dataWidth.W))
  })

  io.outData := MuxLookup(io.sel, 0.U, Seq(
    0.U -> io.inData(0),
    1.U -> io.inData(1),
    2.U -> io.inData(2),
    3.U -> io.inData(3)
  )) 
}