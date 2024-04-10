import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

object AxiConstants {
  val SizeBits = 3
  val ProtBits = 3
}

case class AxiParamsBundle(addrBits: Int, dataBits: Int, idBits: Int)

class AxiWriteRequestChannel(params: AxiParamsBundle) extends Bundle {
  val awid   = UInt(params.idBits.W)
  val awaddr = UInt(params.addrBits.W)
  val awsize = UInt(AxiConstants.SizeBits.W)
  val awprot = UInt(AxiConstants.ProtBits.W)
}

class AxiWriteDateChannel(params: AxiParamsBundle) extends Bundle {
  val wdata = UInt(params.dataBits.W)
  val wstrb = UInt((params.dataBits / 8).W)
}

class AxiWriteResponseChannel(params: AxiParamsBundle) extends Bundle {
  val bid = UInt(params.idBits.W)
}

class AxiReadRequestChannel(params: AxiParamsBundle) extends Bundle {
  val arid   = UInt(params.idBits.W)
  val araddr = UInt(params.addrBits.W)
  val arsize = UInt(AxiConstants.SizeBits.W)
  val arprot = UInt(AxiConstants.ProtBits.W)
}

class AxiReadDataChannel(params: AxiParamsBundle) extends Bundle {
  val rid   = UInt(params.idBits.W)
  val rdata = UInt(params.dataBits.W)
}

class AxiLiteBundle(params: AxiParamsBundle) extends Bundle {
  val aw = Decoupled(new AxiWriteRequestChannel(params))
  val w  = Decoupled(new AxiWriteDateChannel(params))
  val b  = Flipped(Decoupled(new AxiWriteResponseChannel(params)))
  val ar = Decoupled(new AxiReadRequestChannel(params))
  val r  = Flipped(Decoupled(new AxiReadDataChannel(params)))
}

object ConnectBlackBoxAndAxi {
  def apply(slave: Ram, master: AxiLiteBundle): Unit = {

    /* aw */
    master.aw.ready  := slave.io.awready
    slave.io.awvalid := master.aw.valid
    slave.io.awid    := master.aw.bits.awid
    slave.io.awaddr  := master.aw.bits.awaddr
    slave.io.awsize  := master.aw.bits.awsize
    slave.io.awprot  := master.aw.bits.awprot

    /* w */
    master.w.ready  := slave.io.wready
    slave.io.wvalid := master.w.valid
    slave.io.wdata  := master.w.bits.wdata
    slave.io.wstrb  := master.w.bits.wstrb

    /* b */
    slave.io.bready   := master.b.ready
    master.b.valid    := slave.io.bvalid
    master.b.bits.bid := slave.io.bid

    /* ar */
    master.ar.ready  := slave.io.arready
    slave.io.arvalid := master.ar.valid
    slave.io.arid    := master.ar.bits.arid
    slave.io.araddr  := master.ar.bits.araddr
    slave.io.arsize  := master.ar.bits.arsize
    slave.io.arprot  := master.ar.bits.arprot

    /* r */
    slave.io.rready     := master.r.ready
    master.r.valid      := slave.io.rvalid
    master.r.bits.rid   := slave.io.rid
    master.r.bits.rdata := slave.io.rdata
  }
}
