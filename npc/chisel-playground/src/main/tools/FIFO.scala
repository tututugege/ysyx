import chisel3._
import chisel3.util._

class Fifo[T <: Data](data: T, n: Int) extends Module {
  val io = IO(new Bundle {
    val enq = Flipped(new DecoupledIO(data))
    val deq = new DecoupledIO(data)
  })
  val enqPtr    = RegInit(0.U((log2Up(n)).W))
  val deqPtr    = RegInit(0.U((log2Up(n)).W))
  val isFull    = RegInit(false.B)
  val isEmpty   = !isFull && (enqPtr === deqPtr)
  val deqPtrInc = deqPtr + 1.U
  val enqPtrInc = enqPtr + 1.U
  val isFullNext =
    Mux(io.enq.fire && ~io.deq.fire && (enqPtrInc === deqPtr), true.B, Mux(io.deq.fire && isFull, false.B, isFull))

  enqPtr := Mux(io.enq.fire, enqPtrInc, enqPtr)
  deqPtr := Mux(io.deq.fire, deqPtrInc, deqPtr)
  isFull := isFullNext

  val queue = Reg(Vec(n, data))

  when(io.enq.fire) {
    queue(enqPtr) := io.enq.bits
  }
  io.enq.ready := !isFull
  io.deq.valid := !isEmpty
  io.deq.bits  := queue(deqPtr)
}
