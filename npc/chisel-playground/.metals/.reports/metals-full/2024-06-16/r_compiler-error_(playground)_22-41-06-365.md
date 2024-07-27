file://<WORKSPACE>/src/main/3.EX/Multiplier.scala
### scala.reflect.internal.Types$TypeError: illegal cyclic reference involving class Multiplier

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 2.13.12
Classpath:
<WORKSPACE>/.bloop/out/playground/bloop-bsp-clients-classes/classes-Metals-hd77913UTmKH5yuL8D3CPg== [exists ], <HOME>/.cache/bloop/semanticdb/com.sourcegraph.semanticdb-javac.0.9.9/semanticdb-javac-0.9.9.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/chipsalliance/chisel_2.13/7.0.0-M1/chisel_2.13-7.0.0-M1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/scala-lang/scala-library/2.13.12/scala-library-2.13.12.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/scala-lang/scala-reflect/2.13.12/scala-reflect-2.13.12.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/github/scopt/scopt_2.13/4.1.0/scopt_2.13-4.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/net/jcazevedo/moultingyaml_2.13/0.4.2/moultingyaml_2.13-0.4.2.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/json4s/json4s-native_2.13/4.0.6/json4s-native_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/apache/commons/commons-text/1.10.0/commons-text-1.10.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/io/github/alexarchambault/data-class_2.13/0.2.6/data-class_2.13-0.2.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/lihaoyi/os-lib_2.13/0.9.1/os-lib_2.13-0.9.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/scala-lang/modules/scala-parallel-collections_2.13/1.0.4/scala-parallel-collections_2.13-1.0.4.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/lihaoyi/upickle_2.13/3.1.0/upickle_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/chipsalliance/firtool-resolver_2.13/2.0.0/firtool-resolver_2.13-2.0.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/github/nscala-time/nscala-time_2.13/2.22.0/nscala-time_2.13-2.22.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/yaml/snakeyaml/1.26/snakeyaml-1.26.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/json4s/json4s-core_2.13/4.0.6/json4s-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/json4s/json4s-native-core_2.13/4.0.6/json4s-native-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/apache/commons/commons-lang3/3.12.0/commons-lang3-3.12.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/lihaoyi/geny_2.13/1.0.0/geny_2.13-1.0.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/lihaoyi/ujson_2.13/3.1.0/ujson_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/lihaoyi/upack_2.13/3.1.0/upack_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/lihaoyi/upickle-implicits_2.13/3.1.0/upickle-implicits_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/scala-lang/modules/scala-xml_2.13/2.2.0/scala-xml_2.13-2.2.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/scala-lang/modules/scala-collection-compat_2.13/2.11.0/scala-collection-compat_2.13-2.11.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/joda-time/joda-time/2.10.1/joda-time-2.10.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/joda/joda-convert/2.2.0/joda-convert-2.2.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/json4s/json4s-ast_2.13/4.0.6/json4s-ast_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/org/json4s/json4s-scalap_2.13/4.0.6/json4s-scalap_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/thoughtworks/paranamer/paranamer/2.8/paranamer-2.8.jar [exists ], <HOME>/.cache/coursier/v1/https/repo.scala-sbt.org/scalasbt/maven-releases/com/lihaoyi/upickle-core_2.13/3.1.0/upickle-core_2.13-3.1.0.jar [exists ]
Options:
-language:reflectiveCalls -deprecation -feature -Xcheckinit -Yrangepos -Xplugin-require:semanticdb


action parameters:
uri: file://<WORKSPACE>/src/main/3.EX/Multiplier.scala
text:
```scala
import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

class Multiplier extends Module {
  val io = IO(new Bundle {
    val go     = Input(Bool())
    val signed = Input(Bool())
    val x      = Input(UInt(32.W))
    val y      = Input(UInt(32.W))
    val res    = Output(UInt(64.W))
  })

  val y0 = io.y ## 0.U(1.W)

  class SelX extends Module {
    val io = IO(new Bundle {
      val in  = Input(UInt(3.W))
      val sel = Input(UInt(4.W))
    })
  }

  class Wallace(num: Int) extends Module {

    def WallaceInCarry(num: Int) {
      for ( num>0) yield{

      }
    }

    val io = IO(new Bundle {
      val in      = Input(UInt(num.W))
      val inCaryy = WallaceInCarry(num)
      val out     = Input(UInt(4.W))
    })

  }

  val productSel = for (i <- 0 until 16) yield { Module(new SelX) }

  val productPart = Wire(Vec(16, UInt(63.W)))

  val sel = Wire(Vec(16, UInt(4.W)))

  for (i <- 0 until 16) {
    productSel(i).io.in := y0(i * 2 + 2, i * 2)

    sel(i) := productSel(i).io.sel
    productPart(i) := MuxLookup(sel(i), 0.U)(
      Seq(
        "b0001".U -> Fill(32 - i * 2, io.x(31)) ## io.x ## Fill(i * 2, 0.U(1.W)),
        "b0010".U -> Fill(32 - i * 2 + 1, io.x(31)) ## io.x ## Fill(i * 2 + 1, 0.U(1.W)),
        "b0100".U -> Fill(32 - i * 2, ~io.x(31)) ## (~io.x ## Fill(i * 2, 1.U(1.W))),
        "b1000".U -> Fill(32 - i * 2 + 1, ~io.x(31)) ## (~io.x ## Fill(i * 2 + 1, 1.U(1.W)))
      )
    )
  }

  val product1Bit = Wire(Vec(64, Vec(16, UInt(1.W))))
  for (i <- 0 until 64) {
    for (j <- 0 until 16) {
      product1Bit(i)(j) := productPart(j)(i)
    }
  }

}

```



#### Error stacktrace:

```

```
#### Short summary: 

scala.reflect.internal.Types$TypeError: illegal cyclic reference involving class Multiplier