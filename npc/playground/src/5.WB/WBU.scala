import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import DecodeTable._

class WBU(XLEN: Int) extends Module {
  val io = IO(new Bundle {
    val inValid = Input(Bool())
    val MEM2WB  = Flipped(Decoupled(new MemoryToWrite(XLEN)))
    val WBout   = Decoupled(new WriteBack(XLEN))

    val r = Flipped(Decoupled(new AxiReadDataChannel(TOP.axiParams)))
    val b = Flipped(Decoupled(new AxiWriteResponseChannel(TOP.axiParams)))
  })

  val in  = io.MEM2WB.bits
  val out = io.WBout.bits

  // read data channel
  io.r.ready := true.B

// write response channel
  io.b.ready := true.B

  // generate ReadData
  val rdataShift0 = Mux(in.aluOut(0), io.r.bits.rdata(31, 8), io.r.bits.rdata)
  val rdataShift1 = Mux(in.aluOut(1), rdataShift0(31, 16), rdataShift0)
  val rdataSignal = Mux(
    ~in.func3(2),
    MuxLookup(
      in.func3(1, 0),
      rdataShift1(XLEN - 1),
      Seq(
        "b00".U -> rdataShift1(7),
        "b01".U -> rdataShift1(15)
      )
    ),
    0.U(1.W)
  )
  val ReadData =
    MuxLookup(
      in.func3(1, 0),
      rdataShift1,
      Seq(
        "b00".U -> Cat(Fill(24, rdataSignal), rdataShift1(7, 0)),
        "b01".U -> Cat(Fill(16, rdataSignal), rdataShift1(15, 0))
      )
    )

  // axi r b channel
  val rDataFireReg = RegInit(false.B)
  val bFireReg     = RegInit(false.B)

  val rDataFire = rDataFireReg || io.r.fire
  val bFire     = bFireReg || io.b.fire

  rDataFireReg := Mux(io.WBout.fire, false.B, io.r.fire)
  bFireReg     := Mux(io.WBout.fire, false.B, io.b.fire)

  io.MEM2WB.ready := io.WBout.fire || ~io.inValid
  io.WBout.valid := MuxCase(
    true.B,
    Seq(
      (in.memRead && io.inValid) -> rDataFire,
      (in.memWrite && io.inValid) -> bFire
    )
  )

  out.pc   := in.pc
  out.inst := in.inst

  out.regWdata := Mux(in.memRead, ReadData, in.aluOut)
  out.regWrite := in.regWrite && io.inValid
  out.rd       := in.rd

  out.csrWrite := in.csrWrite && io.inValid
  out.csrRead  := in.csrRead && io.inValid
  out.csrWdata := in.aluOut

  out.syscall := in.syscall && io.inValid
  out.mret    := in.mret && io.inValid
  out.halt    := in.halt && io.inValid

}
