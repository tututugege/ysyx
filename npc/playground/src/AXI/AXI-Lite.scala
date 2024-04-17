import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

object AxiConstants {
  val addrBits  = 32
  val dataBits  = 64
  val sizeBits  = 3
  val idBits    = 4
  val lenBits   = 8
  val burstBits = 2
  val respBits  = 2
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
