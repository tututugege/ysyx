import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

class CrossBar extends Module {
  val io = IO(new Bundle {
    val master = Flipped(new AxiLiteBundle())
    val clint  = new AxiLiteBundle()
    val other  = new AxiLiteBundle()
  })

  val arSel = Wire(Bool())
  val rSel  = Wire(Bool())
  val awSel = Wire(Bool())
  val wSel  = Wire(Bool())
  val bSel  = Wire(Bool())

  val ar = io.master.ar
  val r  = io.master.r
  val aw = io.master.aw
  val w  = io.master.w
  val b  = io.master.b

  // the response must be consistent with the order of request in our core
  val arFifo = Module(new Fifo(Bool(), 2))
  val awFifo = Module(new Fifo(Bool(), 2))

  // if aw channel shakes hands before wchannel, the sel is necessary to select channel
  val awSelReg  = Reg(UInt(2.W))
  val awFireReg = RegInit(false.B)
  val wFireReg  = RegInit(false.B)

  // ar aw w channel
  awFireReg := Mux(awFifo.io.enq.fire, false.B, Mux(aw.fire, true.B, awFireReg))
  wFireReg  := Mux(awFifo.io.enq.fire, false.B, Mux(w.fire, true.B, wFireReg))

  arSel := ar.bits.araddr(31, 16) === "h0200".U
  awSel := aw.bits.awaddr(31, 16) === "h0200".U
  wSel  := Mux(awFireReg, awSelReg, awSel)

  arFifo.io.enq.valid := ar.fire
  arFifo.io.enq.bits  := arSel

  awFifo.io.enq.valid := aw.fire
  awFifo.io.enq.bits  := awSel

  ar.ready := Mux1H(
    Seq(
      arSel -> (io.clint.ar.ready && arFifo.io.enq.ready),
      ~arSel -> (io.other.ar.ready && arFifo.io.enq.ready)
    )
  )

  aw.ready := Mux1H(
    Seq(
      awSel -> (io.clint.aw.ready && awFifo.io.enq.ready),
      ~awSel -> (io.other.aw.ready && awFifo.io.enq.ready)
    )
  )

  w.ready := Mux1H(
    Seq(
      wSel -> (io.clint.w.ready && awFifo.io.enq.ready),
      ~wSel -> (io.other.w.ready && awFifo.io.enq.ready)
    )
  )

  io.clint.ar.valid := Mux(arSel, ar.valid, false.B) && arFifo.io.enq.ready
  io.clint.ar.bits  := ar.bits
  io.clint.aw.valid := Mux(awSel, aw.valid, false.B) && awFifo.io.enq.ready
  io.clint.aw.bits  := aw.bits
  io.clint.w.valid  := Mux(wSel, w.valid, false.B) && awFifo.io.enq.ready
  io.clint.w.bits   := w.bits

  io.other.ar.valid := Mux(~arSel, ar.valid, false.B) && arFifo.io.enq.ready
  io.other.ar.bits  := ar.bits
  io.other.aw.valid := Mux(~awSel, aw.valid, false.B) && awFifo.io.enq.ready
  io.other.aw.bits  := aw.bits
  io.other.w.valid  := Mux(~wSel, w.valid, false.B) && awFifo.io.enq.ready
  io.other.w.bits   := w.bits

  // r channel
  rSel := arFifo.io.deq.bits
  bSel := awFifo.io.deq.bits

  arFifo.io.deq.ready := r.fire && r.bits.rlast
  r.bits := Mux1H(
    Seq(
      rSel -> io.clint.r.bits,
      ~rSel -> io.other.r.bits
    )
  )

  r.valid := Mux1H(
    Seq(
      rSel -> io.clint.r.valid,
      ~rSel -> io.other.r.valid
    )
  )

  // b channel
  awFifo.io.deq.ready := b.fire
  b.bits := Mux1H(
    Seq(
      bSel -> io.clint.b.bits,
      ~bSel -> io.other.b.bits
    )
  )

  b.valid := Mux1H(
    Seq(
      bSel -> io.clint.b.valid,
      ~bSel -> io.other.b.valid
    )
  )

  io.clint.r.ready := Mux(rSel, r.ready, false.B)
  io.clint.b.ready := Mux(bSel, b.ready, false.B)
  io.other.r.ready := Mux(~rSel, r.ready, false.B)
  io.other.b.ready := Mux(~bSel, b.ready, false.B)
}
