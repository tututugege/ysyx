package ysyx

import chisel3._
import chisel3.util._
import chisel3.experimental.Analog

import freechips.rocketchip.amba.axi4._
import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class SDRAMIO extends Bundle {
  val clk = Output(Bool())
  val cke = Output(Bool())
  val cs  = Output(Bool())
  val ras = Output(Bool())
  val cas = Output(Bool())
  val we  = Output(Bool())
  val a   = Output(UInt(14.W))
  val ba  = Output(UInt(2.W))
  val dqm = Output(UInt(4.W))
  val dq  = Analog(32.W)
}

class sdram_top_axi extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val in    = Flipped(new AXI4Bundle(AXI4BundleParameters(addrBits = 32, dataBits = 32, idBits = 4)))
    val sdram = new SDRAMIO
  })
}

class sdram_top_apb extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val in    = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
    val sdram = new SDRAMIO
  })
}

class sdram extends BlackBox {
  val io = IO(Flipped(new SDRAMIO))
}

class sdramChisel extends RawModule {
  val io = IO(Flipped(new SDRAMIO))

  val active = Wire(Bool())
  val read   = Wire(Bool())
  val write  = Wire(Bool())
  val load   = Wire(Bool())

  active := ~io.cs && ~io.ras && io.cas && io.we
  read   := ~io.cs && io.ras && ~io.cas && io.we
  write  := ~io.cs && io.ras && ~io.cas && ~io.we
  load   := ~io.cs && ~io.ras && ~io.cas && ~io.we

  withClockAndReset(io.clk.asClock, io.cke) {

    val MODE = Reg(UInt(12.W))
    val BL   = MODE(2, 0)
    val CL   = MODE(6, 4)
    MODE := Mux(load, io.a(11, 0), MODE)

    val rankAddr = Reg(Vec(4, UInt(1.W)))
    for (i <- 0 until 4) {
      rankAddr(i) := Mux(active && io.ba === i.U, io.a(13), rankAddr(i))
    }
    val rankSel = Mux(active, io.a(13), rankAddr(io.ba).asBool)

    class CHIPIO extends Bundle {
      val cmd   = Input(UInt(3.W))
      val a     = Input(UInt(13.W))
      val ba    = Input(UInt(2.W))
      val dqm   = Input(UInt(2.W))
      val din   = Input(UInt(16.W))
      val dout  = Output(UInt(16.W))
      val valid = Output(Bool())
      val outba = Output(UInt(2.W))
    }

    class chipChisel extends Module {
      val io = IO(new CHIPIO)

      val dram = for (i <- 0 until 4) yield {
        (SyncReadMem(1 << 22, Vec(2, UInt(8.W))))
      }
      val active = io.cmd(0).asBool
      val read   = io.cmd(1).asBool
      val write  = io.cmd(2).asBool

      val rowAddr = Reg(Vec(4, UInt(13.W)))
      for (i <- 0 until 4) {
        rowAddr(i) := Mux(active && io.ba === i.U(2.W), io.a, rowAddr(i))
      }

      val burstLen = 0.U

      class ReadInfoBundle extends Bundle {
        val rdColAddr = UInt(9.W)
        val bkAddr    = UInt(2.W)
        val valid     = Bool()
      }

      val info         = Wire(new ReadInfoBundle)
      val rdFifo       = Reg(Vec(2, new ReadInfoBundle))
      val rdBurstSel   = Reg(UInt(1.W))
      val rdBurstCount = Reg(UInt(4.W))
      val rdburstEnd   = rdBurstCount === burstLen
      val ready        = ~rdFifo(0).valid || rdburstEnd

      val rdata     = Wire(Vec(4, Vec(2, UInt(8.W))))
      val rdColAddr = rdFifo(0).rdColAddr(8, 1) ## rdBurstSel
      val wmask     = Wire(Vec(2, Bool()))
      val wdata     = Wire(Vec(2, UInt(8.W)))

      io.dout := rdata(rdFifo(1).bkAddr).asUInt

      info.rdColAddr := io.a(8, 0)
      info.bkAddr    := io.ba
      info.valid     := read

      rdFifo(0).rdColAddr := Mux(read, info.rdColAddr, rdFifo(0).rdColAddr)
      rdFifo(0).bkAddr    := Mux(read, info.bkAddr, rdFifo(0).bkAddr)
      rdFifo(0).valid     := Mux(read, true.B, Mux(ready, false.B, rdFifo(0).valid))
      rdFifo(1)           := rdFifo(0)

      rdBurstCount := Mux(ready, 0.U, Mux(rdFifo(0).valid, rdBurstCount + 1.U, rdBurstCount))
      rdBurstSel   := Mux(ready, io.a(0), Mux(rdFifo(0).valid, rdBurstSel + 1.U, rdBurstSel))

      val wbBurstSel     = Reg(UInt(1.W))
      val wbBurstCount   = Reg(UInt(4.W))
      val wbColAddrReg   = Reg(UInt(9.W))
      val wbColAddr      = Mux(write, io.a(8, 0), wbColAddrReg)
      val wbBurstEnd     = wbBurstCount === burstLen
      val writeReg       = Reg(Bool())
      val writeBkAddrReg = Reg(UInt(2.W))
      val writeBurst     = write || writeReg
      val writeBkAddr    = Mux(write, io.ba, writeBkAddrReg)

      writeReg       := Mux(write && burstLen.orR, true.B, Mux(wbBurstEnd, false.B, writeReg))
      writeBkAddrReg := Mux(write && burstLen.orR, io.ba, writeBkAddrReg)

      wbBurstCount := Mux(write && burstLen.orR, 1.U, Mux(writeBurst, wbBurstCount + 1.U, 0.U))
      wbBurstSel   := Mux(write && burstLen.orR, io.a(0) + 1.U, Mux(writeBurst, wbBurstSel + 1.U, 0.U))
      wbColAddrReg := Mux(write && burstLen.orR, io.a(8, 0), wbColAddrReg)

      wdata(0) := io.din(7, 0)
      wdata(1) := io.din(15, 8)
      wmask(0) := ~io.dqm(0)
      wmask(1) := ~io.dqm(1)

      for (i <- 0 until 4) {
        rdata(i) := dram(i).readWrite(
          rowAddr(i) ## Mux(writeBurst, wbColAddr(8, 1) ## wbBurstSel, rdColAddr),
          wdata,
          wmask,
          rdFifo(0).valid && i.U === rdFifo(0).bkAddr || writeBurst && i.U === writeBkAddr,
          writeBurst
        )
      }

      io.valid := rdFifo(1).valid
      io.outba := rdFifo(1).bkAddr
    }

    val sram0Lo = Module(new chipChisel)
    val sram0Hi = Module(new chipChisel)
    val sram1Lo = Module(new chipChisel)
    val sram1Hi = Module(new chipChisel)

    val dout = Wire(UInt(32.W))
    val din  = TriStateInBuf(io.dq, dout, sram0Lo.io.valid || sram0Hi.io.valid || sram1Lo.io.valid || sram1Hi.io.valid)

    sram0Lo.io.cmd := Mux(~rankSel, write ## read ## active, 0.U)
    sram0Lo.io.a   := io.a(12, 0)
    sram0Lo.io.ba  := io.ba
    sram0Lo.io.dqm := io.dqm(1, 0)
    sram0Lo.io.din := din(15, 0)

    sram0Hi.io.cmd := Mux(~rankSel, write ## read ## active, 0.U)
    sram0Hi.io.a   := io.a(12, 0)
    sram0Hi.io.ba  := io.ba
    sram0Hi.io.dqm := io.dqm(3, 2)
    sram0Hi.io.din := din(31, 16)

    sram1Lo.io.cmd := Mux(rankSel, write ## read ## active, 0.U)
    sram1Lo.io.a   := io.a(12, 0)
    sram1Lo.io.ba  := io.ba
    sram1Lo.io.dqm := io.dqm(1, 0)
    sram1Lo.io.din := din(15, 0)

    sram1Hi.io.cmd := Mux(rankSel, write ## read ## active, 0.U)
    sram1Hi.io.a   := io.a(12, 0)
    sram1Hi.io.ba  := io.ba
    sram1Hi.io.dqm := io.dqm(3, 2)
    sram1Hi.io.din := din(31, 16)

    val outBankBa  = Mux(sram1Hi.io.valid || sram1Lo.io.valid, sram1Lo.io.outba, sram0Lo.io.outba)
    val outBankSel = rankAddr(outBankBa).asBool
    dout := Mux(outBankSel, sram1Hi.io.dout ## sram1Lo.io.dout, sram0Hi.io.dout ## sram0Lo.io.dout)
  }

}

class AXI4SDRAM(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
  val beatBytes = 4
  val node = AXI4SlaveNode(
    Seq(
      AXI4SlavePortParameters(
        Seq(
          AXI4SlaveParameters(
            address       = address,
            executable    = true,
            supportsWrite = TransferSizes(1, beatBytes),
            supportsRead  = TransferSizes(1, beatBytes),
            interleavedId = Some(0)
          )
        ),
        beatBytes = beatBytes
      )
    )
  )

  lazy val module = new Impl
  class Impl extends LazyModuleImp(this) {
    val (in, _)      = node.in(0)
    val sdram_bundle = IO(new SDRAMIO)

    val msdram = Module(new sdram_top_axi)
    msdram.io.clock := clock
    msdram.io.reset := reset.asBool
    msdram.io.in <> in
    sdram_bundle <> msdram.io.sdram
  }
}

class APBSDRAM(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
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
    val (in, _)      = node.in(0)
    val sdram_bundle = IO(new SDRAMIO)

    val msdram = Module(new sdram_top_apb)
    msdram.io.clock := clock
    msdram.io.reset := reset.asBool
    msdram.io.in <> in
    sdram_bundle <> msdram.io.sdram
  }
}
