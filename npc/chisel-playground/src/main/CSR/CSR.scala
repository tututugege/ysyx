import chisel3._
import chisel3.util._
import chisel3.util.experimental._

object CSR {

  object CsrNum {
    val mstatus   = "h300"
    val mtvec     = "h305"
    val mepc      = "h341"
    val mcause    = "h342"
    val mtval     = "h343"
    val mvendorid = "hf11"
    val marchid   = "hf12"
  }

  object ExceptionCode {
    val ECALL = 11
  }
}

class CsrBundle extends Bundle {
  val csrAddr = Input(UInt(12.W))

  val wdata = Input(UInt(32.W))
  val wmask = Input(UInt(32.W))
  val wen   = Input(Bool())

  val rdata = Output(UInt(32.W))

  val mstatusRdata = Output(UInt(32.W))
  val mtvecRdata   = Output(UInt(32.W))
  val mepcRdata    = Output(UInt(32.W))
  val mcauseRdata  = Output(UInt(32.W))
  val mtvalRdata   = Output(UInt(32.W))

  val exception = Input(Bool())
  val cause     = Input(UInt(32.W))
  val pc        = Input(UInt(32.W))
}

class CSR extends Module {
  import CSR._
  val io = IO(new CsrBundle)

  val mstatusReg   = RegInit(0x1800.U(32.W));
  val mtvecReg     = RegInit(0.U(32.W));
  val mepcReg      = RegInit(0.U(32.W));
  val mcauseReg    = RegInit(0.U(32.W));
  val mtvalReg     = RegInit(0.U(32.W));
  val mvendoridReg = RegInit("h79737978".U(32.W));
  val marchidReg   = RegInit("h15fdf02".U(32.W));

  val mstatusWdata = Wire(UInt(32.W))
  val mtvecWdata   = Wire(UInt(32.W))
  val mepcWdata    = Wire(UInt(32.W))
  val mcauseWdata  = Wire(UInt(32.W))
  val mtvalWdata   = Wire(UInt(32.W))

  val mstatusWen = Wire(Bool())
  val mtvecWen   = Wire(Bool())
  val mepcWen    = Wire(Bool())
  val mcauseWen  = Wire(Bool())
  val mtvalWen   = Wire(Bool())

  mstatusWdata := (io.wdata & io.wmask) | (mstatusReg & ~io.wmask)
  mtvecWdata   := (io.wdata & io.wmask) | (mtvecReg & ~io.wmask)
  mepcWdata    := Mux(io.exception, io.pc, (io.wdata & io.wmask) | (mepcReg & ~io.wmask))
  mcauseWdata  := Mux(io.exception, io.cause, (io.wdata & io.wmask) | (mcauseReg & ~io.wmask))
  mtvalWdata   := (io.wdata & io.wmask) | (mtvalReg & ~io.wmask)

  mstatusWen := io.wen && (io.csrAddr === CsrNum.mstatus.U)
  mtvecWen   := io.wen && (io.csrAddr === CsrNum.mtvec.U)
  mepcWen    := io.wen && (io.csrAddr === CsrNum.mepc.U) || io.exception
  mcauseWen  := io.wen && (io.csrAddr === CsrNum.mcause.U) || io.exception
  mtvalWen   := io.wen && (io.csrAddr === CsrNum.mtval.U)

  mstatusReg := Mux(mstatusWen, mstatusWdata, mstatusReg)
  mtvecReg   := Mux(mtvecWen, mtvecWdata, mtvecReg)
  mepcReg    := Mux(mepcWen, mepcWdata, mepcReg)
  mcauseReg  := Mux(mcauseWen, mcauseWdata, mcauseReg)
  mtvalReg   := Mux(mtvalWen, mtvecWdata, mtvalReg)

  io.mstatusRdata := mstatusReg
  io.mtvecRdata   := mtvecReg
  io.mepcRdata    := mepcReg
  io.mcauseRdata  := mcauseReg
  io.mtvalRdata   := mtvalReg

  io.rdata := MuxLookup(io.csrAddr, 0.U)(
    Seq(
      CsrNum.mstatus.U -> mstatusReg,
      CsrNum.mtvec.U -> mtvecReg,
      CsrNum.mepc.U -> mepcReg,
      CsrNum.mcause.U -> mcauseReg,
      CsrNum.mtval.U -> mtvalReg,
      CsrNum.mvendorid.U -> mvendoridReg,
      CsrNum.marchid.U -> marchidReg
    )
  )
}
