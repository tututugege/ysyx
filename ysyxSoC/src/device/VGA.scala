package ysyx

import chisel3._
import chisel3.util._

import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class VGAIO extends Bundle {
  val r     = Output(UInt(8.W))
  val g     = Output(UInt(8.W))
  val b     = Output(UInt(8.W))
  val hsync = Output(Bool())
  val vsync = Output(Bool())
  val valid = Output(Bool())
}

class VGACtrlIO extends Bundle {
  val clock = Input(Clock())
  val reset = Input(Bool())
  val in    = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
  val vga   = new VGAIO
}

class vga_top_apb extends BlackBox {
  val io = IO(new VGACtrlIO)
}

class vgaChisel extends Module {
  val io = IO(new VGACtrlIO)

  val ram = SyncReadMem(1 << 19, Vec(4, UInt(8.W)))

  val hFrontPorch = 96
  val hActive     = 144
  val hBackPorch  = 784
  val hTotal      = 800

  val vFrontPorch = 2
  val vActive     = 35
  val vBackPorch  = 515
  val vTotal      = 525

  val xCount  = RegInit(1.U(10.W))
  val yCount  = RegInit(1.U(10.W))
  val vAddr   = Wire(UInt(10.W))
  val hAddr   = Wire(UInt(10.W))
  val vgaAddr = Wire(UInt(19.W))
  val color   = Wire(Vec(4, UInt(8.W)))
  val wdata   = Wire(Vec(4, UInt(8.W)))
  val wmask   = Wire(Vec(4, Bool()))

  xCount := Mux(xCount === hTotal.U, 1.U, xCount + 1.U)
  yCount := Mux(
    yCount === vTotal.U && xCount === hTotal.U,
    1.U,
    Mux(xCount === hTotal.U, yCount + 1.U, yCount)
  )

  val hValid = (xCount > hActive.U) && (xCount <= hBackPorch.U)
  val vValid = (yCount > vActive.U) && (yCount <= vBackPorch.U)

  hAddr   := Mux(hValid, (xCount - 145.U), 0.U)
  vAddr   := Mux(vValid, (yCount - 36.U), 0.U)
  vgaAddr := vAddr * 640.U + hAddr
  color   := ram.read(vgaAddr, io.vga.valid)

  for (i <- 0 until 4) {
    wdata(i) := io.in.pwdata(i * 8 + 7, i * 8)
    wmask(i) := io.in.pstrb(i) && io.in.pwrite && io.in.psel && io.in.penable
  }

  ram.write(io.in.paddr(21, 2), wdata, wmask)

  val hsync = Reg(Bool())
  val vsync = Reg(Bool())
  val valid = Reg(Bool())

  hsync := xCount > hFrontPorch.U
  vsync := yCount > vFrontPorch.U
  valid := hValid && vValid

  io.vga.hsync := hsync
  io.vga.vsync := vsync
  io.vga.valid := valid
  io.vga.r     := color(2)
  io.vga.g     := color(1)
  io.vga.b     := color(0)

  io.in.pready  := true.B
  io.in.pslverr := false.B
  io.in.prdata  := 0.U

}

class APBVGA(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
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
    val (in, _)    = node.in(0)
    val vga_bundle = IO(new VGAIO)

    val mvga = Module(new vgaChisel)
    mvga.io.clock := clock
    mvga.io.reset := reset
    mvga.io.in <> in
    vga_bundle <> mvga.io.vga
  }
}
