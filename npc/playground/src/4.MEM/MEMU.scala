import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import DecodeTable._

class MEMU(XLEN: Int) extends Module {
  val io = IO(new Bundle {
    val inValid = Input(Bool())

    val EX2MEM = Flipped(Decoupled(new ExecuteToMemory(XLEN)))
    val MEM2WB = Decoupled(new MemoryToWrite(XLEN))

    val ar = Decoupled(new AxiReadRequestChannel(TOP.axiParams))
    val aw = Decoupled(new AxiWriteRequestChannel(TOP.axiParams))
    val w  = Decoupled(new AxiWriteDateChannel(TOP.axiParams))

  })

  val in  = io.EX2MEM.bits
  val out = io.MEM2WB.bits

  // Memory Access
  val StrbTable = TruthTable(
    Map(
      BitPat(MemSizeB + "00") -> BitPat("b0001"),
      BitPat(MemSizeB + "01") -> BitPat("b0010"),
      BitPat(MemSizeB + "10") -> BitPat("b0100"),
      BitPat(MemSizeB + "11") -> BitPat("b1000"),
      BitPat(MemSizeH + "00") -> BitPat("b0011"),
      BitPat(MemSizeH + "01") -> BitPat("b0110"),
      BitPat(MemSizeH + "10") -> BitPat("b1100"),
      BitPat(MemSizeW + "00") -> BitPat("b1111")
    ),
    BitPat("b????")
  )

  val addr    = Cat(in.aluOut(31, 2), 0.U(2.W))
  val memSize = in.func3(1, 0)

  io.ar.valid       := in.memRead
  io.ar.bits.arid   := 0.U
  io.ar.bits.araddr := addr
  io.ar.bits.arsize := "b010".U
  io.ar.bits.arprot := 0.U

  io.aw.valid       := in.memWrite
  io.aw.bits.awid   := 0.U
  io.aw.bits.awaddr := addr
  io.aw.bits.awsize := memSize
  io.aw.bits.awprot := 0.U

  val shiftWdata0 = Mux(in.aluOut(0), Cat(in.rdata2(23, 0), 0.U(8.W)), in.rdata2)
  val shiftWdata1 = Mux(in.aluOut(1), Cat(shiftWdata0(15, 0), 0.U(16.W)), shiftWdata0)

  io.w.valid      := in.memWrite
  io.w.bits.wdata := shiftWdata1
  io.w.bits.wstrb := decoder(Cat(memSize, in.aluOut(1, 0)), StrbTable)

  out.pc    := in.pc
  out.inst  := in.inst
  out.func3 := in.func3

  out.memRead  := in.memRead
  out.memWrite := in.memWrite

  out.rd       := in.rd
  out.regWrite := in.regWrite
  out.aluOut   := in.aluOut

  out.csrWrite := in.csrWrite
  out.csrRead  := in.csrRead

  out.syscall := in.syscall
  out.mret    := in.mret
  out.halt    := in.halt

  // axi ar aw w channel
  val arDataFireReg = RegInit(false.B)
  val awFireReg     = RegInit(false.B)
  val wFireReg      = RegInit(false.B)

  val arDataFire = arDataFireReg || io.ar.fire
  val awFire     = awFireReg || io.aw.fire
  val wFire      = wFireReg || io.w.fire

  arDataFireReg := Mux(io.MEM2WB.fire, false.B, io.ar.fire)
  wFireReg      := Mux(io.MEM2WB.fire, false.B, io.w.fire)
  awFireReg     := Mux(io.MEM2WB.fire, false.B, io.aw.fire)

  io.EX2MEM.ready := io.MEM2WB.fire || ~io.inValid
  io.MEM2WB.valid := MuxCase(
    true.B,
    Seq(
      (in.memRead && io.inValid) -> arDataFire,
      (in.memWrite && io.inValid) -> (awFire && wFire)
    )
  )

}
