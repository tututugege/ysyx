file://<WORKSPACE>/npc/playground/src/selector.scala
### java.lang.IndexOutOfBoundsException: 0

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 3.3.1
Classpath:
<HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala3-library_3/3.3.1/scala3-library_3-3.3.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.10/scala-library-2.13.10.jar [exists ]
Options:



action parameters:
offset: 255
uri: file://<WORKSPACE>/npc/playground/src/selector.scala
text:
```scala
import chisel3._
import chisel3.util._

class selector4 (dataWidth: Int) extends Module {
  val io = IO(new Bundle {
    val inData = Input(Vec(4, UInt(dataWidth.W)))
    val sel = Input(UInt(2.W))
    val outData = Output(UInt(dataWidth.W))
  })

  for (@@)
  val a = Seq(
    0.U -> io.inData(0),
    1.U -> io.inData(1),
    2.U -> io.inData(2),
    3.U -> io.inData(3)
  )

  io.outData := MuxLookup(io.sel, 0.U, Seq(
    0.U -> io.inData(0),
    1.U -> io.inData(1),
    2.U -> io.inData(2),
    3.U -> io.inData(3)
  )) 
}
```



#### Error stacktrace:

```
scala.collection.LinearSeqOps.apply(LinearSeq.scala:131)
	scala.collection.LinearSeqOps.apply$(LinearSeq.scala:128)
	scala.collection.immutable.List.apply(List.scala:79)
	dotty.tools.dotc.util.Signatures$.countParams(Signatures.scala:501)
	dotty.tools.dotc.util.Signatures$.applyCallInfo(Signatures.scala:186)
	dotty.tools.dotc.util.Signatures$.computeSignatureHelp(Signatures.scala:94)
	dotty.tools.dotc.util.Signatures$.signatureHelp(Signatures.scala:63)
	scala.meta.internal.pc.MetalsSignatures$.signatures(MetalsSignatures.scala:17)
	scala.meta.internal.pc.SignatureHelpProvider$.signatureHelp(SignatureHelpProvider.scala:51)
	scala.meta.internal.pc.ScalaPresentationCompiler.signatureHelp$$anonfun$1(ScalaPresentationCompiler.scala:398)
```
#### Short summary: 

java.lang.IndexOutOfBoundsException: 0