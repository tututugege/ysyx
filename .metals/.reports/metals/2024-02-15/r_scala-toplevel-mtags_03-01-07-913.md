error id: file://<WORKSPACE>/npc/playground/src/TOP.scala:[24..25) in Input.VirtualFile("file://<WORKSPACE>/npc/playground/src/TOP.scala", "import chisel3._

class (Width: Int)TOP extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(16.W))
    val b = Input(UInt(16.W))
    val out = Output(UInt(16.W))
  })

  io.out := io.a ^ io.b
}")
file://<WORKSPACE>/npc/playground/src/TOP.scala
file://<WORKSPACE>/npc/playground/src/TOP.scala:3: error: expected identifier; obtained lparen
class (Width: Int)TOP extends Module {
      ^
#### Short summary: 

expected identifier; obtained lparen