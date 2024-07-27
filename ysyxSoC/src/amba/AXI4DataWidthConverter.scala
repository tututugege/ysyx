package ysyx

import chisel3._
import chisel3.util._

import freechips.rocketchip.amba.axi4._
import freechips.rocketchip.util._

class AXI4DataWidthConverter64to32IO extends Bundle {
  val clock = Input(Clock())
  val reset = Input(Bool())
  val in    = Flipped(new AXI4Bundle(AXI4BundleParameters(addrBits = 32, dataBits = 64, idBits = 4)))
  val out   = new AXI4Bundle(AXI4BundleParameters(addrBits = 32, dataBits = 32, idBits = 4))
}

class AXI4DataWidthConverter64to32 extends BlackBox {
  val io = IO(new AXI4DataWidthConverter64to32IO)
}

class AXI4DataWidthConverter64to32Chisel extends Module {
  val io = IO(new AXI4DataWidthConverter64to32IO)

  val arHiFifo = Reg(Vec(2, Bool()))
  val tail     = RegInit(0.U(1.W))
  val head     = RegInit(0.U(1.W))

  head := Mux(io.in.r.fire && io.in.r.bits.last, ~head, head)
  tail := Mux(io.in.ar.fire, ~tail, tail)

  arHiFifo(0) := Mux(
    io.in.ar.fire && ~tail.asBool,
    io.in.ar.bits.addr(2),
    Mux(io.in.r.fire && ~io.in.r.bits.last && ~head.asBool, ~arHiFifo(0), arHiFifo(0))
  )
  arHiFifo(1) := Mux(
    io.in.ar.fire && tail.asBool,
    io.in.ar.bits.addr(2),
    Mux(io.in.r.fire && ~io.in.r.bits.last && head.asBool, ~arHiFifo(1), arHiFifo(1))
  )

  val arHi = arHiFifo(head)

  io.out.ar <> io.in.ar

  io.out.r <> io.in.r
  io.in.r.bits.data := Mux(
    arHi,
    io.out.r.bits.data ## 0.U(32.W),
    0.U(32.W) ## io.out.r.bits.data
  )

  io.out.aw <> io.in.aw

  val wHi = Wire(Bool())
  wHi := io.in.w.bits.strb(7, 4).orR

  io.out.w <> io.in.w
  io.out.w.bits.strb := Mux(wHi, io.in.w.bits.strb(7, 4), io.in.w.bits.strb(3, 0))
  io.out.w.bits.data := Mux(wHi, io.in.w.bits.data(63, 32), io.in.w.bits.data(31, 0))

  io.out.b <> io.in.b

}
