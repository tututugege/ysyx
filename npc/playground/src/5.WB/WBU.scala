import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import DecodeTable._

class WBU(XLEN: Int) extends Module {
  val io = IO(new Bundle {
    val inValid  = Input(Bool())
    val arwValid = Input(Bool())

    val MEM2WB = Flipped(Decoupled(new MemoryToWrite(XLEN)))
    val WBout  = Decoupled(new WriteBack(XLEN))

    val r = Flipped(Decoupled(new AxiReadDataChannel()))
    val b = Flipped(Decoupled(new AxiWriteResponseChannel()))
  })

  val Csr = Module(new CSR)

  val in  = io.MEM2WB.bits
  val out = io.WBout.bits

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
  val rDataFire = io.r.fire
  val bFire     = io.b.fire
  val rFireReg  = Reg(Bool())
  val bFireReg  = Reg(Bool())

  rFireReg := Mux(io.WBout.fire, false.B, Mux(io.r.fire, true.B, rFireReg))
  bFireReg := Mux(io.WBout.fire, false.B, Mux(io.b.fire, true.B, bFireReg))
  // read data channel
  io.r.ready := in.memRead && io.arwValid && ~rFireReg

  // write response channel
  io.b.ready := in.memWrite && io.arwValid && ~bFireReg

  io.MEM2WB.ready := io.WBout.fire || ~io.inValid && ~io.arwValid
  io.WBout.valid := MuxCase(
    true.B,
    Seq(
      (in.memRead && io.inValid) -> rDataFire,
      (in.memWrite && io.inValid) -> bFire
    )
  )

  // csr
  val csrRdata = Wire(UInt(32.W))

  Csr.io.csrAddr := in.csrAddr
  Csr.io.wdata := MuxLookup(
    in.func3(1, 0),
    in.csrWdata,
    Seq(
      DecodeTable.CsrSet.U -> Fill(32, 1.U(1.W)),
      DecodeTable.CsrClr.U -> 0.U
    )
  )
  Csr.io.wmask := Mux(in.func3(1), in.csrWdata, Fill(32, 1.U(1.W)))
  Csr.io.wen   := in.csrWrite

  csrRdata := Csr.io.rdata

  Csr.io.exception := in.syscall
  Csr.io.cause     := Mux(in.syscall, CSR.ExceptionCode.ECALL.U, 0.U)
  Csr.io.pc        := in.pc

  out.pc   := in.pc
  out.inst := in.inst

  out.regWdata := MuxCase(in.aluOut, Seq(in.memRead -> ReadData, in.csrRead -> csrRdata))
  out.regWrite := in.regWrite && io.inValid
  out.rd       := in.rd

  out.syscall := in.syscall && io.inValid
  out.pcTrap  := Csr.io.mtvecRdata
  out.pcMret  := Csr.io.mepcRdata
  out.mret    := in.mret && io.inValid

  out.halt := in.halt && io.inValid

  out.memRead  := in.memRead && io.inValid
  out.memWrite := in.memWrite && io.inValid
  out.address  := in.aluOut
}
