file://<WORKSPACE>/src/device/SDRAM.scala
### scala.ScalaReflectionException: value write is not a method

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 2.13.10
Classpath:
<WORKSPACE>/.bloop/out/ysyxsoc/bloop-bsp-clients-classes/classes-Metals-jwniYiUMRUyKExSo7jOpVA== [exists ], <HOME>/.cache/bloop/semanticdb/com.sourcegraph.semanticdb-javac.0.9.9/semanticdb-javac-0.9.9.jar [exists ], <WORKSPACE>/.bloop/out/rocketchip.cde/bloop-bsp-clients-classes/classes-Metals-jwniYiUMRUyKExSo7jOpVA== [exists ], <WORKSPACE>/.bloop/out/rocketchip.hardfloat/bloop-bsp-clients-classes/classes-Metals-jwniYiUMRUyKExSo7jOpVA== [exists ], <WORKSPACE>/.bloop/out/rocketchip.macros/bloop-bsp-clients-classes/classes-Metals-jwniYiUMRUyKExSo7jOpVA== [exists ], <WORKSPACE>/rocket-chip/src/main/resources [exists ], <WORKSPACE>/.bloop/out/rocketchip/bloop-bsp-clients-classes/classes-Metals-jwniYiUMRUyKExSo7jOpVA== [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/chipsalliance/chisel_2.13/7.0.0-M1/chisel_2.13-7.0.0-M1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.10/scala-library-2.13.10.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/mainargs_2.13/0.5.4/mainargs_2.13-0.5.4.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-jackson_2.13/4.0.6/json4s-jackson_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-reflect/2.13.10/scala-reflect-2.13.10.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/scopt/scopt_2.13/4.1.0/scopt_2.13-4.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/net/jcazevedo/moultingyaml_2.13/0.4.2/moultingyaml_2.13-0.4.2.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-native_2.13/4.0.6/json4s-native_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/apache/commons/commons-text/1.10.0/commons-text-1.10.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/io/github/alexarchambault/data-class_2.13/0.2.6/data-class_2.13-0.2.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/os-lib_2.13/0.9.1/os-lib_2.13-0.9.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-parallel-collections_2.13/1.0.4/scala-parallel-collections_2.13-1.0.4.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle_2.13/3.1.0/upickle_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/chipsalliance/firtool-resolver_2.13/2.0.0/firtool-resolver_2.13-2.0.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-collection-compat_2.13/2.11.0/scala-collection-compat_2.13-2.11.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-core_2.13/4.0.6/json4s-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-jackson-core_2.13/4.0.6/json4s-jackson-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/nscala-time/nscala-time_2.13/2.22.0/nscala-time_2.13-2.22.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/yaml/snakeyaml/1.26/snakeyaml-1.26.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-native-core_2.13/4.0.6/json4s-native-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/apache/commons/commons-lang3/3.12.0/commons-lang3-3.12.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/geny_2.13/1.0.0/geny_2.13-1.0.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/ujson_2.13/3.1.0/ujson_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upack_2.13/3.1.0/upack_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle-implicits_2.13/3.1.0/upickle-implicits_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-xml_2.13/2.2.0/scala-xml_2.13-2.2.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-ast_2.13/4.0.6/json4s-ast_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-scalap_2.13/4.0.6/json4s-scalap_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/thoughtworks/paranamer/paranamer/2.8/paranamer-2.8.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-databind/2.12.7/jackson-databind-2.12.7.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/joda-time/joda-time/2.10.1/joda-time-2.10.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/joda/joda-convert/2.2.0/joda-convert-2.2.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle-core_2.13/3.1.0/upickle-core_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-annotations/2.12.7/jackson-annotations-2.12.7.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-core/2.12.7/jackson-core-2.12.7.jar [exists ]
Options:
-language:reflectiveCalls -Ymacro-annotations -Ytasty-reader -Yrangepos -Xplugin-require:semanticdb


action parameters:
offset: 2416
uri: file://<WORKSPACE>/src/device/SDRAM.scala
text:
```scala
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

  val active = ~io.cs && ~io.ras && io.cas && io.we

  val nop   = ~io.cs && ~io.ras && ~io.cas && ~io.we
  val read  = ~io.cs && io.ras && ~io.cas && io.we
  val write = ~io.cs && io.ras && ~io.cas && ~io.we
  val load  = ~io.cs && ~io.ras && ~io.cas && ~io.we

  val MODE = Reg(UInt(12.W))
  val BL   = MODE(2, 0)
  val CL   = MODE(6, 4)
  MODE := Mux(load, io.a(11, 0), MODE)

  val rankAddr = Reg(Vec(4, UInt(1.W)))
  for (i <- 0 until 4) {
    rankAddr(i) := Mux(active && io.ba === i.U, io.a(14), rankAddr(i))
  }
  val rankSel = rankAddr(io.ba).asBool

  class CHIPIO extends Bundle {
    val cmd   = Input(UInt(3.W))
    val a     = Input(UInt(13.W))
    val ba    = Input(UInt(2.W))
    val dqm   = Input(UInt(2.W))
    val din   = Input(UInt(16.W))
    val dout  = Output(UInt(16.W))
    val valid = Output(Bool())
  }

  withClockAndReset(io.clk.asClock, io.cke) {
    class chipChisel extends Module {
      val io = IO(new CHIPIO)

      val dram = for (i <- 0 until 4) yield {
        (SyncReadMem(1 << 22, Vec(2, UInt(8.W))))
      }
      val active = io.cmd(0).asBool
      val read   = io.cmd(1).asBool
      val write  = io.cmd/@@

      val rowAddr = Reg(Vec(4, UInt(14.W)))
      for (i <- 0 until 4) {
        rowAddr(i) := Mux(active && io.ba === i.U, io.a, rowAddr(i))
      }

      val burstLen = Mux1H(
        Seq(
          (BL === "b000".U) -> 0.U,
          (BL === "b001".U) -> 1.U,
          (BL === "b010".U) -> 3.U,
          (BL === "b011".U) -> 7.U
        )
      )

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
    }

    val sram0Lo = Module(new chipChisel)
    val sram0Hi = Module(new chipChisel)
    val sram1Lo = Module(new chipChisel)
    val sram1Hi = Module(new chipChisel)

    val dout = Wire(UInt(32.W))
    val din  = TriStateInBuf(io.dq, dout, sram0Lo.io.valid || sram0Hi.io.valid || sram1Lo.io.valid || sram1Hi.io.valid)

    sram0Lo.io.cmd := Mux(~rankSel, 0.U, write ## read ## active)
    sram0Lo.io.a   := io.a(12, 0)
    sram0Lo.io.ba  := io.ba
    sram0Lo.io.dqm := io.dqm(1, 0)
    sram0Lo.io.din := din(15, 0)

    sram0Hi.io.cmd := Mux(~rankSel, 0.U, write ## read ## active)
    sram0Hi.io.a   := io.a(12, 0)
    sram0Hi.io.ba  := io.ba
    sram0Hi.io.dqm := io.dqm(3, 2)
    sram0Hi.io.din := din(31, 16)

    sram1Lo.io.cmd := Mux(rankSel, 0.U, write ## read ## active)
    sram1Lo.io.a   := io.a(12, 0)
    sram1Lo.io.ba  := io.ba
    sram1Lo.io.dqm := io.dqm(1, 0)
    sram1Lo.io.din := din(15, 0)

    sram1Hi.io.cmd := Mux(rankSel, 0.U, write ## read ## active)
    sram1Hi.io.a   := io.a(12, 0)
    sram1Hi.io.ba  := io.ba
    sram1Hi.io.dqm := io.dqm(3, 2)
    sram1Hi.io.din := din(31, 16)

    dout := Mux(rankSel, sram1Hi.io.dout ## sram1Lo.io.dout, sram0Hi.io.dout ## sram0Lo.io.dout)
  }
}

class AXI4SDRAM(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
  val beatBytes = 8
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

    val converter = Module(new AXI4DataWidthConverter64to32)
    converter.io.clock := clock
    converter.io.reset := reset.asBool
    converter.io.in <> in

    val msdram = Module(new sdram_top_axi)
    msdram.io.clock := clock
    msdram.io.reset := reset.asBool
    msdram.io.in <> converter.io.out
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

```



#### Error stacktrace:

```
scala.reflect.api.Symbols$SymbolApi.asMethod(Symbols.scala:240)
	scala.reflect.api.Symbols$SymbolApi.asMethod$(Symbols.scala:234)
	scala.reflect.internal.Symbols$SymbolContextApiImpl.asMethod(Symbols.scala:99)
	scala.tools.nsc.typechecker.ContextErrors$TyperContextErrors$TyperErrorGen$.MissingArgsForMethodTpeError(ContextErrors.scala:761)
	scala.tools.nsc.typechecker.Typers$Typer.adaptMethodTypeToExpr$1(Typers.scala:973)
	scala.tools.nsc.typechecker.Typers$Typer.adapt(Typers.scala:1275)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6062)
	scala.tools.nsc.typechecker.Typers$Typer.typedDefDef(Typers.scala:6311)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5956)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedStat$1(Typers.scala:6125)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$4(Typers.scala:3355)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$4$adapted(Typers.scala:3350)
	scala.reflect.internal.Scopes$Scope.foreach(Scopes.scala:455)
	scala.tools.nsc.typechecker.Typers$Typer.addSynthetics$1(Typers.scala:3350)
	scala.tools.nsc.typechecker.Typers$Typer.typedStats(Typers.scala:3415)
	scala.tools.nsc.typechecker.Typers$Typer.typedTemplate(Typers.scala:2057)
	scala.tools.nsc.typechecker.Typers$Typer.typedClassDef(Typers.scala:1895)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5957)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedStat$1(Typers.scala:6125)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$8(Typers.scala:3403)
	scala.tools.nsc.typechecker.Typers$Typer.typedStats(Typers.scala:3403)
	scala.tools.nsc.typechecker.Typers$Typer.typedBlock(Typers.scala:2557)
	scala.tools.nsc.typechecker.Typers$Typer.typedOutsidePatternMode$1(Typers.scala:5966)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:6001)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3421)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3822)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3841)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5101)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5110)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5991)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedStat$1(Typers.scala:6125)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$8(Typers.scala:3403)
	scala.tools.nsc.typechecker.Typers$Typer.typedStats(Typers.scala:3403)
	scala.tools.nsc.typechecker.Typers$Typer.typedTemplate(Typers.scala:2057)
	scala.tools.nsc.typechecker.Typers$Typer.typedClassDef(Typers.scala:1895)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5957)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedStat$1(Typers.scala:6125)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$8(Typers.scala:3403)
	scala.tools.nsc.typechecker.Typers$Typer.typedStats(Typers.scala:3403)
	scala.tools.nsc.typechecker.Typers$Typer.typedPackageDef$1(Typers.scala:5640)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5960)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Analyzer$typerFactory$TyperPhase.apply(Analyzer.scala:117)
	scala.tools.nsc.Global$GlobalPhase.applyPhase(Global.scala:467)
	scala.tools.nsc.interactive.Global$TyperRun.applyPhase(Global.scala:1369)
	scala.tools.nsc.interactive.Global$TyperRun.typeCheck(Global.scala:1362)
	scala.tools.nsc.interactive.Global.typeCheck(Global.scala:680)
	scala.meta.internal.pc.PcCollector.<init>(PcCollector.scala:29)
	scala.meta.internal.pc.PcDocumentHighlightProvider.<init>(PcDocumentHighlightProvider.scala:12)
	scala.meta.internal.pc.ScalaPresentationCompiler.$anonfun$documentHighlight$1(ScalaPresentationCompiler.scala:368)
```
#### Short summary: 

scala.ScalaReflectionException: value write is not a method