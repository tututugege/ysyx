import chisel3._
import chisel3.util._

class IFU(XLEN: Int) extends Module {
  val io = IO(new Bundle {
    //pipeline
    val inValid = Input(Bool())
    val arValid = Input(Bool())

    val Pre2IF = Flipped(Decoupled(new PreToFetch(XLEN)))
    val IF2ID  = Decoupled(new FetchToDecode(XLEN))

    // read data channel
    val r        = Flipped(Decoupled(new AxiReadDataChannel(TOP.axiParams)))
    val arAssert = Input(Bool())

    // branch
    val brTaken = Input(Bool())
    val pcBr    = Input(UInt(XLEN.W))

    // exception
    // val exception = Input(Bool())
    // val mret      = Input(Bool())
    // val pcTrap    = Input(UInt(XLEN.W))
    // val pcMRet    = Input(UInt(XLEN.W))

    val pcNext = Output(UInt(XLEN.W))
    val brFail = Output(Bool())
  })

  val in  = io.Pre2IF.bits
  val out = io.IF2ID.bits

  // PC Module
  val pcReg    = RegInit(TOP.START_PC.U(32.W))
  val pcInc    = Wire(UInt(XLEN.W)) // not taken
  val pcNormal = Wire(UInt(XLEN.W))

  // store last branch pc
  val brBuffer      = Reg(UInt(32.W))
  val brBufferValid = RegInit(false.B)
  val brEnable      = io.brTaken && ~io.arAssert
  val brFail        = RemBuffer(io.Pre2IF.fire, io.brTaken && io.arAssert, io.brFail)

  pcInc     := pcReg + 4.U
  pcNormal  := Mux(brEnable, io.pcBr, pcInc)
  io.pcNext := Mux(brBufferValid, brBuffer, pcNormal)
  pcReg     := Mux(io.Pre2IF.fire, io.pcNext, pcReg)
  brBufferValid := Mux(
    io.Pre2IF.fire,
    brFail.io.out,
    Mux(io.brTaken && brEnable, true.B, brBufferValid)
  )
  brBuffer := Mux(io.brTaken, io.pcBr, brBuffer)

  // axi r channel
  val rFireReg = RegInit(false.B)
  val rdataReg = Reg(UInt(XLEN.W))
  rFireReg   := Mux(io.IF2ID.fire, false.B, Mux(io.r.fire, true.B, rFireReg))
  rdataReg   := Mux(io.r.fire && ~io.IF2ID.ready, io.r.bits.rdata, rdataReg)
  io.r.ready := io.arValid && ~rFireReg

  // IF to ID
  out.pc   := pcReg
  out.inst := Mux(rFireReg, rdataReg, io.r.bits.rdata)

  // must deal with memory request has been sent
  io.Pre2IF.ready := io.IF2ID.fire || ~io.inValid && ~io.arValid
  io.IF2ID.valid  := io.r.fire || rFireReg
}
