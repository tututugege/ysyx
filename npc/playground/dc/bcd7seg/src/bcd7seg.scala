import chisel3._
import chisel3.util._

class bcd7seg extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(4.W))
    val out = Output((UInt(7.W)))
  })

  val outReg = RegInit(VecInit(Seq.fill(7)(0.U(1.W))))

  outReg(6) := ((io.in === 0.U)
    || (io.in === 2.U)
    || (io.in === 3.U)
    || (io.in === 5.U)
    || (io.in === 6.U)
    || (io.in === 7.U)
    || (io.in === 8.U)
    || (io.in === 9.U))

  outReg(5) := ((io.in === 0.U)
    || (io.in === 1.U)
    || (io.in === 2.U)
    || (io.in === 3.U)
    || (io.in === 4.U)
    || (io.in === 7.U)
    || (io.in === 8.U)
    || (io.in === 9.U))

  outReg(4) := ((io.in === 0.U)
    || (io.in === 1.U)
    || (io.in === 3.U)
    || (io.in === 4.U)
    || (io.in === 5.U)
    || (io.in === 6.U)
    || (io.in === 7.U)
    || (io.in === 8.U)
    || (io.in === 9.U))

  outReg(3) := ((io.in === 0.U)
    || (io.in === 2.U)
    || (io.in === 3.U)
    || (io.in === 5.U)
    || (io.in === 6.U)
    || (io.in === 8.U)
    || (io.in === 9.U))

  outReg(2) := ((io.in === 0.U)
    || (io.in === 2.U)
    || (io.in === 6.U)
    || (io.in === 8.U))

  outReg(1) := ((io.in === 0.U)
    || (io.in === 4.U)
    || (io.in === 5.U)
    || (io.in === 6.U)
    || (io.in === 8.U)
    || (io.in === 9.U))

  outReg(0) := ((io.in === 2.U)
    || (io.in === 3.U)
    || (io.in === 4.U)
    || (io.in === 5.U)
    || (io.in === 6.U)
    || (io.in === 8.U)
    || (io.in === 9.U))

  io.out := outReg.asUInt()
}
