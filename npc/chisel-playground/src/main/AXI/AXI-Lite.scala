import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

object AxiConstants {
  val addrBits  = 32
  val dataBits  = 32
  val sizeBits  = 3
  val idBits    = 4
  val lenBits   = 8
  val burstBits = 2
  val respBits  = 2
}

class SocMasterBundle extends Bundle {
  // aw
  val awready = Input(Bool())
  val awvalid = Output(Bool())
  val awaddr  = Output(UInt(32.W))
  val awid    = Output(UInt(4.W))
  val awlen   = Output(UInt(8.W))
  val awsize  = Output(UInt(3.W))
  val awburst = Output(UInt(2.W))
  val awlock  = Output(Bool())
  val awcache = Output(UInt(4.W))
  val awprot  = Output(UInt(3.W))
  val awqos   = Output(UInt(4.W))

  // w
  val wready = Input(Bool())
  val wvalid = Output(Bool())
  val wdata  = Output(UInt(32.W))
  val wstrb  = Output(UInt(4.W))
  val wlast  = Output(Bool())

  // b
  val bready = Output(Bool())
  val bvalid = Input(Bool())
  val bresp  = Input(UInt(2.W))
  val bid    = Input(UInt(4.W))

  // ar
  val arready = Input(Bool())
  val arvalid = Output(Bool())
  val araddr  = Output(UInt(32.W))
  val arid    = Output(UInt(4.W))
  val arlen   = Output(UInt(8.W))
  val arsize  = Output(UInt(3.W))
  val arburst = Output(UInt(2.W))
  val arlock  = Output(Bool())
  val arcache = Output(UInt(4.W))
  val arprot  = Output(UInt(3.W))
  val arqos   = Output(UInt(4.W))

  // r
  val rready = Output(Bool())
  val rvalid = Input(Bool())
  val rresp  = Input(UInt(2.W))
  val rdata  = Input(UInt(32.W))
  val rlast  = Input(Bool())
  val rid    = Input(UInt(4.W))
}

object ConnectAxiSoC {
  def apply(Axi: AxiLiteBundle, Soc: SocMasterBundle): Unit = {
    Axi.aw.ready := Soc.awready
    Soc.awvalid  := Axi.aw.valid
    Soc.awaddr   := Axi.aw.bits.awaddr
    Soc.awid     := Axi.aw.bits.awid
    Soc.awlen    := Axi.aw.bits.awlen
    Soc.awsize   := Axi.aw.bits.awsize
    Soc.awburst  := Axi.aw.bits.awburst

    Axi.w.ready := Soc.wready
    Soc.wvalid  := Axi.w.valid
    Soc.wdata   := Axi.w.bits.wdata
    Soc.wstrb   := Axi.w.bits.wstrb
    Soc.wlast   := Axi.w.bits.wlast

    Soc.bready       := Axi.b.ready
    Axi.b.valid      := Soc.bvalid
    Axi.b.bits.bresp := Soc.bresp
    Axi.b.bits.bid   := Soc.bid

    Axi.ar.ready := Soc.arready
    Soc.arvalid  := Axi.ar.valid
    Soc.araddr   := Axi.ar.bits.araddr
    Soc.arid     := Axi.ar.bits.arid
    Soc.arlen    := Axi.ar.bits.arlen
    Soc.arsize   := Axi.ar.bits.arsize
    Soc.arburst  := Axi.ar.bits.arburst

    Soc.rready       := Axi.r.ready
    Axi.r.valid      := Soc.rvalid
    Axi.r.bits.rresp := Soc.rresp
    Axi.r.bits.rdata := Soc.rdata
    Axi.r.bits.rlast := Soc.rlast
    Axi.r.bits.rid   := Soc.rid
  }
}

class AxiWriteRequestChannel() extends Bundle {
  val awaddr  = UInt(AxiConstants.addrBits.W)
  val awid    = UInt(AxiConstants.idBits.W)
  val awlen   = UInt(AxiConstants.lenBits.W)
  val awsize  = UInt(AxiConstants.sizeBits.W)
  val awburst = UInt(AxiConstants.burstBits.W)
}

class AxiWriteDateChannel() extends Bundle {
  val wdata = UInt(AxiConstants.dataBits.W)
  val wstrb = UInt((AxiConstants.dataBits / 8).W)
  val wlast = Bool()
}

class AxiWriteResponseChannel() extends Bundle {
  val bresp = UInt(AxiConstants.respBits.W)
  val bid   = UInt(AxiConstants.idBits.W)
}

class AxiReadRequestChannel() extends Bundle {
  val araddr  = UInt(AxiConstants.addrBits.W)
  val arid    = UInt(AxiConstants.idBits.W)
  val arlen   = UInt(AxiConstants.lenBits.W)
  val arsize  = UInt(AxiConstants.sizeBits.W)
  val arburst = UInt(AxiConstants.burstBits.W)
}

class AxiReadDataChannel() extends Bundle {
  val rresp = UInt(AxiConstants.respBits.W)
  val rdata = UInt(AxiConstants.dataBits.W)
  val rlast = Bool()
  val rid   = UInt(AxiConstants.idBits.W)
}

class AxiLiteBundle() extends Bundle {
  val aw = Decoupled(new AxiWriteRequestChannel())
  val w  = Decoupled(new AxiWriteDateChannel())
  val b  = Flipped(Decoupled(new AxiWriteResponseChannel()))
  val ar = Decoupled(new AxiReadRequestChannel())
  val r  = Flipped(Decoupled(new AxiReadDataChannel()))
}
