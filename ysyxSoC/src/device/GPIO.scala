package ysyx

import chisel3._
import chisel3.util._

import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class GPIOIO extends Bundle {
  val out = Output(UInt(16.W))
  val in  = Input(UInt(16.W))
  val seg = Output(Vec(8, UInt(8.W)))
}

class GPIOCtrlIO extends Bundle {
  val clock = Input(Clock())
  val reset = Input(Reset())
  val in    = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
  val gpio  = new GPIOIO
}

class gpio_top_apb extends BlackBox {
  val io = IO(new GPIOCtrlIO)
}

class gpioChisel extends Module {
  val io = IO(new GPIOCtrlIO)

  class bcd7seg extends Module {
    val io = IO(new Bundle {
      val in  = Input(UInt(4.W))
      val out = Output((UInt(7.W)))
    })

    val outReg = RegInit(VecInit(Seq.fill(7)(0.U(1.W))))

    outReg(6) := ((io.in === 0.U) || (io.in === 2.U) || (io.in === 3.U) || (io.in === 5.U)
      || (io.in === 6.U) || (io.in === 7.U) || (io.in === 8.U) || (io.in === 9.U))

    outReg(5) := ((io.in === 0.U) || (io.in === 1.U) || (io.in === 2.U) || (io.in === 3.U)
      || (io.in === 4.U) || (io.in === 7.U) || (io.in === 8.U) || (io.in === 9.U))

    outReg(4) := ((io.in === 0.U) || (io.in === 1.U) || (io.in === 3.U) || (io.in === 4.U)
      || (io.in === 5.U) || (io.in === 6.U) || (io.in === 7.U) || (io.in === 8.U) || (io.in === 9.U))

    outReg(3) := ((io.in === 0.U) || (io.in === 2.U) || (io.in === 3.U) || (io.in === 5.U)
      || (io.in === 6.U) || (io.in === 8.U) || (io.in === 9.U))

    outReg(2) := ((io.in === 0.U) || (io.in === 2.U) || (io.in === 6.U) || (io.in === 8.U))

    outReg(1) := ((io.in === 0.U) || (io.in === 4.U) || (io.in === 5.U) || (io.in === 6.U)
      || (io.in === 8.U) || (io.in === 9.U))

    outReg(0) := ((io.in === 2.U) || (io.in === 3.U) || (io.in === 4.U) || (io.in === 5.U)
      || (io.in === 6.U) || (io.in === 8.U) || (io.in === 9.U))

    io.out := ~outReg.asUInt
  }

  val led = RegInit("hFFFF".U(16.W))
  val sw  = RegInit("hFFFF".U(16.W))
  val seg = RegInit("hFFFFFFFF".U(32.W))

  val ledAddr = io.in.paddr(3, 2) === "b00".U
  val swAddr  = io.in.paddr(3, 2) === "b01".U
  val segAddr = io.in.paddr(3, 2) === "b10".U

  val ledRdata = 0.U(16.W) ## led
  val swRdata  = 0.U(16.W) ## sw
  val segRdata = seg
  val fire     = io.in.pready && io.in.psel && io.in.penable

  sw          := io.gpio.in
  io.gpio.out := led

  io.in.pready  := true.B
  io.in.pslverr := false.B
  io.in.prdata := MuxCase(
    0.U,
    Seq(
      (~io.in.pwrite && fire && ledAddr) -> ledRdata,
      (~io.in.pwrite && fire && swAddr) -> swRdata,
      (~io.in.pwrite && fire && segAddr) -> segRdata
    )
  )

  val wmask    = Fill(8, io.in.pstrb(3)) ## Fill(8, io.in.pstrb(2)) ## Fill(8, io.in.pstrb(1)) ## Fill(8, io.in.pstrb(0))
  val segWdata = (io.in.pwdata & wmask) | (seg & ~wmask)
  val ledWdata = (io.in.pwdata(15, 0) & wmask(15, 0)) | (led & ~wmask(15, 0))

  sw  := io.gpio.in
  led := Mux(fire && io.in.pwrite && ledAddr, ledWdata, led)
  seg := Mux(fire && io.in.pwrite && segAddr, segWdata, seg)

  for (i <- 0 until 8) {
    val display = Module(new bcd7seg)
    display.io.in  := seg(i * 4 + 3, i * 4)
    io.gpio.seg(i) := display.io.out ## 1.U(1.W)
  }

}

class APBGPIO(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
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
    val gpio_bundle = IO(new GPIOIO)

    val mgpio = Module(new gpioChisel)
    mgpio.io.clock := clock
    mgpio.io.reset := reset
    mgpio.io.in <> in
    gpio_bundle <> mgpio.io.gpio
  }
}
