import chisel3._
import chisel3.util._

class AxiLiteArbiter extends Module {

  val io = IO(new Bundle {
    val DataAxiLite = Flipped(new AxiLiteBundle(TOP.axiParams))
    val InstAxiLite = Flipped(new AxiLiteBundle(TOP.axiParams))

    val AxiLite = new AxiLiteBundle(TOP.axiParams)
  })

  io.AxiLite.aw <> io.DataAxiLite.aw
  io.AxiLite.w <> io.DataAxiLite.w
  io.AxiLite.b <> io.DataAxiLite.b

  io.InstAxiLite.w.ready    := false.B
  io.InstAxiLite.aw.ready   := false.B
  io.InstAxiLite.b.valid    := false.B
  io.InstAxiLite.b.bits.bid := 0.U

  // IF has a higher priorty in ar channel
  io.AxiLite.ar.bits := Mux(
    io.DataAxiLite.ar.valid,
    io.DataAxiLite.ar.bits,
    io.InstAxiLite.ar.bits
  )

  io.AxiLite.ar.valid := io.InstAxiLite.ar.valid || io.DataAxiLite.ar.valid

  io.InstAxiLite.ar.ready := io.AxiLite.ar.ready && ~io.DataAxiLite.ar.valid
  io.DataAxiLite.ar.ready := io.AxiLite.ar.ready

  // choose master according to rid in r channel
  io.AxiLite.r.ready     := Mux(io.AxiLite.r.bits.rid(0), io.DataAxiLite.r.ready, io.InstAxiLite.r.ready)
  io.DataAxiLite.r.bits  := io.AxiLite.r.bits
  io.InstAxiLite.r.bits  := io.AxiLite.r.bits
  io.DataAxiLite.r.valid := io.AxiLite.r.bits.rid(0) && io.AxiLite.r.valid
  io.InstAxiLite.r.valid := ~io.AxiLite.r.bits.rid(0) && io.AxiLite.r.valid
}
