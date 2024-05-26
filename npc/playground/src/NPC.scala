import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._

object NPC {
  val START_PC = "h2FFFFFFC"
}

class CommitBundle() extends Bundle {
  val pc = Output(UInt(32.W))
  // val inst   = Output(UInt(32.W))
  val addr = Output(UInt(32.W))
  val mem  = Output(Bool())
  // val wen    = Output(Bool())
  val commit = Output(Bool())
  val ret    = Output(Bool())
  val halt   = Output(Bool())
}

class ExitSim extends BlackBox {
  val io = IO(new Bundle {
    val clock  = Input(Clock())
    val commit = Flipped(new CommitBundle)
  })
}

class NPC(XLEN: Int) extends Module {
  val io = IO(new Bundle {

    val interrupt = Input(Bool())
    val master    = new SocMasterBundle()
    val slave     = Flipped(new SocMasterBundle())
  })

  val exit   = Module(new ExitSim)
  val commit = Wire(new CommitBundle())

  exit.io.commit := commit

  /* five stages */
  val IF  = Module(new IFU(XLEN))
  val ID  = Module(new IDU(XLEN))
  val EX  = Module(new EXU(XLEN))
  val MEM = Module(new MEMU(XLEN))
  val WB  = Module(new WBU(XLEN))

  /* axi */
  val dataAxiLite = Wire(new AxiLiteBundle())
  val instAxiLite = Wire(new AxiLiteBundle())

  io.slave.awready := 0.U
  io.slave.wready  := 0.U
  io.slave.bvalid  := 0.U
  io.slave.bresp   := 0.U
  io.slave.bid     := 0.U
  io.slave.arready := 0.U
  io.slave.rvalid  := 0.U
  io.slave.rresp   := 0.U
  io.slave.rid     := 0.U
  io.slave.rlast   := 0.U
  io.slave.rdata   := 0.U

  /* stage io */
  val IFin   = IF.io.Pre2IF
  val IFout  = IF.io.IF2ID
  val IDin   = ID.io.IF2ID
  val IDout  = ID.io.ID2EX
  val EXin   = EX.io.ID2EX
  val EXout  = EX.io.EX2MEM
  val MEMin  = MEM.io.EX2MEM
  val MEMout = MEM.io.MEM2WB
  val WBin   = WB.io.MEM2WB
  val WBout  = WB.io.WBout

  val Pre2IFValid = RegInit(false.B)
  val IF2IDValid  = RegInit(false.B)
  val ID2EXValid  = RegInit(false.B)
  val EX2MEMValid = RegInit(false.B)
  val MEM2WBValid = RegInit(false.B)

  val arInstValid  = RegInit(false.B)
  val arwDataValid = RegInit(false.B)

  val IFoutValid  = Wire(Bool())
  val IDoutValid  = Wire(Bool())
  val EXoutValid  = Wire(Bool())
  val MEMoutValid = Wire(Bool())
  val WBoutValid  = Wire(Bool())

  instAxiLite.aw.valid        := false.B
  instAxiLite.aw.bits.awaddr  := 0.U
  instAxiLite.aw.bits.awid    := 0.U
  instAxiLite.aw.bits.awlen   := 0.U
  instAxiLite.aw.bits.awsize  := 0.U
  instAxiLite.aw.bits.awburst := 0.U
  instAxiLite.w.valid         := false.B
  instAxiLite.w.bits.wdata    := 0.U
  instAxiLite.w.bits.wstrb    := 0.U
  instAxiLite.w.bits.wlast    := false.B
  instAxiLite.b.ready         := false.B

  val pcBr    = Wire(UInt(XLEN.W))
  val brTaken = Wire(Bool())
  val flush   = Wire(Bool())

  /** ******************* pre IF *********************
    */

  val Pre2IF    = Wire(Decoupled(new PreToFetch(XLEN)))
  val ar        = instAxiLite.ar
  val arAssert  = RegInit(false.B)
  val arFireReg = RegInit(false.B)
  val pcNext    = Wire(UInt(XLEN.W))
  // axi ar channel
  arFireReg    := Mux(IFin.fire, false.B, Mux(ar.fire, true.B, arFireReg))
  arAssert     := Mux(IFin.fire, false.B, Mux(ar.valid, true.B, arAssert))
  Pre2IF.valid := (ar.fire || arFireReg) && ~flush

  ar.valid        := ~arFireReg && ~reset.asBool
  ar.bits.arid    := 0.U
  ar.bits.araddr  := pcNext
  ar.bits.arlen   := "h00".U
  ar.bits.arsize  := "b010".U
  ar.bits.arburst := "b00".U

  /** ******************* IF *********************
    */

  // Pre <-> IF
  StageConnect[PreToFetch](Pre2IF, IFin, Pre2IF.valid)
  Pre2IFValid := Mux(
    flush,
    false.B,
    MuxCase(
      Pre2IFValid,
      Seq(
        (IFin.fire) -> ~IF.io.brFail,
        (~IFin.valid && IFout.fire) -> false.B,
        (~IFout.fire && brTaken) -> false.B // stall and branch taken
      )
    )
  )

  arInstValid := MuxCase(
    arInstValid,
    Seq(
      (IFin.fire) -> Pre2IF.valid,
      (~IFin.valid && IFout.fire) -> false.B
    )
  )

  IF.io.inValid := Pre2IFValid
  IF.io.arValid := arInstValid

  IF.io.r <> instAxiLite.r
  IF.io.pcBr := Mux(
    WBout.bits.syscall,
    WBout.bits.pcTrap,
    Mux(WBout.bits.mret, WBout.bits.pcMret, pcBr)
  )
  IF.io.brTaken  := brTaken || WBout.bits.syscall || WBout.bits.mret
  IF.io.arAssert := arAssert

  pcNext := IF.io.pcNext

  IFoutValid := IFout.valid && Pre2IFValid && ~brTaken

  /** ******************* ID *********************
    */
  // IF <-> ID
  StageConnect[FetchToDecode](IFout, IDin, IFoutValid)

  IF2IDValid := Mux(
    flush,
    false.B,
    MuxCase(
      IF2IDValid,
      Seq(
        (IDin.fire) -> IFoutValid,
        (~IDin.valid && IDout.fire) -> false.B,
        (~IDout.fire && brTaken) -> false.B // stall and branch taken
      )
    )
  )
  ID.io.inValid := IF2IDValid

  // write back
  ID.io.regWdata := WBout.bits.regWdata
  ID.io.regWrite := WBout.bits.regWrite
  ID.io.regWaddr := WBout.bits.rd

  ID.io.brTaken := brTaken

  IDoutValid := IDout.valid && IF2IDValid && ~brTaken

  /** ******************* EX *********************
    */

  // ID <-> EX
  StageConnect[DecodeToExecute](IDout, EXin, IDoutValid)

  ID2EXValid := Mux(
    flush,
    false.B,
    MuxCase(
      ID2EXValid,
      Seq(
        (EXin.fire) -> IDoutValid,
        (~EXin.valid && EXout.fire) -> false.B
      )
    )
  )
  EX.io.inValid    := ID2EXValid
  EX.io.WBoutValid := WBout.valid

  pcBr    := EX.io.pcBr
  brTaken := EX.io.brTaken

  // forwarding
  val hazard1     = Wire(Vec(2, Bool()))
  val hazard2     = Wire(Vec(2, Bool()))
  val MEMRegWrite = MEMin.bits.regWrite && EX2MEMValid && MEMin.bits.rd.orR()
  val WBRegWrite  = WBin.bits.regWrite && MEM2WBValid && WBin.bits.rd.orR()
  val stall       = Wire(Bool())

  hazard1(0) := (MEMin.bits.rd === EXin.bits.rs1) && MEMRegWrite
  hazard2(0) := (MEMin.bits.rd === EXin.bits.rs2) && MEMRegWrite
  hazard1(1) := (WBin.bits.rd === EXin.bits.rs1) && WBRegWrite
  hazard2(1) := (WBin.bits.rd === EXin.bits.rs2) && WBRegWrite
  stall := (hazard1(0) || hazard2(0)) && MEMin.bits.memRead && EX2MEMValid ||
    (hazard1(1) || hazard2(1)) && WBin.bits.memRead && MEM2WBValid
  EX.io.stall     := stall
  EX.io.hazard1   := hazard1.asUInt
  EX.io.hazard2   := hazard2.asUInt
  EX.io.bypassMEM := MEMin.bits.aluOut
  EX.io.bypassWB  := WBin.bits.aluOut
  EX.io.bypassLD  := WBout.bits.regWdata

  EXoutValid := EXout.valid && ID2EXValid

  /** ***************** MEM ************************
    */

  val memRaw = Wire(Bool())
  StageConnect[ExecuteToMemory](EXout, MEMin, EXoutValid)

  EX2MEMValid := Mux(
    flush,
    false.B,
    MuxCase(
      EX2MEMValid,
      Seq(
        (MEMin.fire) -> EXoutValid,
        (~MEMin.valid && MEMout.fire) -> false.B
      )
    )
  )
  MEM.io.inValid := EX2MEMValid
  MEM.io.flush   := flush
  MEM.io.memRaw  := memRaw

  MEM.io.ar <> dataAxiLite.ar
  MEM.io.aw <> dataAxiLite.aw
  MEM.io.w <> dataAxiLite.w

  MEMoutValid := MEMout.valid && EX2MEMValid

  /** ***************** WB ************************
    */

  StageConnect[MemoryToWrite](MEMout, WBin, MEMoutValid)

  MEM2WBValid := Mux(
    flush,
    false.B,
    MuxCase(
      MEM2WBValid,
      Seq(
        (WBin.fire) -> MEMoutValid,
        (~WBin.valid && WBout.fire) -> false.B
      )
    )
  )

  arwDataValid := MuxCase(
    arwDataValid,
    Seq(
      (WBin.fire) -> ((MEMout.bits.memRead || MEMout.bits.memWrite) && MEMout.valid),
      (~WBin.valid && WBout.fire) -> false.B
    )
  )
  // memory access RAW
  memRaw := (WBin.bits.aluOut(31, 3) === MEMin.bits.aluOut(31, 3)) &&
    (WBin.bits.memWrite && MEMin.bits.memRead) &&
    (EX2MEMValid && MEM2WBValid)

  WB.io.inValid  := MEM2WBValid
  WB.io.arwValid := arwDataValid

  WB.io.b <> dataAxiLite.b
  WB.io.r <> dataAxiLite.r

  WBout.ready := true.B

  WBoutValid := WBout.valid && MEM2WBValid
  flush      := WBout.bits.syscall || WBout.bits.mret

  /** *********** commit for difftest *******************
    */

  commit.pc     := WBout.bits.pc
  exit.io.clock := clock
  // commit.inst   := WBout.bits.inst
  // commit.wen    := WBout.bits.regWrite
  commit.addr   := WBout.bits.address
  commit.mem    := WBout.bits.memWrite || WBout.bits.memRead
  commit.halt   := WBout.bits.halt
  commit.ret    := ID.io.ret
  commit.commit := WBoutValid

  /** *********** arbiter *******************
    */

  val arbiter = Module(new AxiLiteArbiter())
  val xbar    = Module(new CrossBar())
  val clint   = Module(new CLINT())

  arbiter.io.InstAxiLite <> instAxiLite
  arbiter.io.DataAxiLite <> dataAxiLite
  arbiter.io.master <> xbar.io.master
  xbar.io.clint <> clint.io.AxiLite

  ConnectAxiSoC(xbar.io.other, io.master)

  /* performance counter */
  val CONFIG_CNT     = true.B
  val instFetchDelay = RegInit(0.U(32.W))
  val memLoadDelay   = RegInit(0.U(32.W))
  val exCnt          = RegInit(0.U(32.W))

  val instFetchCnt = RegInit(0.U(32.W))

  val brCnt   = RegInit(0.U(32.W))
  val brTkCnt = RegInit(0.U(32.W))
  val calCnt  = RegInit(0.U(32.W))
  val csrCnt  = RegInit(0.U(32.W))
  val ldCnt   = RegInit(0.U(32.W))
  val stCnt   = RegInit(0.U(32.W))

  brCnt := Mux(
    IDout.fire && (IDout.bits.jump || IDout.bits.pcSrc =/= DecodeTable.PcSrcInc.U) && IF2IDValid,
    brCnt + 1.U,
    brCnt
  )
  brTkCnt := Mux(IDout.fire && EX.io.brTaken && IF2IDValid, brTkCnt + 1.U, brTkCnt)
  ldCnt   := Mux(IDout.fire && IDout.bits.memRead && IF2IDValid, ldCnt + 1.U, ldCnt)
  stCnt   := Mux(IDout.fire && IDout.bits.memWrite && IF2IDValid, stCnt + 1.U, stCnt)
  csrCnt  := Mux(IDout.fire && (IDout.bits.csrRead || IDout.bits.csrWrite) && IF2IDValid, csrCnt + 1.U, csrCnt)
  calCnt := Mux(
    IDout.fire && (IDout.bits.regWrite && ~IDout.bits.csrRead && ~IDout.bits.csrWrite && ~IDout.bits.jump && ~IDout.bits.memRead) && IF2IDValid,
    calCnt + 1.U,
    calCnt
  )

  instFetchCnt := Mux(instAxiLite.r.fire, instFetchCnt + 1.U, instFetchCnt)

  when(commit.halt) {
    printf("instruction fetch number     : %d\n", instFetchCnt)
    printf("branch instruction number    : %d\n", brCnt)
    printf("branch taken number          : %d\n", brTkCnt)
    printf("load instruction number      : %d\n", ldCnt)
    printf("store instruction number     : %d\n", stCnt)
    printf("CSR instruction number       : %d\n", csrCnt)
    printf("calculate instruction number : %d\n", calCnt)
  }

}
