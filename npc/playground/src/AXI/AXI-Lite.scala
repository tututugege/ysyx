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
