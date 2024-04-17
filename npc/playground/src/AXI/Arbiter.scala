import chisel3._
import chisel3.util._

class SocMasterBundle extends Bundle {
  // aw
  val awready = Input(Bool())
  val awvalid = Output(Bool())
  val awaddr  = Output(UInt(32.W))
  val awid    = Output(UInt(4.W))
  val awlen   = Output(UInt(8.W))
  val awsize  = Output(UInt(3.W))
  val awburst = Output(UInt(2.W))

  // w
  val wready = Input(Bool())
  val wvalid = Output(Bool())
  val wdata  = Output(UInt(64.W))
  val wstrb  = Output(UInt(8.W))
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

  // r
  val rready = Output(Bool())
  val rvalid = Input(Bool())
  val rresp  = Input(UInt(2.W))
  val rdata  = Input(UInt(64.W))
  val rlast  = Input(Bool())
  val rid    = Input(UInt(4.W))
}

class AxiLiteArbiter extends Module {
  val io = IO(new Bundle {
    val DataAxiLite = Flipped(new AxiLiteBundle())
    val InstAxiLite = Flipped(new AxiLiteBundle())

    val master = new SocMasterBundle()
  })

  io.DataAxiLite.aw.ready := io.master.awready
  io.master.awvalid       := io.DataAxiLite.aw.valid
  io.master.awaddr        := io.DataAxiLite.aw.bits.awaddr
  io.master.awid          := io.DataAxiLite.aw.bits.awid
  io.master.awlen         := io.DataAxiLite.aw.bits.awlen
  io.master.awsize        := io.DataAxiLite.aw.bits.awsize
  io.master.awburst       := io.DataAxiLite.aw.bits.awburst

  io.DataAxiLite.w.ready := io.master.wready
  io.master.wvalid       := io.DataAxiLite.w.valid
  io.master.wdata        := io.DataAxiLite.w.bits.wdata
  io.master.wstrb        := io.DataAxiLite.w.bits.wstrb
  io.master.wlast        := io.DataAxiLite.w.bits.wlast

  io.master.bready            := io.DataAxiLite.b.ready
  io.DataAxiLite.b.valid      := io.master.bvalid
  io.DataAxiLite.b.bits.bresp := io.master.bresp
  io.DataAxiLite.b.bits.bid   := io.master.bid

  io.InstAxiLite.w.ready      := false.B
  io.InstAxiLite.aw.ready     := false.B
  io.InstAxiLite.b.valid      := false.B
  io.InstAxiLite.b.bits.bid   := 0.U
  io.InstAxiLite.b.bits.bresp := 0.U

  // MEM has a higher priorty in ar channel
  val masterAr = Mux(
    io.DataAxiLite.ar.valid,
    io.DataAxiLite.ar.bits,
    io.InstAxiLite.ar.bits
  )

  io.master.arvalid := io.InstAxiLite.ar.valid || io.DataAxiLite.ar.valid
  io.master.araddr  := masterAr.araddr
  io.master.arid    := masterAr.arid
  io.master.arlen   := masterAr.arlen
  io.master.arsize  := masterAr.arsize
  io.master.arburst := masterAr.arburst

  io.InstAxiLite.ar.ready := io.master.arready && ~io.DataAxiLite.ar.valid
  io.DataAxiLite.ar.ready := io.master.arready

  // choose master according to rid in r channel
  io.master.rready            := Mux(io.master.rid(0), io.DataAxiLite.r.ready, io.InstAxiLite.r.ready)
  io.DataAxiLite.r.bits.rresp := io.master.rresp
  io.DataAxiLite.r.bits.rdata := io.master.rdata
  io.DataAxiLite.r.bits.rlast := io.master.rlast
  io.DataAxiLite.r.bits.rid   := io.master.rid

  io.InstAxiLite.r.bits.rresp := io.master.rresp
  io.InstAxiLite.r.bits.rdata := io.master.rdata
  io.InstAxiLite.r.bits.rlast := io.master.rlast
  io.InstAxiLite.r.bits.rid   := io.master.rid

  io.DataAxiLite.r.valid := io.master.rid(0) && io.master.rvalid
  io.InstAxiLite.r.valid := ~io.master.rid(0) && io.master.rvalid
}
