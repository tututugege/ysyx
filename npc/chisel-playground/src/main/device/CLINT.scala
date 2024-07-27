import chisel3._
import chisel3.util._
import scala.util.Random

object CLINT {
  val CONFIG_MTIME_LO_MMIO = "h02000000"
  val CONFIG_MTIME_HI_MMIO = "h02000004"
}

class CLINT extends Module {
  val io = IO(new Bundle {
    val AxiLite = Flipped(new AxiLiteBundle())
  })

  // val rand1 = Random.nextInt(32)
  // val rand2 = Random.nextInt(32)
  // println(rand1, rand2)
  //
  // val arLfsr = Module(new LFSR(rand1))
  // val rLfsr  = Module(new LFSR(rand2))
  val arRand = 0.U
  val rRand  = 0.U

  val ar    = io.AxiLite.ar
  val r     = io.AxiLite.r
  val aw    = io.AxiLite.aw
  val w     = io.AxiLite.w
  val b     = io.AxiLite.b
  val mtime = RegInit(0.U(64.W))

  mtime := mtime + 1.U

// ar channel
  val arFifo  = Module(new Fifo[AddrInfo](new AddrInfo, 2))
  val arCount = RegInit(arRand)
  arCount := Mux(arFifo.io.enq.fire, arRand, Mux(ar.valid, arCount - 1.U, arCount))

  ar.ready                := arFifo.io.enq.ready
  arFifo.io.enq.valid     := ar.valid
  arFifo.io.enq.bits.addr := ar.bits.araddr
  arFifo.io.enq.bits.id   := ar.bits.arid

// r channel
  val rCount = RegInit(rRand)
  val rdata  = Wire(UInt(32.W))
  rCount       := Mux(arFifo.io.deq.fire, rRand, Mux(r.ready && arFifo.io.deq.valid, rCount - 1.U, rCount))
  r.bits.rdata := rdata
  r.bits.rlast := 1.U
  r.bits.rresp := 0.U
  r.bits.rid   := arFifo.io.deq.bits.id
  r.valid      := arFifo.io.deq.valid && (rCount === 0.U)

  arFifo.io.deq.ready := r.ready && (rCount === 0.U)

  rdata := MuxCase(
    0.U,
    Seq(
      (arFifo.io.deq.bits.addr === CLINT.CONFIG_MTIME_HI_MMIO.U) -> mtime(63, 32),
      (arFifo.io.deq.bits.addr === CLINT.CONFIG_MTIME_LO_MMIO.U) -> mtime(31, 0)
    )
  )

// aw channel
  aw.ready := false.B

// w channel
  w.ready := false.B

// b channel
  b.valid      := false.B
  b.bits.bresp := 0.U
  b.bits.bid   := 0.U
}
