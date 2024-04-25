import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import DecodeTable._

class IDU(XLEN: Int) extends Module {
  val io = IO(new Bundle {
    val inValid = Input(Bool())

    val IF2ID = Flipped(Decoupled(new FetchToDecode(XLEN)))
    val ID2EX = Decoupled(new DecodeToExecute(XLEN))

    val brTaken = Input(Bool())

    val regWrite = Input(Bool())
    val regWdata = Input(UInt(XLEN.W))
    val regWaddr = Input(UInt(5.W))

    // for simulating
    val ret = Output(Bool())
  })
  val Rf = Module(new RegFile(32))

  val Type       = Wire(UInt(3.W))
  val DecoderOut = Wire(UInt(table.outputWidth.W))

  val in  = io.IF2ID.bits
  val out = io.ID2EX.bits

  DecoderOut := decoder(in.inst, table).asUInt

  Type         := DecoderOut(21, 19)
  out.syscall  := DecoderOut(18)
  out.mret     := DecoderOut(17)
  out.csrRead  := DecoderOut(16) && ~(out.func3(1, 0) === (CsrWrt).U && out.rd === 0.U)
  out.csrWrite := DecoderOut(15) && ~(out.func3(1) && out.rs1 === 0.U)
  out.aluSrc1  := DecoderOut(14, 13)
  out.aluSrc2  := DecoderOut(12, 11)
  out.aluOp    := DecoderOut(10, 7)
  out.jump     := DecoderOut(6)
  out.pcSrc    := DecoderOut(5, 4)
  out.regWrite := DecoderOut(3) || out.csrRead
  out.memRead  := DecoderOut(2)
  out.memWrite := DecoderOut(1)
  out.halt     := DecoderOut(0)
  out.rs1      := in.inst(19, 15)
  out.rs2      := in.inst(24, 20)
  out.func3    := in.inst(14, 12)
  out.rd       := in.inst(11, 7)
  out.pc       := in.pc
  out.inst     := in.inst

  /* RegFile */
  Rf.io.rs1   := out.rs1
  Rf.io.rs2   := out.rs2
  Rf.io.wen   := io.regWrite
  Rf.io.wdata := io.regWdata
  Rf.io.waddr := io.regWaddr
  out.rdata1  := Rf.io.rdata1
  out.rdata2  := Rf.io.rdata2
  io.ret      := Rf.io.ret

  /* Generate immediate operant*/
  val immI = (in.inst(31) ## in.inst(31, 20)).asSInt
  val immS = (in.inst(31) ## in.inst(31, 25) ## in.inst(11, 7)).asSInt
  val immB = (in.inst(31) ## in.inst(7) ## in.inst(30, 25) ## in.inst(11, 8) ## 0.U(1.W)).asSInt
  val immJ = (in.inst(31) ## in.inst(19, 12) ## in.inst(20) ## in.inst(30, 21) ## 0.U(1.W)).asSInt
  val immU = (in.inst(31, 12) ## 0.U(12.W)).asSInt

  out.imm := Mux1H(
    Seq(
      (Type === TypeI.U) -> immI,
      (Type === TypeS.U) -> immS,
      (Type === TypeB.U) -> immB,
      (Type === TypeJ.U) -> immJ,
      (Type === TypeU.U) -> immU
    )
  ).asUInt

  io.IF2ID.ready := io.ID2EX.fire || ~io.inValid
  io.ID2EX.valid := true.B
}
