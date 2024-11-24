package ysyx

import chisel3._
import chisel3.util._

class bitrev extends BlackBox {
  val io = IO(Flipped(new SPIIO(1)))
}

class bitrevChisel extends RawModule { // we do not need clock and reset
  val io   = IO(Flipped(new SPIIO(1)))
  val data = withClock(io.sck.asClock) { Reg(Vec(8, UInt(1.W))) }
  val sel  = withClockAndReset(io.sck.asClock, io.ss(0).asAsyncReset) { RegInit(1.U(16.W)) }

  sel := Mux(io.ss(0), sel, sel(14, 0) ## sel(15))

  for (i <- 0 until 8)
    data(i) := Mux(sel(i) && ~io.ss.asBool, io.mosi, data(i))
  io.miso   := MuxCase(true.B, for (i <- 0 until 8) yield sel(i + 8) -> data(7 - i))

}
