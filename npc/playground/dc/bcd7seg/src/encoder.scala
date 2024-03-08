import chisel3._
import chisel3.util._

class encoder extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(8.W))
    val out = Output(UInt(3.W))
    val zero = Output(Bool())
  })

  io.out := MuxCase(
    0.U(3.W),
    Seq(
      (io.in(7) === 1.U) -> 7.U(3.W),
      (io.in(6) === 1.U) -> 6.U(3.W),
      (io.in(5) === 1.U) -> 5.U(3.W),
      (io.in(4) === 1.U) -> 4.U(3.W),
      (io.in(3) === 1.U) -> 3.U(3.W),
      (io.in(2) === 1.U) -> 2.U(3.W),
      (io.in(1) === 1.U) -> 1.U(3.W),
      (io.in(0) === 1.U) -> 0.U(3.W)
    )
  )

  io.zero := (io.in === 0.U)
}
