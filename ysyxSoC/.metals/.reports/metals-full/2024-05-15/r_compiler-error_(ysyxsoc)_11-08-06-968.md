file://<WORKSPACE>/src/device/SDRAM.scala
### java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 2.13.10
Classpath:
<WORKSPACE>/.bloop/out/ysyxsoc/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <HOME>/.cache/bloop/semanticdb/com.sourcegraph.semanticdb-javac.0.9.9/semanticdb-javac-0.9.9.jar [exists ], <WORKSPACE>/.bloop/out/rocketchip.cde/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <WORKSPACE>/.bloop/out/rocketchip.hardfloat/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <WORKSPACE>/.bloop/out/rocketchip.macros/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <WORKSPACE>/rocket-chip/src/main/resources [exists ], <WORKSPACE>/.bloop/out/rocketchip/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/chipsalliance/chisel_2.13/7.0.0-M1/chisel_2.13-7.0.0-M1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.10/scala-library-2.13.10.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/mainargs_2.13/0.5.4/mainargs_2.13-0.5.4.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-jackson_2.13/4.0.6/json4s-jackson_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-reflect/2.13.10/scala-reflect-2.13.10.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/scopt/scopt_2.13/4.1.0/scopt_2.13-4.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/net/jcazevedo/moultingyaml_2.13/0.4.2/moultingyaml_2.13-0.4.2.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-native_2.13/4.0.6/json4s-native_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/apache/commons/commons-text/1.10.0/commons-text-1.10.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/io/github/alexarchambault/data-class_2.13/0.2.6/data-class_2.13-0.2.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/os-lib_2.13/0.9.1/os-lib_2.13-0.9.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-parallel-collections_2.13/1.0.4/scala-parallel-collections_2.13-1.0.4.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle_2.13/3.1.0/upickle_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/chipsalliance/firtool-resolver_2.13/2.0.0/firtool-resolver_2.13-2.0.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-collection-compat_2.13/2.11.0/scala-collection-compat_2.13-2.11.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-core_2.13/4.0.6/json4s-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-jackson-core_2.13/4.0.6/json4s-jackson-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/nscala-time/nscala-time_2.13/2.22.0/nscala-time_2.13-2.22.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/yaml/snakeyaml/1.26/snakeyaml-1.26.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-native-core_2.13/4.0.6/json4s-native-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/apache/commons/commons-lang3/3.12.0/commons-lang3-3.12.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/geny_2.13/1.0.0/geny_2.13-1.0.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/ujson_2.13/3.1.0/ujson_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upack_2.13/3.1.0/upack_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle-implicits_2.13/3.1.0/upickle-implicits_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-xml_2.13/2.2.0/scala-xml_2.13-2.2.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-ast_2.13/4.0.6/json4s-ast_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-scalap_2.13/4.0.6/json4s-scalap_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/thoughtworks/paranamer/paranamer/2.8/paranamer-2.8.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-databind/2.12.7/jackson-databind-2.12.7.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/joda-time/joda-time/2.10.1/joda-time-2.10.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/joda/joda-convert/2.2.0/joda-convert-2.2.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle-core_2.13/3.1.0/upickle-core_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-annotations/2.12.7/jackson-annotations-2.12.7.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-core/2.12.7/jackson-core-2.12.7.jar [exists ]
Options:
-language:reflectiveCalls -Ymacro-annotations -Ytasty-reader -Yrangepos -Xplugin-require:semanticdb


action parameters:
offset: 6041
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
  val a   = Output(UInt(13.W))
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

  class BANKIO extends Bundle {
    val clk   = Output(Bool())
    val cke   = Output(Bool())
    val cs    = Output(Bool())
    val ras   = Output(Bool())
    val cas   = Output(Bool())
    val we    = Output(Bool())
    val a     = Output(UInt(13.W))
    val ba    = Output(UInt(2.W))
    val dqm   = Output(UInt(2.W))
    val dout  = Output(UInt(16.W))
    val valid = Output(Bool())
    val din   = Input(UInt(16.W))
  }

  class bankChisel extends RawModule {
    val io = IO(Flipped(new BANKIO))

    withClockAndReset(io.clk.asClock, io.cke) {

      val dram = for (i <- 0 until 4) yield {
        (SyncReadMem(1 << 22, Vec(2, UInt(8.W))))
      }
      val nop    = Wire(Bool())
      val active = Wire(Bool())
      val read   = Wire(Bool())
      val write  = Wire(Bool())
      val load   = Wire(Bool())

      nop    := ~io.cs && ~io.ras && ~io.cas && ~io.we
      active := ~io.cs && ~io.ras && io.cas && io.we
      read   := ~io.cs && io.ras && ~io.cas && io.we
      write  := ~io.cs && io.ras && ~io.cas && ~io.we
      load   := ~io.cs && ~io.ras && ~io.cas && ~io.we

      val MODE = Reg(UInt(12.W))
      val BL   = MODE(2, 0)
      val CL   = MODE(6, 4)
      MODE := Mux(load, io.a(11, 0), MODE)

      val burstLen = Mux1H(
        Seq(
          (BL === "b000".U) -> 0.U,
          (BL === "b001".U) -> 1.U,
          (BL === "b010".U) -> 3.U,
          (BL === "b011".U) -> 7.U
        )
      )

      val rowAddr = Reg(Vec(4, UInt(13.W)))

      for (i <- 0 until 4) {
        rowAddr(i) := Mux(active && io.ba === i.U, io.a, rowAddr(i))
      }

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

      wbBurstCount := Mux(write && burstLen.orR, 1.U, Mux(writeBurst, wbBurstCount + 1.U, wbBurstCount))
      wbBurstSel   := Mux(write && burstLen.orR, io.a(0) + 1.U, Mux(writeBurst, wbBurstSel + 1.U, wbBurstSel))
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
    }
  }

  val sramLo = Module(new bankChisel)
  val sramHi = Module(new bankChisel)
    val clk   = Output(Bool())
    val cke   = Output(Bool())
    val cs    = Output(Bool())
    val ras   = Output(Bool())
    val cas   = Output(Bool())
    val we    = Output(Bool())
    val a     = Output(UInt(13.W))
    val ba    = Output(UInt(2.W))
    val dqm   = Output(UInt(2.W))
    val dout  = Output(UInt(16.W))
    val valid = Output(Bool())
    val din   = Input(UInt(16.W))

  val dout = Wire(UInt(32.W))
  val din  = TriStateInBuf(io.dq, dout, sramLo.io.valid || sramHi.io.valid)
  sramLo.io.clk  := io.cl@@
  sramLo.io.a  := io.a
  sramLo.io.ba := io.ba
  sramLo.io.ba := io.ba

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
scala.collection.mutable.ArrayBuffer.apply(ArrayBuffer.scala:106)
	scala.reflect.internal.Types$Type.findMemberInternal$1(Types.scala:1030)
	scala.reflect.internal.Types$Type.findMember(Types.scala:1035)
	scala.reflect.internal.Types$Type.memberBasedOnName(Types.scala:661)
	scala.reflect.internal.Types$Type.member(Types.scala:625)
	scala.reflect.internal.Types$Type.packageObject(Types.scala:637)
	scala.reflect.internal.tpe.TypeMaps$AsSeenFromMap.<init>(TypeMaps.scala:418)
	scala.reflect.internal.Types$Type.asSeenFrom(Types.scala:692)
	scala.reflect.internal.Types$Type.computeMemberType(Types.scala:728)
	scala.reflect.internal.Types$Type.memberType(Types.scala:721)
	scala.tools.nsc.typechecker.Implicits$ImplicitInfo.tpe(Implicits.scala:235)
	scala.tools.nsc.typechecker.Implicits$ImplicitInfo.computeErroneous(Implicits.scala:270)
	scala.tools.nsc.typechecker.Implicits$ImplicitInfo.isCyclicOrErroneous(Implicits.scala:265)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.isIneligible(Implicits.scala:1036)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.survives(Implicits.scala:1045)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.eligibleNew(Implicits.scala:1125)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.<init>(Implicits.scala:1179)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.searchImplicit(Implicits.scala:1307)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.bestImplicit(Implicits.scala:1701)
	scala.tools.nsc.typechecker.Implicits.inferImplicit1(Implicits.scala:112)
	scala.tools.nsc.typechecker.Implicits.inferImplicit(Implicits.scala:91)
	scala.tools.nsc.typechecker.Implicits.inferImplicit$(Implicits.scala:88)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.inferImplicit(MetalsGlobal.scala:68)
	scala.tools.nsc.typechecker.Implicits.inferImplicitView(Implicits.scala:50)
	scala.tools.nsc.typechecker.Implicits.inferImplicitView$(Implicits.scala:49)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.inferImplicitView(MetalsGlobal.scala:68)
	scala.tools.nsc.typechecker.Typers$Typer.inferView(Typers.scala:330)
	scala.tools.nsc.typechecker.Typers$Typer.adaptToMember(Typers.scala:1338)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$adaptToMemberWithArgs$6(Typers.scala:1384)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:712)
	scala.tools.nsc.typechecker.Typers$Typer.adaptToMemberWithArgs(Typers.scala:1384)
	scala.tools.nsc.typechecker.Typers$Typer.typedSelect$1(Typers.scala:5271)
	scala.tools.nsc.typechecker.Typers$Typer.typedSelectOrSuperCall$1(Typers.scala:5417)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5992)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3421)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgWithFormal$1(PatternTypers.scala:136)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.$anonfun$typedArgsForFormals$4(PatternTypers.scala:150)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgsForFormals(PatternTypers.scala:150)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgsForFormals$(PatternTypers.scala:131)
	scala.tools.nsc.typechecker.Typers$Typer.typedArgsForFormals(Typers.scala:203)
	scala.tools.nsc.typechecker.Typers$Typer.handleMonomorphicCall$1(Typers.scala:3753)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3804)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typed1$28(Typers.scala:5011)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:698)
	scala.tools.nsc.typechecker.Typers$Typer.tryTypedApply$1(Typers.scala:5011)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5099)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5110)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5991)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3421)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3822)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3841)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5101)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5110)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5991)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.computeType(Typers.scala:6136)
	scala.tools.nsc.typechecker.Namers$Namer.assignTypeToTree(Namers.scala:1127)
	scala.tools.nsc.typechecker.Namers$Namer.valDefSig(Namers.scala:1743)
	scala.tools.nsc.typechecker.Namers$Namer.memberSig(Namers.scala:1928)
	scala.tools.nsc.typechecker.Namers$Namer.typeSig(Namers.scala:1878)
	scala.tools.nsc.typechecker.Namers$Namer$ValTypeCompleter.completeImpl(Namers.scala:944)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete(Namers.scala:2075)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete$(Namers.scala:2073)
	scala.tools.nsc.typechecker.Namers$TypeCompleterBase.complete(Namers.scala:2068)
	scala.reflect.internal.Symbols$Symbol.completeInfo(Symbols.scala:1563)
	scala.reflect.internal.Symbols$Symbol.info(Symbols.scala:1535)
	scala.reflect.internal.Symbols$Symbol.initialize(Symbols.scala:1724)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5631)
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

java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)