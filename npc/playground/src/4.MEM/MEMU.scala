import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import DecodeTable._

class MEMU(XLEN: Int) extends Module {
  val io = IO(new Bundle {
    val inValid = Input(Bool())
    val flush   = Input(Bool())
    val memRaw  = Input(Bool())

    val EX2MEM = Flipped(Decoupled(new ExecuteToMemory(XLEN)))
    val MEM2WB = Decoupled(new MemoryToWrite(XLEN))

    val ar = Decoupled(new AxiReadRequestChannel())
    val aw = Decoupled(new AxiWriteRequestChannel())
    val w  = Decoupled(new AxiWriteDateChannel())

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

  val addr    = in.aluOut
  val memSize = in.func3(1, 0)

  val shiftWdata0 =
    Mux(in.aluOut(0), Cat(in.rdata2(23, 0), 0.U(8.W)), in.rdata2)
  val shiftWdata1 =
    Mux(in.aluOut(1), Cat(shiftWdata0(15, 0), 0.U(16.W)), shiftWdata0)

  // axi ar aw w channel
  val arDataFireReg = RegInit(false.B)
  val awFireReg     = RegInit(false.B)
  val wFireReg      = RegInit(false.B)

  val arAssert = RegInit(false.B)
  val awAssert = RegInit(false.B)
  val wAssert  = RegInit(false.B)

  val arDataFire = arDataFireReg || io.ar.fire
  val awFire     = awFireReg || io.aw.fire
  val wFire      = wFireReg || io.w.fire

  arDataFireReg := Mux(
    io.MEM2WB.fire,
    false.B,
    Mux(io.ar.fire, true.B, arDataFireReg)
  )
  wFireReg  := Mux(io.MEM2WB.fire, false.B, Mux(io.w.fire, true.B, wFireReg))
  awFireReg := Mux(io.MEM2WB.fire, false.B, Mux(io.aw.fire, true.B, awFireReg))

  arAssert := Mux(io.EX2MEM.fire, false.B, Mux(io.ar.valid, true.B, arAssert))
  awAssert := Mux(io.EX2MEM.fire, false.B, Mux(io.aw.valid, true.B, awAssert))
  wAssert  := Mux(io.EX2MEM.fire, false.B, Mux(io.w.valid, true.B, wAssert))

  io.ar.valid        := in.memRead && io.inValid && ~arDataFireReg && ~(io.flush && ~arAssert) && ~io.memRaw
  io.ar.bits.arid    := 1.U
  io.ar.bits.araddr  := addr
  io.ar.bits.arlen   := "h00".U
  io.ar.bits.arsize  := memSize
  io.ar.bits.arburst := "b00".U

  io.aw.valid        := in.memWrite && io.inValid && ~awFireReg && ~(io.flush && ~(awAssert || wAssert))
  io.aw.bits.awid    := 0.U
  io.aw.bits.awaddr  := addr
  io.aw.bits.awlen   := "h00".U
  io.aw.bits.awsize  := memSize
  io.aw.bits.awburst := "b00".U

  val wordStrb = decoder(Cat(memSize, in.aluOut(1, 0)), StrbTable)
  io.w.valid      := in.memWrite && io.inValid && ~wFireReg && ~(io.flush && ~(awAssert || wAssert))
  io.w.bits.wdata := Mux(addr(2), shiftWdata1 ## 0.U(32.W), shiftWdata1)
  io.w.bits.wstrb := Mux(addr(2), wordStrb ## 0.U(4.W), wordStrb)
  io.w.bits.wlast := true.B

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
  out.csrWdata := in.csrWdata
  out.csrAddr  := in.csrAddr

  out.syscall := in.syscall
  out.mret    := in.mret
  out.halt    := in.halt

  io.EX2MEM.ready := io.MEM2WB.fire || ~io.inValid
  io.MEM2WB.valid := MuxCase(
    true.B,
    Seq(
      (in.memRead && io.inValid) -> arDataFire,
      (in.memWrite && io.inValid) -> (awFire && wFire)
    )
  )
}
