import chisel3._
import chisel3.util._
import chisel3.experimental._

class AddrInfo extends Bundle {
  val id   = UInt(3.W)
  val addr = UInt(32.W)
}

class DataInfo extends Bundle {
  val data = UInt(3.W)
  val strb = UInt(32.W)
}

class Ram extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val ren   = Input(Bool())
    val raddr = Input(UInt(32.W))
    val rdata = Output(UInt(32.W))

    val wen   = Input(Bool())
    val waddr = Input(UInt(32.W))
    val wdata = Input(UInt(32.W))
    val wstrb = Input(UInt(8.W))
  })
}

class AxiRamWrapper extends Module {
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

  val Sram = new Ram

// ar channel
  val arFifo  = Module(new Fifo[AddrInfo](new AddrInfo, 4))
  val arCount = RegInit(0.U)

  io.arready              := arFifo.io.enq.ready && (arCount === 0.U)
  arFifo.io.enq.valid     := io.arvalid && (arCount === 0.U)
  arFifo.io.enq.bits.addr := io.araddr
  arFifo.io.enq.bits.id   := io.arid

// r channel
  val rCount = RegInit(0.U)
  Sram.io.ren         := arFifo.io.deq.valid && (rCount === 0.U)
  Sram.io.raddr       := arFifo.io.deq.bits.addr
  io.rdata            := Sram.io.rdata
  io.rid              := arFifo.io.deq.bits.id
  io.rvalid           := Sram.io.ren
  arFifo.io.deq.ready := io.rready && (rCount === 0.U)

// aw channel
  val awFifo  = Module(new Fifo[AddrInfo](new AddrInfo, 4))
  val awCount = RegInit(0.U)
  io.awready              := awFifo.io.enq.ready && (awCount === 0.U)
  awFifo.io.enq.valid     := io.awvalid && (awCount === 0.U)
  awFifo.io.enq.bits.addr := io.awaddr
  awFifo.io.enq.bits.id   := io.awid

// w channel
  val wFifo  = Module(new Fifo[DataInfo](new DataInfo, 4))
  val wCount = RegInit(0.U)
  io.wready              := wFifo.io.enq.ready && (wCount === 0.U)
  wFifo.io.enq.valid     := io.wvalid && (wCount === 0.U)
  wFifo.io.enq.bits.data := io.wdata
  wFifo.io.enq.bits.strb := io.wstrb

// b channel
  val bCount = RegInit(0.U)
  Sram.io.wen         := awFifo.io.deq.valid && wFifo.io.deq.valid && (bCount === 0.U)
  Sram.io.waddr       := awFifo.io.deq.bits.addr
  Sram.io.wdata       := wFifo.io.deq.bits.data
  Sram.io.wstrb       := wFifo.io.deq.bits.strb
  io.bvalid           := Sram.io.wen
  arFifo.io.deq.ready := io.rready && (rCount === 0.U)

}
