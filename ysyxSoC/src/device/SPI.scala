package ysyx

import chisel3._
import chisel3.util._

import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class SPIIO(val ssWidth: Int = 8) extends Bundle {
  val sck  = Output(Bool())
  val ss   = Output(UInt(ssWidth.W))
  val mosi = Output(Bool())
  val miso = Input(Bool())
}

class spi_top_apb extends BlackBox {
  val io = IO(new Bundle {
    val clock       = Input(Clock())
    val reset       = Input(Reset())
    val in          = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
    val spi         = new SPIIO
    val spi_irq_out = Output(Bool())
  })
}

class flash extends BlackBox {
  val io = IO(Flipped(new SPIIO(1)))
}

class APBSPI(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
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
    val spi_bundle = IO(new SPIIO)

    val mspi = Module(new spi_top_apb)
    mspi.io.clock := clock
    mspi.io.reset := reset

    object State extends ChiselEnum {
      val IDLE, TX1, CTRL, WAIT, READ = Value
    }

    import State._

    val SPI_TX0         = "h10001000"
    val SPI_TX1         = "h10001004"
    val SPI_CTRL        = "h10001010"
    val SPI_SS          = "h10001018"
    val SPI_SS_FLASH    = "h1"
    val SPI_CTRL_GO_BSY = "h100"
    val SPI_CTRL_ASS    = "h2000"
    val SPI_CTRL_Tx_NEG = "h400"
    val SPI_CTRL_Rx_NEG = "h200"
    val FLASH_CMD_RD    = "h3"

    spi_bundle <> mspi.io.spi

    val inSPIMaster = (in.paddr(29, 12) === "h10001".U)
    val inFlash     = (in.paddr(29, 28) === "h3".U)
    val xpiState    = RegInit(IDLE)
    val enbaleReg   = Reg(Bool())
    val mspiValid   = mspi.io.in.psel && mspi.io.in.penable && mspi.io.in.pready
    enbaleReg := Mux(mspiValid, false.B, Mux(mspi.io.in.psel, true.B, enbaleReg))

    val xpiAddr = Mux1H(
      Seq(
        (xpiState === IDLE) -> SPI_SS.U,
        (xpiState === TX1) -> SPI_TX1.U,
        (xpiState === CTRL) -> SPI_CTRL.U,
        (xpiState === WAIT) -> SPI_CTRL.U,
        (xpiState === READ) -> SPI_TX0.U
      )
    )

    val xpiWdata = Mux1H(
      Seq(
        (xpiState === IDLE) -> SPI_SS_FLASH.U,
        (xpiState === TX1) -> Cat(FLASH_CMD_RD.U, in.paddr(23, 0)),
        (xpiState === CTRL) -> ((64.U) | SPI_CTRL_GO_BSY.U | SPI_CTRL_ASS.U | SPI_CTRL_Tx_NEG.U),
        (xpiState === WAIT) -> 0.U,
        (xpiState === READ) -> 0.U
      )
    )

    val flashRdata =
      mspi.io.in.prdata(7, 0) ## mspi.io.in.prdata(15, 8) ## mspi.io.in.prdata(23, 16) ## mspi.io.in.prdata(31, 24)

    assert(~inFlash || ~in.pwrite, "can't write falsh")
    mspi.io.in.paddr   := Mux(inFlash, xpiAddr, in.paddr)
    mspi.io.in.psel    := in.psel
    mspi.io.in.penable := Mux(inFlash, enbaleReg, in.penable)
    mspi.io.in.pwrite  := Mux(inFlash, xpiState =/= WAIT && xpiState =/= READ, in.pwrite)
    mspi.io.in.pwdata  := Mux(inFlash, xpiWdata, in.pwdata)
    mspi.io.in.pstrb   := Mux(inFlash, "b1111".U, in.pstrb)
    mspi.io.in.pprot   := in.pprot

    in.pready  := mspi.io.in.pready && (inSPIMaster || (xpiState === READ))
    in.prdata  := Mux(xpiState === READ, flashRdata, mspi.io.in.prdata)
    in.pslverr := mspi.io.in.pslverr

    val complete = (xpiState === WAIT) && mspiValid && (~mspi.io.in.prdata(8)) // GO_BSY

    switch(xpiState) {
      is(IDLE) {
        when(inFlash && mspiValid) {
          xpiState := TX1
        }
      }
      is(TX1) {
        when(mspiValid) {
          xpiState := CTRL
        }
      }
      is(CTRL) {
        when(mspiValid) {
          xpiState := WAIT
        }
      }
      is(WAIT) {
        when(complete) {
          xpiState := READ
        }
      }
      is(READ) {
        when(mspiValid) {
          xpiState := IDLE
        }
      }
    }

  }

}
