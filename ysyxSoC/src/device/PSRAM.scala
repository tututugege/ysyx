package ysyx

import chisel3._
import chisel3.util._
import chisel3.experimental.Analog

import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class QSPIIO extends Bundle {
  val sck  = Output(Bool())
  val ce_n = Output(Bool())
  val dio  = Analog(4.W)
}

class psram_top_apb extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Reset())
    val in    = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
    val qspi  = new QSPIIO
  })
}

class psram extends BlackBox {
  val io = IO(Flipped(new QSPIIO))
}

class psramChisel extends RawModule {
  val io    = IO(Flipped(new QSPIIO))
  val reset = IO(Input(Reset()))

  val s_recv_cmd :: s_recv_addr :: s_recv_data :: s_read :: s_send :: Nil = Enum(5)

  withClockAndReset(io.sck.asClock, io.ce_n.asAsyncReset) {

    val QPI   = withClockAndReset(io.sck.asClock, reset.asAsyncReset) { RegInit(false.B) }
    val state = RegInit(s_recv_cmd)

    val psram    = SyncReadMem(1 << 24, Vec(4, UInt(8.W)))
    val sel      = RegInit("h80".U(8.W))
    val addr     = Reg(UInt(24.W))
    val data     = Reg(Vec(8, UInt(4.W)))
    val cmd      = Reg(UInt(8.W))
    val recvByte = Wire(Bool())
    val dout     = Wire(UInt(4.W))
    val di       = TriStateInBuf(io.dio, dout, state === s_send) // change this if you need

    val isWrite  = (cmd.asUInt === "h38".U)
    val isRead   = (cmd.asUInt === "hEB".U)
    val isSwitch = ((cmd(6, 0) ## di(0)).asUInt === "h35".U)
    val wdata    = Wire(Vec(4, UInt(8.W)))
    val wmask    = Reg(Vec(4, Bool()))
    val rdata =
      psram
        .readWrite(
          addr(23, 2),
          wdata,
          wmask,
          (state === s_recv_data && recvByte) || (state === s_read),
          isWrite
        )
        .asUInt

    recvByte := (state === s_recv_data) && (sel(0) || sel(2) || sel(4) || sel(6)) // already recv a byte

    val offset = (di(1, 0) === "b11".U) ## (di(1, 0) === "b10".U) ## (di(1, 0) === "b01".U) ## (di(1, 0) === "b00".U)

    for (i <- 0 until 4) {
      wdata(i) := data(0) ## di
      wmask(i) := Mux(
        (state === s_recv_addr) && isWrite && sel(2),
        offset(i),
        Mux(recvByte, (wmask.asUInt(2, 0) ## 0.U(1.W))(i), wmask(i))
      )
    }

    QPI := Mux(state === s_recv_cmd && sel(0) && isSwitch, true.B, QPI)
    switch(state) {
      is(s_recv_cmd) {
        state := Mux(QPI && sel(6) || ~QPI && sel(0), Mux(isSwitch, s_recv_cmd, s_recv_addr), s_recv_cmd)
      }
      is(s_recv_addr) {
        state := Mux(sel(2), Mux(isWrite, s_recv_data, s_read), s_recv_addr)
      }
      is(s_recv_data) {
        state := Mux(sel(0), s_recv_cmd, s_recv_data)
      }
      is(s_read) {
        state := Mux(sel(1), s_send, s_read)
      }
      is(s_send) {
        state := Mux(sel(0), s_recv_cmd, s_send)
      }
    }
    sel := MuxCase(
      sel(0) ## sel(7, 1),
      Seq(
        (state === s_recv_cmd && (QPI && sel(6) || ~QPI && sel(0))) -> "h80".U,
        (state === s_recv_addr && sel(2)) -> "h80".U,
        (state === s_read && sel(1)) -> "h80".U
      )
    )

    cmd := Mux(state === s_recv_cmd, Mux(QPI, cmd(3, 0) ## di, cmd(6, 0) ## di(0)), cmd)

    addr := Mux(state === s_recv_addr, addr(19, 0) ## di, addr)

    for (i <- 0 until 8) {
      if (i == 0)
        data(0) := Mux(
          state === s_recv_data && ~recvByte,
          di,
          Mux(state === s_read && sel(1), rdata(3, 0), data(0))
        )
      else
        data(i) := Mux(state === s_read && sel(1), rdata(i * 4 + 3, i * 4), data(i))
    }

    dout := Mux1H(
      Seq(
        sel(0) -> data(6),
        sel(1) -> data(7),
        sel(2) -> data(4),
        sel(3) -> data(5),
        sel(4) -> data(2),
        sel(5) -> data(3),
        sel(6) -> data(0),
        sel(7) -> data(1)
      )
    )
  }

}

class APBPSRAM(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
  val node = APBSlaveNode(
    Seq(
      APBSlavePortParameters(
        Seq(APBSlaveParameters(address = address, executable = true, supportsRead = true, supportsWrite = true)),
        beatBytes = 4
      )
    )
  )

  lazy val module = new Impl
  class Impl extends LazyModuleImp(this) {
    val (in, _)     = node.in(0)
    val qspi_bundle = IO(new QSPIIO)

    val mpsram = Module(new psram_top_apb)
    mpsram.io.clock := clock
    mpsram.io.reset := reset
    mpsram.io.in <> in
    qspi_bundle <> mpsram.io.qspi
  }
}
