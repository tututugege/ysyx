import chisel3._
import chisel3.util._

class Selector4 extends Module {
    val io = IO(new Bundle {
        val shamt = Input(Bool())
        val left  = Input(Bool())
        val din   = Input(Vec(4, UInt(1.W)))
        val dout  = Output(UInt(1.W))
    })

    val shftL = Wire(Bool())
    val shftR = Wire(Bool())
    val shftN = Wire(Bool())

    shftL :=  io.left && io.shamt
    shftR := ~io.left && io.shamt
    shftN := ~io.shamt

    io.dout := Mux1H(
        Seq(
            shftN -> io.din(0),
            shftR -> io.din(1),
            shftL -> io.din(3)
        ))

}
