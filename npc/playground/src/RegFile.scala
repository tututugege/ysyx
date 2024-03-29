import chisel3._
import chisel3.util._

class RegFile(num: Int) extends Module {
  val io = IO(new Bundle {
    val rs1 = Input(UInt(5.W))
    val rs2 = Input(UInt(5.W))

    val wdata = Input(UInt(32.W))
    val waddr = Input(UInt(5.W))
    val wen   = Input(Bool())

    val rdata1 = Output(UInt(32.W))
    val rdata2 = Output(UInt(32.W))
  })

  val GPR = Wire(Vec(num, UInt(32.W)))
  val Wen = Wire(Bool())

  Wen := io.wen && io.waddr.orR
  val gprSeq = for (i <- 0 until num) yield {
    RegEnable(io.wdata, (io.waddr === i.U) && Wen)
  }

  for (i <- 0 until num) {
    GPR(i) := gprSeq(i)
  }

  io.rdata1 := Mux(io.rs1 === 0.U, 0.U(32.W), GPR(io.rs1))
  io.rdata2 := Mux(io.rs2 === 0.U, 0.U(32.W), GPR(io.rs2))
}
