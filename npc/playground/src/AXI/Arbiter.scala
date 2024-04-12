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

  val busy = RegInit(false.B)
  val arid = Reg(UInt(3.W)) // master can't be changed before the transaction is completed

  // IF has a higher priorty in ar channel
  io.AxiLite.ar <> Mux(~io.InstAxiLite.ar.valid && io.DataAxiLite.ar.valid, io.DataAxiLite.ar, io.InstAxiLite.ar)

  // choose master according to rid in r channel
  io.AxiLite.r <> Mux(io.AxiLite.r.bits.rid(0), io.DataAxiLite.ar, io.InstAxiLite.ar)
}
