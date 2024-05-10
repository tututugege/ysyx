import chisel3._
import chisel3.util._

class AxiLiteArbiter extends Module {
  val io = IO(new Bundle {
    val DataAxiLite = Flipped(new AxiLiteBundle())
    val InstAxiLite = Flipped(new AxiLiteBundle())

    val master = new AxiLiteBundle()
  })

  val ar = io.master.ar
  val r  = io.master.r
  val aw = io.master.aw
  val w  = io.master.w
  val b  = io.master.b

  // r channel buffer
  val instBufValid = RegInit(false.B)
  val instBufRdata = Reg(UInt(64.W))
  val instBufRlast = Reg(Bool())
  val instBufRresp = Reg(UInt(2.W))

  val dataBufValid = RegInit(false.B)
  val dataBufRdata = Reg(UInt(64.W))
  val dataBufRlast = Reg(Bool())
  val dataBufRresp = Reg(UInt(2.W))

  val instNeedBuf = ~r.bits.rid(0) && ~io.InstAxiLite.r.ready && r.fire
  val dataNeedBuf = r.bits.rid(0) && ~io.DataAxiLite.r.ready && r.fire

  instBufValid := Mux(
    instNeedBuf,
    true.B,
    Mux(
      io.InstAxiLite.r.fire && instBufValid,
      false.B,
      instBufValid
    )
  )

  instBufRdata := Mux(
    instNeedBuf,
    r.bits.rdata,
    instBufRdata
  )

  instBufRlast := Mux(
    instNeedBuf,
    r.bits.rlast,
    instBufRlast
  )

  instBufRresp := Mux(
    instNeedBuf,
    r.bits.rresp,
    instBufRresp
  )
  dataBufValid := Mux(
    dataNeedBuf,
    true.B,
    Mux(
      io.DataAxiLite.r.fire && dataBufValid,
      false.B,
      dataBufValid
    )
  )

  dataBufRdata := Mux(
    dataNeedBuf,
    r.bits.rdata,
    dataBufRdata
  )

  instBufRlast := Mux(
    dataNeedBuf,
    r.bits.rlast,
    dataBufRlast
  )

  instBufRresp := Mux(
    dataNeedBuf,
    r.bits.rresp,
    dataBufRresp
  )

  io.DataAxiLite.aw.ready := aw.ready
  aw.valid                := io.DataAxiLite.aw.valid
  aw.bits.awaddr          := io.DataAxiLite.aw.bits.awaddr
  aw.bits.awid            := io.DataAxiLite.aw.bits.awid
  aw.bits.awlen           := io.DataAxiLite.aw.bits.awlen
  aw.bits.awsize          := io.DataAxiLite.aw.bits.awsize
  aw.bits.awburst         := io.DataAxiLite.aw.bits.awburst

  io.DataAxiLite.w.ready := w.ready
  w.valid                := io.DataAxiLite.w.valid
  w.bits.wdata           := io.DataAxiLite.w.bits.wdata
  w.bits.wstrb           := io.DataAxiLite.w.bits.wstrb
  w.bits.wlast           := io.DataAxiLite.w.bits.wlast

  b.ready                     := io.DataAxiLite.b.ready
  io.DataAxiLite.b.valid      := b.valid
  io.DataAxiLite.b.bits.bresp := b.bits.bresp
  io.DataAxiLite.b.bits.bid   := b.bits.bid

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

  ar.valid        := io.InstAxiLite.ar.valid || io.DataAxiLite.ar.valid
  ar.bits.araddr  := masterAr.araddr
  ar.bits.arid    := masterAr.arid
  ar.bits.arlen   := masterAr.arlen
  ar.bits.arsize  := masterAr.arsize
  ar.bits.arburst := masterAr.arburst

  io.InstAxiLite.ar.ready := ar.ready && ~io.DataAxiLite.ar.valid
  io.DataAxiLite.ar.ready := ar.ready

  // choose master according to rid in r channel
  r.ready := Mux(
    r.bits.rid(0),
    io.DataAxiLite.r.ready || ~dataBufValid,
    io.InstAxiLite.r.ready || ~instBufValid
  )

  io.DataAxiLite.r.bits.rresp := Mux(dataBufValid, dataBufRresp, r.bits.rresp)
  io.DataAxiLite.r.bits.rdata := Mux(dataBufValid, dataBufRdata, r.bits.rdata)
  io.DataAxiLite.r.bits.rlast := Mux(dataBufValid, dataBufRlast, r.bits.rlast)
  io.DataAxiLite.r.bits.rid   := 1.U

  io.InstAxiLite.r.bits.rresp := Mux(instBufValid, instBufRresp, r.bits.rresp)
  io.InstAxiLite.r.bits.rdata := Mux(instBufValid, instBufRdata, r.bits.rdata)
  io.InstAxiLite.r.bits.rlast := Mux(instBufValid, instBufRlast, r.bits.rlast)
  io.InstAxiLite.r.bits.rid   := 0.U

  io.DataAxiLite.r.valid := r.bits.rid(0) && r.valid || dataBufValid
  io.InstAxiLite.r.valid := ~r.bits.rid(0) && r.valid || instBufValid

}
