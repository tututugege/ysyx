import chisel3._
import chisel3.util._
import scala.util.Random

class AddrInfo extends Bundle {
  val id   = UInt(3.W)
  val addr = UInt(32.W)
}

class DataInfo extends Bundle {
  val data = UInt(32.W)
  val strb = UInt(4.W)
}

class Ram extends BlackBox {
  val io = IO(new Bundle {
    val ren   = Input(Bool())
    val raddr = Input(UInt(32.W))
    val rdata = Output(UInt(32.W))

    val wen   = Input(Bool())
    val waddr = Input(UInt(32.W))
    val wdata = Input(UInt(32.W))
    val wstrb = Input(UInt(4.W))
  })
}

class AxiRamWrapper extends Module {
  val io = IO(new Bundle {
    val AxiLite = Flipped(new AxiLiteBundle(TOP.axiParams))
  })

  val rand1 = Random.nextInt(32)
  val rand2 = Random.nextInt(32)
  val rand3 = Random.nextInt(32)
  val rand4 = Random.nextInt(32)
  val rand5 = Random.nextInt(32)

  println(rand1, rand2, rand3, rand4, rand5)

  val arLfsr = Module(new LFSR(rand1))
  val rLfsr  = Module(new LFSR(rand2))
  val awLfsr = Module(new LFSR(rand3))
  val wLfsr  = Module(new LFSR(rand4))
  val bLfsr  = Module(new LFSR(rand5))

  val arRand = arLfsr.io.out
  val rRand  = rLfsr.io.out
  val awRand = awLfsr.io.out
  val wRand  = wLfsr.io.out
  val bRand  = bLfsr.io.out

  val ar   = io.AxiLite.ar
  val r    = io.AxiLite.r
  val aw   = io.AxiLite.aw
  val w    = io.AxiLite.w
  val b    = io.AxiLite.b
  val Sram = Module(new Ram)

// ar channel
  val arFifo  = Module(new Fifo[AddrInfo](new AddrInfo, 2))
  val arCount = RegInit(arRand)
  arCount := Mux(arFifo.io.enq.fire, arRand, Mux(ar.valid, arCount - 1.U, arCount))

  ar.ready                := arFifo.io.enq.ready && (arCount === 0.U)
  arFifo.io.enq.valid     := ar.valid && (arCount === 0.U)
  arFifo.io.enq.bits.addr := ar.bits.araddr
  arFifo.io.enq.bits.id   := ar.bits.arid

// r channel
  val rCount = RegInit(rRand)
  rCount              := Mux(arFifo.io.deq.fire, rRand, Mux(r.ready && arFifo.io.deq.valid, rCount - 1.U, rCount))
  Sram.io.ren         := arFifo.io.deq.valid && (rCount === 0.U)
  Sram.io.raddr       := arFifo.io.deq.bits.addr
  r.bits.rdata        := Sram.io.rdata
  r.bits.rid          := arFifo.io.deq.bits.id
  r.valid             := Sram.io.ren
  arFifo.io.deq.ready := r.ready && (rCount === 0.U)

// aw channel
  val awFifo  = Module(new Fifo[AddrInfo](new AddrInfo, 2))
  val awCount = RegInit(awRand)
  awCount                 := Mux(awFifo.io.enq.fire, awRand, Mux(aw.valid, awCount - 1.U, awCount))
  aw.ready                := awFifo.io.enq.ready && (awCount === 0.U)
  awFifo.io.enq.valid     := aw.valid && (awCount === 0.U)
  awFifo.io.enq.bits.addr := aw.bits.awaddr
  awFifo.io.enq.bits.id   := aw.bits.awid

// w channel
  val wFifo  = Module(new Fifo[DataInfo](new DataInfo, 2))
  val wCount = RegInit(wRand)
  wCount                 := Mux(wFifo.io.enq.fire, wRand, Mux(w.valid, wCount - 1.U, wCount))
  w.ready                := wFifo.io.enq.ready && (wCount === 0.U)
  wFifo.io.enq.valid     := w.valid && (wCount === 0.U)
  wFifo.io.enq.bits.data := w.bits.wdata
  wFifo.io.enq.bits.strb := w.bits.wstrb

// b channel
  val bCount = RegInit(bRand)
  bCount := Mux(
    awFifo.io.deq.fire,
    bRand,
    Mux(b.ready && awFifo.io.deq.valid && wFifo.io.deq.valid, bCount - 1.U, bCount)
  )
  Sram.io.wen         := awFifo.io.deq.valid && wFifo.io.deq.valid && (bCount === 0.U)
  Sram.io.waddr       := awFifo.io.deq.bits.addr
  Sram.io.wdata       := wFifo.io.deq.bits.data
  Sram.io.wstrb       := wFifo.io.deq.bits.strb
  b.valid             := Sram.io.wen
  b.bits.bid          := awFifo.io.deq.bits.id
  awFifo.io.deq.ready := b.ready && (bCount === 0.U)
  wFifo.io.deq.ready  := b.ready && (bCount === 0.U)

}
