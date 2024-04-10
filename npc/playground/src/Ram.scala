import chisel3._
import chisel3.util._
import chisel3.util.experimental._
import java.io.OutputStreamWriter

class Ram extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Reset())

    val awready = Output(Bool())
    val awvalid = Input(Bool())
    val awid    = Input(UInt(3.W))
    val awaddr  = Input(UInt(32.W))
    val awsize  = Input(UInt(3.W))
    val awprot  = Input(UInt(3.W))

    val wready = Output(Bool())
    val wvalid = Input(Bool())
    val wdata  = Input(UInt(32.W))
    val wstrb  = Input(UInt(4.W))

    val bready = Input(Bool())
    val bvalid = Output(Bool())
    val bid    = Output(UInt(3.W))

    val arready = Output(Bool())
    val arvalid = Input(Bool())
    val arid    = Input(UInt(3.W))
    val araddr  = Input(UInt(32.W))
    val arsize  = Input(UInt(3.W))
    val arprot  = Input(UInt(3.W))

    val rready = Input(Bool())
    val rvalid = Output(Bool())
    val rid    = Output(UInt(3.W))
    val rdata  = Output(UInt(32.W))
  })
}
