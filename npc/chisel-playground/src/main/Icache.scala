import chisel3._
import chisel3.util._
import NPC._

class IcacheBundle extends Bundle {
  val ar = Decoupled(new AxiReadRequestChannel())
  val r  = Flipped(Decoupled(new AxiReadDataChannel()))
}

class Icache(wayNum: Int, indexWidth: Int, offsetWidth: Int) extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(new IcacheBundle)
    val out = new IcacheBundle
  })
  val tagWidth = 32 - indexWidth - offsetWidth
  val inSdram  = (io.in.ar.bits.araddr(31, 29) === "b101".U)

  val idle :: read :: replace :: refill :: bypass :: Nil = Enum(5)

  /* input information for req */
  val bankNum   = 1 << (offsetWidth - 2)
  val state     = RegInit(idle)
  val hit       = Wire(Bool())
  val inTag     = Wire(UInt(tagWidth.W))
  val inBankIdx = Wire(UInt((if (offsetWidth > 2) offsetWidth - 2 else 1).W))
  val inIndex   = Wire(UInt(indexWidth.W))
  val ready     = Wire(Bool())

  val bypassReady = Wire(Bool())

  inTag   := io.in.ar.bits.araddr(31, 31 - tagWidth + 1)
  inIndex := io.in.ar.bits.araddr(offsetWidth + indexWidth - 1, offsetWidth)

  if (offsetWidth > 2) {
    inBankIdx := io.in.ar.bits.araddr(offsetWidth - 1, 2)
  } else {
    inBankIdx := 0.U
  }

  /* information buffer for judge and select */
  val bufTag     = Reg(UInt(tagWidth.W))
  val bufBankIdx = Reg(UInt((if (offsetWidth > 2) offsetWidth - 2 else 1).W))
  val bufIndex   = Reg(UInt(indexWidth.W))

  ready       := (state === idle || state === read && hit) && io.in.ar.valid
  bypassReady := ready && ~inSdram || state === bypass
  bufTag      := Mux(ready, inTag, bufTag)
  bufBankIdx  := Mux(ready, inBankIdx, bufBankIdx)
  bufIndex    := Mux(ready, inIndex, bufIndex)

  val indexAddr = Wire(UInt(indexWidth.W))
  indexAddr := Mux(state === replace || state === refill, bufIndex, inIndex)

  /* FSM */
  switch(state) {
    is(idle) {
      state := Mux(io.in.ar.valid, Mux(inSdram, read, bypass), idle)
    }
    is(read) {
      state := Mux(hit, Mux(io.in.ar.valid, Mux(inSdram, read, bypass), idle), replace)
    }
    is(replace) {
      state := Mux(io.out.ar.fire, refill, replace)
    }
    is(refill) {
      state := Mux(io.out.r.fire && io.out.r.bits.rlast, idle, refill)
    }
    is(bypass) {
      state := Mux(io.out.r.fire && io.out.r.bits.rlast, idle, bypass)
    }
  }

  /* cache */
  val cache = for (i <- 0 until wayNum) yield {
    for (j <- 0 until bankNum) yield {
      SyncReadMem(1 << indexWidth, UInt(32.W))
    }
  }

  val waySel        = Wire(Vec(wayNum, Bool()))
  val cacheWayRdata = Wire(Vec(wayNum, Vec(bankNum, UInt(32.W))))
  val cacheRdata    = Wire(UInt(32.W))

  /* tag and valid */
  val tagv = for (i <- 0 until wayNum) yield {
    SyncReadMem(1 << indexWidth, UInt((tagWidth + 1).W))
  }
  val tagvRdata = Wire(Vec(wayNum, UInt((tagWidth + 1).W)))

  hit := waySel.asUInt.orR

  io.in.ar.ready := Mux(bypassReady, io.out.ar.ready, ready)

  /* replace: read request */
  io.out.ar.valid     := Mux(bypassReady, io.in.ar.valid, state === replace)
  io.out.ar.bits.arid := 0.U
  io.out.ar.bits.araddr := Mux(
    state === replace,
    bufTag ## bufIndex ## Fill(offsetWidth, 0.U(1.W)),
    io.in.ar.bits.araddr
  )
  io.out.ar.bits.arburst := Mux(state === replace, "b01".U, "b00".U)
  io.out.ar.bits.arlen   := Mux(state === replace, ((1 << (offsetWidth - 2)) - 1).U, "b00".U)
  io.out.ar.bits.arsize  := Mux(state === replace, "b010".U, io.in.ar.bits.arsize)

  /* refill */
  io.out.r.ready := (state === refill || state === bypass)

  val Lfsr = Module(new LFSR(8))
  val rand = Reg(UInt((log2Up(wayNum)).W))
  rand := (if (wayNum >= 2) Mux(state === read && ~hit, Lfsr.io.out, rand) else 0.U) // random evcition

  val refillCout = Reg(UInt((if (offsetWidth > 2) offsetWidth - 2 else 1).W))
  refillCout := Mux(state === replace, 0.U, Mux(state === refill && io.out.r.fire, refillCout + 1.U, refillCout))

  // return data to cpu core
  val retFifo = Module(new Fifo(UInt(64.W), 2))

  retFifo.io.enq.valid := (state === read && hit) || (state === refill && refillCout === bufBankIdx && io.out.r.valid) || (state === bypass && io.out.r.valid)
  retFifo.io.enq.bits := Mux(
    state === read,
    Fill(2, cacheRdata),
    io.out.r.bits.rdata
  )
  retFifo.io.deq.ready := io.in.r.ready

  io.in.r.valid      := retFifo.io.deq.valid
  io.in.r.bits.rdata := retFifo.io.deq.bits
  io.in.r.bits.rid   := 0.U
  io.in.r.bits.rlast := 1.U
  io.in.r.bits.rresp := 0.U

  /* cache and tagv */
  for (i <- 0 until wayNum) {
    for (j <- 0 until bankNum) {
      cacheWayRdata(i)(j) := cache(i)(j).readWrite(
        indexAddr,
        (if (bankNum == 1)
           Mux(bufIndex(0), io.out.r.bits.rdata(63, 32), io.out.r.bits.rdata(31, 0))
         else (if (j % 2 == 1) io.out.r.bits.rdata(63, 32)
               else io.out.r.bits.rdata(31, 0))),
        (inBankIdx === j.U && (state === idle || state === read && hit) && io.in.ar.valid) ||
          (refillCout === j.U && state === refill && io.out.r.valid && rand === i.U),
        state === refill && refillCout === j.U && io.out.r.valid && rand === i.U
      )
    }
  }

  cacheRdata := Mux1H(
    for (i <- 0 until wayNum) yield waySel(i) -> cacheWayRdata(i.U)(if (offsetWidth > 2) bufBankIdx else 0.U)
  )

  for (i <- 0 until wayNum) {
    tagvRdata(i) := tagv(i).readWrite(
      indexAddr,
      bufTag ## 1.U(1.W),
      (state === idle || state === read && hit) ||
        state === replace && io.out.ar.fire && rand === i.U,
      state === replace && io.out.ar.fire && rand === i.U
    )
  }

  for (i <- 0 until wayNum)
    waySel(i) := tagvRdata(i)(tagWidth, 1) === bufTag && tagvRdata(i)(0)

  /* performance counter*/
  val cacheAccess = IO(Output(UInt(64.W)))
  val cacheMiss   = IO(Output(UInt(64.W)))

  if (CONFIG_CNT) {

    val cacheAccessCnt = RegInit(0.U(64.W))
    val cacheMissCnt   = RegInit(0.U(64.W))

    cacheAccessCnt := Mux(io.in.ar.fire, cacheAccessCnt + 1.U, cacheAccessCnt)
    cacheMissCnt   := Mux(io.out.ar.fire, cacheMissCnt + 1.U, cacheMissCnt)
    cacheMiss      := cacheMissCnt
    cacheAccess    := cacheAccessCnt
  } else {
    cacheMiss   := 0.U
    cacheAccess := 0.U

  }
}
