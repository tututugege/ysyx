import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import firrtl.CoreTransform

object CrossBar {
  val device = Seq[(Int, String, String)](
// bus number, name, address space
    (0, "RAM", "b10000???????????????????????????"),
    (1, "UART", "b101000000000000000000011111110??"),
    (2, "CLINT", "b101000000000000000000000010?????")
  )

  val map = for (i <- 0 until device.length) yield {
    BitPat(device(i)._3) -> BitPat("b" + "0" * (device.length - i - 1) + (1 << device(i)._1).toBinaryString)
  }

  val table = TruthTable(
    map,
    BitPat("b" + "0" * device.length)
  )
}

class RequestInfo extends Bundle {
  val slaveNum = UInt(CrossBar.device.length.W)
}

class CrossBar extends Module {
  val io = IO(new Bundle {
    val master = Flipped(new AxiLiteBundle(TOP.axiParams))
    val slave  = Vec(CrossBar.device.length, new AxiLiteBundle(TOP.axiParams))
  })

  val arSel = Wire(UInt(CrossBar.device.length.W))
  val rSel  = Wire(UInt(CrossBar.device.length.W))
  val awSel = Wire(UInt(CrossBar.device.length.W))
  val wSel  = Wire(UInt(CrossBar.device.length.W))
  val bSel  = Wire(UInt(CrossBar.device.length.W))

  val ar = io.master.ar
  val r  = io.master.r
  val aw = io.master.aw
  val w  = io.master.w
  val b  = io.master.b

  // the response must be consistent with the order of request in our core
  val arFifo = Module(new Fifo(new RequestInfo, 2))
  val awFifo = Module(new Fifo(new RequestInfo, 2))

  // if aw channel shakes hands before wchannel, the sel is necessary to select channel
  val awSelReg  = Reg(UInt(CrossBar.device.length.W))
  val awFireReg = RegInit(false.B)
  val wFireReg  = RegInit(false.B)

  // ar aw w channel
  awFireReg := Mux(awFifo.io.enq.fire, false.B, Mux(aw.fire, true.B, awFireReg))
  wFireReg  := Mux(awFifo.io.enq.fire, false.B, Mux(w.fire, true.B, wFireReg))

  arSel := decoder(ar.bits.araddr, CrossBar.table)
  awSel := decoder(aw.bits.awaddr, CrossBar.table)
  wSel  := Mux(awFireReg, awSelReg, awSel)

  arFifo.io.enq.valid         := ar.fire
  arFifo.io.enq.bits.slaveNum := arSel

  awFifo.io.enq.valid         := aw.fire
  awFifo.io.enq.bits.slaveNum := awSel

  ar.ready := Mux1H(
    for (i <- 0 until CrossBar.device.length) yield {
      arSel(i) -> (io.slave(i).ar.ready && arFifo.io.enq.ready)
    }
  )

  aw.ready := Mux1H(
    for (i <- 0 until CrossBar.device.length) yield {
      awSel(i) -> (io.slave(i).aw.ready && awFifo.io.enq.ready)
    }
  )

  w.ready := Mux1H(
    for (i <- 0 until CrossBar.device.length) yield {
      wSel(i) -> (io.slave(i).w.ready && awFifo.io.enq.ready)
    }
  )

  for (i <- 0 until CrossBar.device.length) {
    io.slave(i).ar.valid := Mux(arSel(i), ar.valid, false.B) && arFifo.io.enq.ready
    io.slave(i).ar.bits  := ar.bits
    io.slave(i).aw.valid := Mux(awSel(i), aw.valid, false.B) && awFifo.io.enq.ready
    io.slave(i).aw.bits  := aw.bits
    io.slave(i).w.valid  := Mux(wSel(i), w.valid, false.B) && awFifo.io.enq.ready
    io.slave(i).w.bits   := w.bits
  }
  // r channel
  rSel := arFifo.io.deq.bits.slaveNum
  bSel := awFifo.io.deq.bits.slaveNum

  arFifo.io.deq.ready := r.fire
  r.bits := Mux1H(for (i <- 0 until CrossBar.device.length) yield {
    rSel(i) -> io.slave(i).r.bits
  })

  r.valid := Mux1H(for (i <- 0 until CrossBar.device.length) yield {
    rSel(i) -> io.slave(i).r.valid
  })

  // b channel
  awFifo.io.deq.ready := b.fire
  b.bits := Mux1H(for (i <- 0 until CrossBar.device.length) yield {
    bSel(i) -> io.slave(i).b.bits
  })

  b.valid := Mux1H(for (i <- 0 until CrossBar.device.length) yield {
    bSel(i) -> io.slave(i).b.valid
  })

  for (i <- 0 until CrossBar.device.length) {
    io.slave(i).r.ready := Mux(rSel(i), r.ready, false.B)
    io.slave(i).b.ready := Mux(bSel(i), b.ready, false.B)
  }
}
