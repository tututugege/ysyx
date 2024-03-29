import chisel3._
import chisel3.util._
import chisel3.util.experimental._
import CsrRegister._

object CsrRegister {
  val mstatus = "h300"
  val mtvec   = "h305"
  val mepc    = "h341"
  val mcause  = "h342"
  val mtval   = "h343"
}

class CsrBundle extends Bundle {
  val CsrAddr      = Input(UInt(12.W))
  val Wdata        = Input(UInt(32.W))
  val Wmask        = Input(UInt(32.W))
  val Wen          = Input(Bool())
  val Rdata        = Output(UInt(32.W))
  val mstatusRdata = Output(UInt(32.W))
  val mtvecRdata   = Output(UInt(32.W))
  val mepcRdata    = Output(UInt(32.W))
  val mcauseRdata  = Output(UInt(32.W))
  val mtvalRdata   = Output(UInt(32.W))
  val Exception    = Input(Bool())
  val Cause        = Input(UInt(32.W))
  val Pc           = Input(UInt(32.W))
}

class CsrRegister extends Module {
  val io = IO(new CsrBundle)

  val mstatusReg = RegInit(0x1800.U(32.W));
  val mtvecReg   = RegInit(0.U(32.W));
  val mepcReg    = RegInit(0.U(32.W));
  val mcauseReg  = RegInit(0.U(32.W));
  val mtvalReg   = RegInit(0.U(32.W));

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

  mstatusWdata := (io.Wdata & io.Wmask) | (mstatusReg & ~io.Wmask)
  mtvecWdata   := (io.Wdata & io.Wmask) | (mtvecReg & ~io.Wmask)
  mepcWdata    := Mux(io.Exception, io.Pc, (io.Wdata & io.Wmask) | (mepcReg & ~io.Wmask))
  mcauseWdata  := Mux(io.Exception, io.Cause, (io.Wdata & io.Wmask) | (mcauseReg & ~io.Wmask))
  mtvalWdata   := (io.Wdata & io.Wmask) | (mtvalReg & ~io.Wmask)

  mstatusWen := io.Wen && (io.CsrAddr === CsrRegister.mstatus.U)
  mtvecWen   := io.Wen && (io.CsrAddr === CsrRegister.mtvec.U)
  mepcWen    := io.Wen && (io.CsrAddr === CsrRegister.mepc.U) || io.Exception
  mcauseWen  := io.Wen && (io.CsrAddr === CsrRegister.mcause.U) || io.Exception
  mtvalWen   := io.Wen && (io.CsrAddr === CsrRegister.mtval.U)

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

  io.Rdata := MuxLookup(
    io.CsrAddr,
    0.U,
    Seq(
      mstatus.U -> mstatusReg,
      mtvec.U -> mtvecReg,
      mepc.U -> mepcReg,
      mcause.U -> mcauseReg,
      mtval.U -> mtvalReg
    )
  )
}
