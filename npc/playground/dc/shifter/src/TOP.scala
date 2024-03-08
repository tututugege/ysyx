import chisel3._
import chisel3.util._

class TOP extends Module {
    val io = IO(new Bundle {
        val left  = Input(Bool())
        val shamt = Input(UInt(3.W))
        val din   = Input(UInt(8.W))

        val dinSeg   = Output(UInt(16.W))
        val doutSeg  = Output(UInt(16.W))
        val shamtSeg = Output(UInt(8.W))
    })

    val shifter = Module(new BarrelShifter(8))

    shifter.io.left  := io.left
    shifter.io.shamt := io.shamt
    shifter.io.din   := io.din

    val dinHiSegMod  = Module(new hex7seg)
    val dinLoSegMod  = Module(new hex7seg)
    val doutHiSegMod = Module(new hex7seg)
    val doutLoSegMod = Module(new hex7seg)
    val shamtSegMod  = Module(new hex7seg)

    dinHiSegMod.io.in  := io.din(7, 4)
    dinLoSegMod.io.in  := io.din(3, 0)
    doutHiSegMod.io.in := shifter.io.dout(7, 4)
    doutLoSegMod.io.in := shifter.io.dout(3, 0)
    shamtSegMod.io.in  := 0.U(1.W) ## io.shamt

    io.dinSeg   := ~(dinHiSegMod.io.out ## 0.U(1.W) ## dinLoSegMod.io.out ## 0.U(1.W))
    io.doutSeg  := ~(doutHiSegMod.io.out ## 0.U(1.W) ## doutLoSegMod.io.out ## 0.U(1.W))
    io.shamtSeg := ~(shamtSegMod.io.out ## 0.U(1.W))
}