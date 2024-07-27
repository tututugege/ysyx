file://<WORKSPACE>/ysyxSoC/soc/BitRev.scala
### file%3A%2F%2F%2Fhome%2Ftututu%2Fhry%2Fysyx%2Fysyx-workbench%2FysyxSoC%2Fsoc%2FBitRev.scala:13: error: ) expected but . found
  io.miso := true.B
    ^

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 2.13.8
Classpath:
<HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.8/scala-library-2.13.8.jar [exists ]
Options:



action parameters:
uri: file://<WORKSPACE>/ysyxSoC/soc/BitRev.scala
text:
```scala
package ysyx

import chisel3._
import chisel3.util._

class bitrev extends BlackBox {
  val io = IO(Flipped(new SPIIO(1)))
}

class bitrevChisel extends RawModule { // we do not need clock and reset
  val io = IO(Flipped(new SPIIO(1)))
  val data = Vec(8, Reg(UInt(1.W))
  io.miso := true.B
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

file%3A%2F%2F%2Fhome%2Ftututu%2Fhry%2Fysyx%2Fysyx-workbench%2FysyxSoC%2Fsoc%2FBitRev.scala:13: error: ) expected but . found
  io.miso := true.B
    ^