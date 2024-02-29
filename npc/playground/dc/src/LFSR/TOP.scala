import chisel3._
import chisel3.util._

class TOP extends Module {
    val io = IO(new Bundle {
        val btnClk = Input(Clock())
        val segHi  = Output(UInt(8.W))
        val segLo  = Output(UInt(8.W))
    })

    val lfsrOut = Wire(UInt(8.W))
    withClock(io.btnClk) {
        val lfsr = Module(new LFSR8(1 << 7))
        lfsrOut := lfsr.io.out
    }
    val lo   = Module(new hex7seg)
    val hi   = Module(new hex7seg)

    hi.io.in := lfsrOut(7 ,4)
    lo.io.in := lfsrOut(3 ,0)

    io.segHi := ~(hi.io.out) ## 1.U(1.W)
    io.segLo := ~(lo.io.out) ## 1.U(1.W)

}