package ysyx

import chisel3._
import chisel3.util._

import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.amba._
import freechips.rocketchip.amba.apb._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class APBDelayerIO extends Bundle {
  val clock = Input(Clock())
  val reset = Input(Reset())
  val in    = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
  val out   = new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32))
}

class apb_delayer extends BlackBox {
  val io = IO(new APBDelayerIO)
}

class APBDelayerChisel extends Module {
  val io              = IO(new APBDelayerIO)
  val masterFrequence = 270
  val slaveFrequence  = 100
  val coef            = 1024

  val stride = (masterFrequence * coef / slaveFrequence - coef).toInt

  val idle :: waiting :: delay :: resp :: Nil = Enum(4)

  val state = RegInit(idle)
  val count = RegInit(0.U(32.W))

  val slaveFire  = Wire(Bool())
  val masterFire = Wire(Bool())

  val prdataReg = Reg(UInt(32.W))

  slaveFire  := io.out.penable && io.out.psel && io.out.pready
  masterFire := io.in.penable && io.in.psel && io.in.pready

  prdataReg := Mux(slaveFire, io.out.prdata, prdataReg)

  switch(state) {
    is(idle) {
      state := Mux(io.in.penable && io.in.psel, Mux(io.out.pready, delay, waiting), idle)
    }
    is(waiting) {
      state := Mux(slaveFire, delay, waiting)
    }
    is(delay) {
      state := Mux(count === 0.U, resp, delay)
    }
    is(resp) {
      state := Mux(masterFire, idle, resp)
    }
  }

  count := MuxCase(
    0.U,
    Seq(
      (state === waiting && ~slaveFire) -> (count + stride.U),
      (state === waiting && slaveFire) -> ((count + stride.U) >> 10),
      (state === delay) -> (count - 1.U)
    )
  )

  io.out.penable := Mux(state === idle || state === waiting, io.in.penable, false.B)
  io.out.psel    := Mux(state === idle || state === waiting, io.in.psel, false.B)
  io.out.pwdata  := io.in.pwdata
  io.out.paddr   := io.in.paddr
  io.out.pwrite  := io.in.pwrite
  io.out.pstrb   := io.in.pstrb
  io.out.pprot   := false.B

  io.in.prdata  := prdataReg
  io.in.pready  := state === resp
  io.in.pslverr := false.B
}

class APBDelayerWrapper(implicit p: Parameters) extends LazyModule {
  val node = APBIdentityNode()

  lazy val module = new Impl
  class Impl extends LazyModuleImp(this) {
    (node.in.zip(node.out)).foreach {
      case ((in, edgeIn), (out, edgeOut)) =>
        val delayer = Module(new APBDelayerChisel)
        delayer.io.clock := clock
        delayer.io.reset := reset
        delayer.io.in <> in
        out <> delayer.io.out
    }
  }
}

object APBDelayer {
  def apply()(implicit p: Parameters): APBNode = {
    val apbdelay = LazyModule(new APBDelayerWrapper)
    apbdelay.node
  }
}
