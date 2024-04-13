import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._

object TOP {
  val axiParams = AxiParamsBundle(32, 32, 3)
  val START_PC  = "h7FFFFFFC"
}

class CommitBundle() extends Bundle {
  val pc     = Output(UInt(32.W))
  val inst   = Output(UInt(32.W))
  val rd     = Output(UInt(5.W))
  val wen    = Output(Bool())
  val wdata  = Output(UInt(32.W))
  val commit = Output(Bool())
  val halt   = Output(Bool())
}

class TOP(XLEN: Int) extends Module {
  val io = IO(new Bundle {

    val commit = new CommitBundle()
  })

  /* five stages */
  val IF  = Module(new IFU(XLEN))
  val ID  = Module(new IDU(XLEN))
  val EX  = Module(new EXU(XLEN))
  val MEM = Module(new MEMU(XLEN))
  val WB  = Module(new WBU(XLEN))

  /* axi */
  val dataAxiLite = Wire(new AxiLiteBundle(TOP.axiParams))
  val instAxiLite = Wire(new AxiLiteBundle(TOP.axiParams))

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

  instAxiLite.w.valid        := false.B
  instAxiLite.w.bits.wdata   := 0.U
  instAxiLite.w.bits.wstrb   := 0.U
  instAxiLite.aw.valid       := false.B
  instAxiLite.aw.bits.awid   := 0.U
  instAxiLite.aw.bits.awaddr := 0.U
  instAxiLite.aw.bits.awprot := 0.U
  instAxiLite.aw.bits.awsize := 0.U
  instAxiLite.b.ready        := false.B

  val pcBr    = Wire(UInt(XLEN.W))
  val brTaken = Wire(Bool())

  /** ******************* pre IF *********************
    */

  val Pre2IF    = Wire(Decoupled(new PreToFetch(XLEN)))
  val ar        = instAxiLite.ar
  val arFireReg = RegInit(false.B)
  val pcNext    = Wire(UInt(XLEN.W))
  // axi ar channel
  arFireReg    := Mux(IFin.fire, false.B, Mux(ar.fire, true.B, arFireReg))
  Pre2IF.valid := ar.fire || arFireReg

  ar.valid       := ~arFireReg && ~reset.asBool
  ar.bits.arid   := 0.U
  ar.bits.arprot := 0.U
  ar.bits.araddr := pcNext
  ar.bits.arsize := "b10".U

  /** ******************* IF *********************
    */

  // Pre <-> IF
  StageConnect[PreToFetch](Pre2IF, IFin, Pre2IF.valid)
  Pre2IFValid := MuxCase(
    Pre2IFValid,
    Seq(
      (IFin.fire) -> (~IF.io.brRecord || IF.io.brEnable),
      (~IFin.valid && IFout.fire) -> false.B,
      (~IFout.fire && brTaken) -> false.B // stall and branch taken
    )
  )

  arInstValid := MuxCase(
    arInstValid,
    Seq(
      (IFin.fire) -> Pre2IF.valid,
      (~IFin.valid && IFout.fire) -> false.B
    )
  )

  IF.io.inValid := Pre2IFValid && (~IF.io.brRecord || IF.io.brEnable)
  IF.io.arValid := arInstValid

  IF.io.r <> instAxiLite.r
  IF.io.pcBr      := pcBr
  IF.io.brTaken   := brTaken
  IF.io.arFireReg := arFireReg

  IF.io.exception := WBout.bits.syscall
  IF.io.mret      := WBout.bits.mret
  IF.io.pcTrap    := 0.U
  IF.io.pcMRet    := 0.U

  pcNext := IF.io.pcNext

  IFoutValid := IFout.valid && Pre2IFValid && ~brTaken

  /** ******************* ID *********************
    */
  // IF <-> ID
  StageConnect[FetchToDecode](IFout, IDin, IFoutValid)

  IF2IDValid := MuxCase(
    IF2IDValid,
    Seq(
      (IDin.fire) -> IFoutValid,
      (~IDin.valid && IDout.fire) -> false.B,
      (~IDout.fire && brTaken) -> false.B // stall and branch taken
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

  ID2EXValid := MuxCase(
    ID2EXValid,
    Seq(
      (EXin.fire) -> IDoutValid,
      (~EXin.valid && EXout.fire) -> false.B
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
    (hazard1(1) || hazard2(1)) && WBin.bits.memRead && MEM2WBValid && ~WBout.valid

  EX.io.stall     := stall
  EX.io.hazard1   := hazard1.asUInt
  EX.io.hazard2   := hazard2.asUInt
  EX.io.bypassMEM := MEMin.bits.aluOut
  EX.io.bypassWB  := WBout.bits.regWdata

  EXoutValid := EXout.valid && ID2EXValid

  /** ***************** MEM ************************
    */

  StageConnect[ExecuteToMemory](EXout, MEMin, EXoutValid)

  EX2MEMValid := MuxCase(
    EX2MEMValid,
    Seq(
      (MEMin.fire) -> EXoutValid,
      (~MEMin.valid && MEMout.fire) -> false.B
    )
  )
  MEM.io.inValid := EX2MEMValid

  MEM.io.ar <> dataAxiLite.ar
  MEM.io.aw <> dataAxiLite.aw
  MEM.io.w <> dataAxiLite.w

  MEMoutValid := MEMout.valid && EX2MEMValid

  /** ***************** WB ************************
    */

  StageConnect[MemoryToWrite](MEMout, WBin, MEMoutValid)

  MEM2WBValid := MuxCase(
    MEM2WBValid,
    Seq(
      (WBin.fire) -> MEMoutValid,
      (~WBin.valid && WBout.fire) -> false.B
    )
  )

  arwDataValid := MuxCase(
    arwDataValid,
    Seq(
      (WBin.fire) -> ((MEMout.bits.memRead || MEMout.bits.memWrite) && MEMout.valid),
      (~WBin.valid && WBout.fire) -> false.B
    )
  )

  WB.io.inValid  := MEM2WBValid
  WB.io.arwValid := arwDataValid

  WB.io.b <> dataAxiLite.b
  WB.io.r <> dataAxiLite.r

  WBout.ready := true.B

  WBoutValid := WBout.valid && MEM2WBValid

  /** *********** commit for difftest *******************
    */

  io.commit.pc     := WBout.bits.pc
  io.commit.inst   := WBout.bits.inst
  io.commit.rd     := WBout.bits.rd
  io.commit.wen    := WBout.bits.regWrite
  io.commit.wdata  := WBout.bits.regWdata
  io.commit.halt   := WBout.bits.halt
  io.commit.commit := WBoutValid

  /** *********** axi arbiter and ram wrapper *******************
    */

  val arbiter    = Module(new AxiLiteArbiter())
  val ramWrapper = Module(new AxiRamWrapper())
  arbiter.io.InstAxiLite <> instAxiLite
  arbiter.io.DataAxiLite <> dataAxiLite
  ramWrapper.io.AxiLite <> arbiter.io.AxiLite
}
