package ysyx

import chisel3._
import chisel3.util._

import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class PS2IO extends Bundle {
  val clk  = Input(Bool())
  val data = Input(Bool())
}

class PS2CtrlIO extends Bundle {
  val clock = Input(Clock())
  val reset = Input(Bool())
  val in    = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
  val ps2   = new PS2IO
}

class ps2_top_apb extends BlackBox {
  val io = IO(new PS2CtrlIO)
}

class ps2Chisel extends Module {
  val io = IO(new PS2CtrlIO)

  val sampling = Wire(Bool())
  val fire     = Wire(Bool())
  val done     = Wire(Bool())
  val ps2Clk   = Reg(UInt(2.W))
  val count    = Reg(UInt(10.W))
  val fifo     = Reg(Vec(16, UInt(8.W)))
  val head     = RegInit(0.U(4.W))
  val tail     = RegInit(0.U(4.W))

  sampling := ps2Clk(1) && ~ps2Clk(0)
  done     := count === 10.U
  ps2Clk   := ps2Clk(0) ## io.ps2.clk
  count    := Mux(sampling, Mux(done, 0.U, count + 1.U), count)

  val buffer = Reg(UInt(10.W))
  buffer := Mux(sampling, io.ps2.data ## buffer(9, 1), buffer)

  tail := Mux(sampling && done, tail + 1.U, tail)
  for (i <- 0 until fifo.length) {
    fifo(i) := Mux(tail === i.U && sampling && done, buffer(8, 1), fifo(i))
  }

  val ready = RegInit(false.B)

  ready := Mux(sampling && done, true.B, Mux(fire && head + 1.U === tail, false.B, ready))
  head  := Mux(fire && ready, head + 1.U, head)

  fire          := io.in.pready && ~io.in.pwrite && io.in.psel && io.in.penable
  io.in.pready  := true.B
  io.in.pslverr := false.B
  io.in.prdata  := Mux(ready, fifo(head), 0.U)

}

class APBKeyboard(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
  val node = APBSlaveNode(
    Seq(
      APBSlavePortParameters(
        Seq(APBSlaveParameters(address = address, executable = true, supportsRead = true, supportsWrite = true)),
        beatBytes = 4
      )
    )
  )

  lazy val module = new Impl
  class Impl extends LazyModuleImp(this) {
    val (in, _)    = node.in(0)
    val ps2_bundle = IO(new PS2IO)

    val mps2 = Module(new ps2Chisel)
    mps2.io.clock := clock
    mps2.io.reset := reset
    mps2.io.in <> in
    ps2_bundle <> mps2.io.ps2
  }
}
