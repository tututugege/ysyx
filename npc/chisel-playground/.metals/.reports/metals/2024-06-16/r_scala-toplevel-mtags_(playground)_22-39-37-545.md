error id: file://<WORKSPACE>/src/main/3.EX/Multiplier.scala:[536..537) in Input.VirtualFile("file://<WORKSPACE>/src/main/3.EX/Multiplier.scala", "import chisel3._
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

    def (num:Int)WallaceInCarry
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
")
file://<WORKSPACE>/src/main/3.EX/Multiplier.scala
file://<WORKSPACE>/src/main/3.EX/Multiplier.scala:26: error: expected identifier; obtained lparen
    def (num:Int)WallaceInCarry
        ^
#### Short summary: 

expected identifier; obtained lparen