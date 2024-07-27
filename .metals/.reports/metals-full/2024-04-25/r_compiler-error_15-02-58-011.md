file://<WORKSPACE>/ysyxSoC/soc/SPI.scala
### file%3A%2F%2F%2Fhome%2Ftututu%2Fhry%2Fysyx%2Fysyx-workbench%2FysyxSoC%2Fsoc%2FSPI.scala:82: error: ) expected but ; found
  *(volatile int *)(SPI_BASE + SPI_TX1) = (addr & FLASH_ADDR) | FLASH_CMD_RD;
                                                                            ^

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 2.13.8
Classpath:
<HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.8/scala-library-2.13.8.jar [exists ]
Options:



action parameters:
uri: file://<WORKSPACE>/ysyxSoC/soc/SPI.scala
text:
```scala
package ysyx

import chisel3._
import chisel3.util._

import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._
import scala.annotation.switch

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

  private val outer = this

  lazy val module = new Impl
  class Impl extends LazyModuleImp(this) {
    val (in, _)    = node.in(0)
    val spi_bundle = IO(new SPIIO)
    val mspi       = Module(new spi_top_apb)
    mspi.io.clock := clock
    mspi.io.reset := reset
    val SPI_SS       = "h10001018"
    val SPI_TX1      = "h10001004"
    val SPI_CTRL     = "h10001010"
    val SPI_SS_FLASH = "b1"

    val FLASH_CMD_RD = "h3"

    // mspi.io.in <> in
    spi_bundle <> mspi.io.spi

    val inSPIMaster = (in.paddr(31, 12) === "h10001".U)
    val inFlash     = (in.paddr(31, 28) === "h3".U)
    val xpiState    = RegInit(IDLE.U)
    val enbaleReg   = Reg(Bool())
    val mspiValid   = mspi.io.in.psel && mspi.io.in.penable && mspi.io.in.pready
    enbaleReg := Mux(mspiValid, false.B, Mux(mspi.io.in.psel), true.B, enbaleReg)

    val xpiAddr = Mux1H(
      Seq(
        (xpiState === IDLE) -> SPI_SS.U,
        (xpiState === TX1) -> SPI_TX1.U,
        (xpiState === CTRL) -> SPI_CTRL.U(xpiState === WAIT) -> SPI_CTRL.U
      )
    )

    val xpiWdata = Mux1H(
      Seq(
        (xpiState === IDLE) -> SPI_SS_FLASH.U,
        (xpiState === TX1) -> Cat(FLASH_CMD_RD.U, in.paddr(23, 0)),

  *(volatile int *)(SPI_BASE + SPI_TX1) = (addr & FLASH_ADDR) | FLASH_CMD_RD;
        (xpiState === CTRL) -> SPI_CTRL.U(xpiState === WAIT) -> SPI_CTRL.U
      )
    )

    assert(~inFlash || ~in.pwrite, "can't write falsh")
    mspi.io.in.paddr   := Mux(inFlash, xpiAddr, in.paddr)
    mspi.io.in.psel    := Mux(inFlash, true.B, in.psel)
    mspi.io.in.penable := Mux(inFlash, enbaleReg, in.penable)
    mspi.io.in.pwrite  := Mux(inFlash, (xpiState =/= WATI), in.pwrite)
    mspi.io.in.pwdata  := Mux(inFlash, xpiWdata, in.pwdata)
    mspi.io.in.pstrb   := Mux(inFlash, xpiStrb, in.pstrb)
    mspi.io.in.pprot   := in.prot

    in.pready  := mspi.io.in.pready && (inSPIMaster || (xpiState === WAIT))
    in.prdata  := mspi.io.in.prdata
    in.pslverr := mspi.io.in.pslverr

    switch(xpiState) {
      is(IDLE) {
        when(inFlash) {
          state := TX1
        }
      }
      is(TX1) {
        when(mspiValid) {
          state := CTRL
        }
      }
      is(CTRL) {
        when(mspiValid) {
          state := WAIT
        }
      }
      is(WAIT) {
        when(mspiValid) {
          state := IDLE
        }
      }
    }
  }
}

```



#### Error stacktrace:

```
scala.meta.internal.parsers.Reporter.syntaxError(Reporter.scala:16)
	scala.meta.internal.parsers.Reporter.syntaxError$(Reporter.scala:16)
	scala.meta.internal.parsers.Reporter$$anon$1.syntaxError(Reporter.scala:22)
	scala.meta.internal.parsers.Reporter.syntaxError(Reporter.scala:17)
	scala.meta.internal.parsers.Reporter.syntaxError$(Reporter.scala:17)
	scala.meta.internal.parsers.Reporter$$anon$1.syntaxError(Reporter.scala:22)
	scala.meta.internal.parsers.ScalametaParser.syntaxErrorExpected(ScalametaParser.scala:379)
	scala.meta.internal.parsers.ScalametaParser.expect(ScalametaParser.scala:381)
	scala.meta.internal.parsers.ScalametaParser.accept(ScalametaParser.scala:385)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$inParensAfterOpen(ScalametaParser.scala:241)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$inParensAfterOpenOr(ScalametaParser.scala:246)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$inParensOnOpenOr(ScalametaParser.scala:237)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$scala$meta$internal$parsers$ScalametaParser$$getArgClause$1(ScalametaParser.scala:2403)
	scala.meta.internal.parsers.ScalametaParser.atPos(ScalametaParser.scala:312)
	scala.meta.internal.parsers.ScalametaParser.autoPos(ScalametaParser.scala:358)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$getArgClause(ScalametaParser.scala:2392)
	scala.meta.internal.parsers.ScalametaParser.simpleExprRest(ScalametaParser.scala:2299)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$simpleExpr0$3(ScalametaParser.scala:2228)
	scala.util.Success.map(Try.scala:262)
	scala.meta.internal.parsers.ScalametaParser.simpleExpr0(ScalametaParser.scala:2228)
	scala.meta.internal.parsers.ScalametaParser.simpleExpr(ScalametaParser.scala:2178)
	scala.meta.internal.parsers.ScalametaParser.prefixExpr(ScalametaParser.scala:2161)
	scala.meta.internal.parsers.ScalametaParser.postfixExpr(ScalametaParser.scala:2035)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$expr$2(ScalametaParser.scala:1616)
	scala.meta.internal.parsers.ScalametaParser.atPosOpt(ScalametaParser.scala:315)
	scala.meta.internal.parsers.ScalametaParser.autoPosOpt(ScalametaParser.scala:359)
	scala.meta.internal.parsers.ScalametaParser.expr(ScalametaParser.scala:1521)
	scala.meta.internal.parsers.ScalametaParser.argumentExpr(ScalametaParser.scala:2389)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$argumentExprsInParens$1(ScalametaParser.scala:2416)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$commaSeparated$1(ScalametaParser.scala:598)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$commaSeparated$1$adapted(ScalametaParser.scala:598)
	scala.meta.internal.parsers.ScalametaParser.iter$1(ScalametaParser.scala:588)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$tokenSeparated$1(ScalametaParser.scala:594)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$tokenSeparated$1$adapted(ScalametaParser.scala:581)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$listBy(ScalametaParser.scala:517)
	scala.meta.internal.parsers.ScalametaParser.tokenSeparated(ScalametaParser.scala:581)
	scala.meta.internal.parsers.ScalametaParser.commaSeparatedWithIndex(ScalametaParser.scala:601)
	scala.meta.internal.parsers.ScalametaParser.commaSeparated(ScalametaParser.scala:598)
	scala.meta.internal.parsers.ScalametaParser.argumentExprsInParens(ScalametaParser.scala:2416)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$scala$meta$internal$parsers$ScalametaParser$$getArgClause$2(ScalametaParser.scala:2402)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$inParensAfterOpenOr(ScalametaParser.scala:246)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$inParensOnOpenOr(ScalametaParser.scala:237)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$scala$meta$internal$parsers$ScalametaParser$$getArgClause$1(ScalametaParser.scala:2403)
	scala.meta.internal.parsers.ScalametaParser.atPos(ScalametaParser.scala:312)
	scala.meta.internal.parsers.ScalametaParser.autoPos(ScalametaParser.scala:358)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$getArgClause(ScalametaParser.scala:2392)
	scala.meta.internal.parsers.ScalametaParser.simpleExprRest(ScalametaParser.scala:2299)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$simpleExpr0$3(ScalametaParser.scala:2228)
	scala.util.Success.map(Try.scala:262)
	scala.meta.internal.parsers.ScalametaParser.simpleExpr0(ScalametaParser.scala:2228)
	scala.meta.internal.parsers.ScalametaParser.simpleExpr(ScalametaParser.scala:2178)
	scala.meta.internal.parsers.ScalametaParser.prefixExpr(ScalametaParser.scala:2161)
	scala.meta.internal.parsers.ScalametaParser.postfixExpr(ScalametaParser.scala:2035)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$expr$2(ScalametaParser.scala:1616)
	scala.meta.internal.parsers.ScalametaParser.atPosOpt(ScalametaParser.scala:315)
	scala.meta.internal.parsers.ScalametaParser.autoPosOpt(ScalametaParser.scala:359)
	scala.meta.internal.parsers.ScalametaParser.expr(ScalametaParser.scala:1521)
	scala.meta.internal.parsers.ScalametaParser.expr(ScalametaParser.scala:1420)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$patDefOrDcl$1(ScalametaParser.scala:3534)
	scala.meta.internal.parsers.ScalametaParser.autoEndPos(ScalametaParser.scala:361)
	scala.meta.internal.parsers.ScalametaParser.autoEndPos(ScalametaParser.scala:366)
	scala.meta.internal.parsers.ScalametaParser.patDefOrDcl(ScalametaParser.scala:3521)
	scala.meta.internal.parsers.ScalametaParser.defOrDclOrSecondaryCtor(ScalametaParser.scala:3483)
	scala.meta.internal.parsers.ScalametaParser.nonLocalDefOrDcl(ScalametaParser.scala:3468)
	scala.meta.internal.parsers.ScalametaParser$$anonfun$templateStat$1.applyOrElse(ScalametaParser.scala:4439)
	scala.meta.internal.parsers.ScalametaParser$$anonfun$templateStat$1.applyOrElse(ScalametaParser.scala:4433)
	scala.PartialFunction.$anonfun$runWith$1(PartialFunction.scala:231)
	scala.PartialFunction.$anonfun$runWith$1$adapted(PartialFunction.scala:230)
	scala.meta.internal.parsers.ScalametaParser.statSeqBuf(ScalametaParser.scala:4384)
	scala.meta.internal.parsers.ScalametaParser.getStats$2(ScalametaParser.scala:4423)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$scala$meta$internal$parsers$ScalametaParser$$templateStatSeq$3(ScalametaParser.scala:4424)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$scala$meta$internal$parsers$ScalametaParser$$templateStatSeq$3$adapted(ScalametaParser.scala:4421)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$listBy(ScalametaParser.scala:517)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$templateStatSeq(ScalametaParser.scala:4421)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$templateStatSeq(ScalametaParser.scala:4413)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$templateBody$1(ScalametaParser.scala:4264)
	scala.meta.internal.parsers.ScalametaParser.inBracesOr(ScalametaParser.scala:253)
	scala.meta.internal.parsers.ScalametaParser.inBraces(ScalametaParser.scala:249)
	scala.meta.internal.parsers.ScalametaParser.templateBody(ScalametaParser.scala:4264)
	scala.meta.internal.parsers.ScalametaParser.templateBodyOpt(ScalametaParser.scala:4268)
	scala.meta.internal.parsers.ScalametaParser.templateAfterExtends(ScalametaParser.scala:4211)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$template$1(ScalametaParser.scala:4232)
	scala.meta.internal.parsers.ScalametaParser.atPos(ScalametaParser.scala:312)
	scala.meta.internal.parsers.ScalametaParser.autoPos(ScalametaParser.scala:358)
	scala.meta.internal.parsers.ScalametaParser.template(ScalametaParser.scala:4219)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$templateOpt$1(ScalametaParser.scala:4257)
	scala.meta.internal.parsers.ScalametaParser.atPos(ScalametaParser.scala:312)
	scala.meta.internal.parsers.ScalametaParser.autoPos(ScalametaParser.scala:358)
	scala.meta.internal.parsers.ScalametaParser.templateOpt(ScalametaParser.scala:4249)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$classDef$1(ScalametaParser.scala:3881)
	scala.meta.internal.parsers.ScalametaParser.autoEndPos(ScalametaParser.scala:361)
	scala.meta.internal.parsers.ScalametaParser.autoEndPos(ScalametaParser.scala:366)
	scala.meta.internal.parsers.ScalametaParser.classDef(ScalametaParser.scala:3857)
	scala.meta.internal.parsers.ScalametaParser.tmplDef(ScalametaParser.scala:3816)
	scala.meta.internal.parsers.ScalametaParser.defOrDclOrSecondaryCtor(ScalametaParser.scala:3508)
	scala.meta.internal.parsers.ScalametaParser.nonLocalDefOrDcl(ScalametaParser.scala:3468)
	scala.meta.internal.parsers.ScalametaParser$$anonfun$templateStat$1.applyOrElse(ScalametaParser.scala:4439)
	scala.meta.internal.parsers.ScalametaParser$$anonfun$templateStat$1.applyOrElse(ScalametaParser.scala:4433)
	scala.PartialFunction.$anonfun$runWith$1(PartialFunction.scala:231)
	scala.PartialFunction.$anonfun$runWith$1$adapted(PartialFunction.scala:230)
	scala.meta.internal.parsers.ScalametaParser.statSeqBuf(ScalametaParser.scala:4384)
	scala.meta.internal.parsers.ScalametaParser.getStats$2(ScalametaParser.scala:4423)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$scala$meta$internal$parsers$ScalametaParser$$templateStatSeq$3(ScalametaParser.scala:4424)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$scala$meta$internal$parsers$ScalametaParser$$templateStatSeq$3$adapted(ScalametaParser.scala:4421)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$listBy(ScalametaParser.scala:517)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$templateStatSeq(ScalametaParser.scala:4421)
	scala.meta.internal.parsers.ScalametaParser.scala$meta$internal$parsers$ScalametaParser$$templateStatSeq(ScalametaParser.scala:4413)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$templateBody$1(ScalametaParser.scala:4264)
	scala.meta.internal.parsers.ScalametaParser.inBracesOr(ScalametaParser.scala:253)
	scala.meta.internal.parsers.ScalametaParser.inBraces(ScalametaParser.scala:249)
	scala.meta.internal.parsers.ScalametaParser.templateBody(ScalametaParser.scala:4264)
	scala.meta.internal.parsers.ScalametaParser.templateBodyOpt(ScalametaParser.scala:4268)
	scala.meta.internal.parsers.ScalametaParser.templateAfterExtends(ScalametaParser.scala:4211)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$template$1(ScalametaParser.scala:4232)
	scala.meta.internal.parsers.ScalametaParser.atPos(ScalametaParser.scala:312)
	scala.meta.internal.parsers.ScalametaParser.autoPos(ScalametaParser.scala:358)
	scala.meta.internal.parsers.ScalametaParser.template(ScalametaParser.scala:4219)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$templateOpt$1(ScalametaParser.scala:4257)
	scala.meta.internal.parsers.ScalametaParser.atPos(ScalametaParser.scala:312)
	scala.meta.internal.parsers.ScalametaParser.autoPos(ScalametaParser.scala:358)
	scala.meta.internal.parsers.ScalametaParser.templateOpt(ScalametaParser.scala:4249)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$classDef$1(ScalametaParser.scala:3881)
	scala.meta.internal.parsers.ScalametaParser.autoEndPos(ScalametaParser.scala:361)
	scala.meta.internal.parsers.ScalametaParser.autoEndPos(ScalametaParser.scala:366)
	scala.meta.internal.parsers.ScalametaParser.classDef(ScalametaParser.scala:3857)
	scala.meta.internal.parsers.ScalametaParser.tmplDef(ScalametaParser.scala:3816)
	scala.meta.internal.parsers.ScalametaParser.topLevelTmplDef(ScalametaParser.scala:3801)
	scala.meta.internal.parsers.ScalametaParser$$anonfun$2.applyOrElse(ScalametaParser.scala:4405)
	scala.meta.internal.parsers.ScalametaParser$$anonfun$2.applyOrElse(ScalametaParser.scala:4393)
	scala.PartialFunction.$anonfun$runWith$1(PartialFunction.scala:231)
	scala.PartialFunction.$anonfun$runWith$1$adapted(PartialFunction.scala:230)
	scala.meta.internal.parsers.ScalametaParser.statSeqBuf(ScalametaParser.scala:4384)
	scala.meta.internal.parsers.ScalametaParser.bracelessPackageStats$1(ScalametaParser.scala:4603)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$batchSource$11(ScalametaParser.scala:4614)
	scala.meta.internal.parsers.ScalametaParser.autoEndPos(ScalametaParser.scala:361)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$batchSource$10(ScalametaParser.scala:4614)
	scala.meta.internal.parsers.ScalametaParser.tryParse(ScalametaParser.scala:209)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$batchSource$1(ScalametaParser.scala:4606)
	scala.meta.internal.parsers.ScalametaParser.atPos(ScalametaParser.scala:312)
	scala.meta.internal.parsers.ScalametaParser.autoPos(ScalametaParser.scala:358)
	scala.meta.internal.parsers.ScalametaParser.batchSource(ScalametaParser.scala:4574)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$source$1(ScalametaParser.scala:4567)
	scala.meta.internal.parsers.ScalametaParser.atPos(ScalametaParser.scala:312)
	scala.meta.internal.parsers.ScalametaParser.autoPos(ScalametaParser.scala:358)
	scala.meta.internal.parsers.ScalametaParser.source(ScalametaParser.scala:4567)
	scala.meta.internal.parsers.ScalametaParser.entrypointSource(ScalametaParser.scala:4572)
	scala.meta.internal.parsers.ScalametaParser.parseSourceImpl(ScalametaParser.scala:135)
	scala.meta.internal.parsers.ScalametaParser.$anonfun$parseSource$1(ScalametaParser.scala:132)
	scala.meta.internal.parsers.ScalametaParser.parseRuleAfterBOF(ScalametaParser.scala:59)
	scala.meta.internal.parsers.ScalametaParser.parseRule(ScalametaParser.scala:54)
	scala.meta.internal.parsers.ScalametaParser.parseSource(ScalametaParser.scala:132)
	scala.meta.parsers.Parse$.$anonfun$parseSource$1(Parse.scala:29)
	scala.meta.parsers.Parse$$anon$1.apply(Parse.scala:36)
	scala.meta.parsers.Api$XtensionParseDialectInput.parse(Api.scala:25)
	scala.meta.internal.semanticdb.scalac.ParseOps$XtensionCompilationUnitSource.toSource(ParseOps.scala:17)
	scala.meta.internal.semanticdb.scalac.TextDocumentOps$XtensionCompilationUnitDocument.toTextDocument(TextDocumentOps.scala:206)
	scala.meta.internal.pc.SemanticdbTextDocumentProvider.textDocument(SemanticdbTextDocumentProvider.scala:54)
	scala.meta.internal.pc.ScalaPresentationCompiler.$anonfun$semanticdbTextDocument$1(ScalaPresentationCompiler.scala:384)
```
#### Short summary: 

file%3A%2F%2F%2Fhome%2Ftututu%2Fhry%2Fysyx%2Fysyx-workbench%2FysyxSoC%2Fsoc%2FSPI.scala:82: error: ) expected but ; found
  *(volatile int *)(SPI_BASE + SPI_TX1) = (addr & FLASH_ADDR) | FLASH_CMD_RD;
                                                                            ^