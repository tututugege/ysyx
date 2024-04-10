import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import DecodeTable._

class EXU(XLEN: Int) extends Module {
  val io = IO(new Bundle {
    val inValid = Input(Bool())

    val ID2EX  = Flipped(Decoupled(new DecodeToExecute(XLEN)))
    val EX2MEM = Decoupled(new ExecuteToMemory(XLEN))

    val pcBr    = Output(UInt(XLEN.W))
    val brTaken = Output(Bool())

    // forwarding
    val bypassMEM = Input(UInt(XLEN.W))
    val bypassWB  = Input(UInt(XLEN.W))
    val hazard1   = Input(UInt(2.W))
    val hazard2   = Input(UInt(2.W))
    val stall     = Input(Bool())
  })

  val in  = io.ID2EX.bits
  val out = io.EX2MEM.bits
  val Alu = Module(new ALU(XLEN))

  // bypass
  val bypassReg  = Reg(UInt(32.W))
  val hazard1Reg = Reg(Bool())
  val hazard2Reg = Reg(Bool())

  val data1 = Wire(UInt(XLEN.W))
  val data2 = Wire(UInt(XLEN.W))

  bypassReg := Mux(~io.EX2MEM.fire, io.bypassWB, bypassReg)

  hazard1Reg := Mux(io.EX2MEM.fire, false.B, Mux(io.hazard1(1) && ~io.hazard1(0), true.B, hazard1Reg))
  hazard2Reg := Mux(io.EX2MEM.fire, false.B, Mux(io.hazard2(1) && ~io.hazard2(0), true.B, hazard2Reg))

  data1 := MuxCase(
    in.rdata1,
    Seq(
      io.hazard1(0) -> io.bypassMEM,
      (io.hazard1(1) && ~io.hazard1(0)) -> io.bypassWB,
      hazard1Reg -> bypassReg
    )
  )

  data2 := MuxCase(
    in.rdata2,
    Seq(
      io.hazard2(0) -> io.bypassMEM,
      (io.hazard2(1) && ~io.hazard2(0)) -> io.bypassWB,
      hazard2Reg -> bypassReg
    )
  )

  // ALU
  Alu.io.A := MuxLookup(
    in.aluSrc1,
    0.U,
    Seq(
      AluSrc1R1.U -> data1,
      AluSrc1PC.U -> in.pc
    )
  )

  Alu.io.B := Mux1H(
    Seq(
      (in.aluSrc2 === AluSrc2R2.U) -> data2,
      (in.aluSrc2 === AluSrc2I.U) -> in.imm,
      (in.aluSrc2 === AluSrc24.U) -> 4.U,
      (in.aluSrc2 === AluSrc2Rs2.U) -> in.rs2
    )
  )

  Alu.io.AluOp := in.aluOp

  // branch
  val pcBrImm  = in.pc + in.imm // compute branch pc for jal, B-type
  val pcBrReg  = data1 // branch pc for jalr
  val brEnable = RegInit(true.B) // brTaken cannot be asserted more than one cycle when stalling
  val brTaken  = Wire(Bool())

  brEnable := Mux(io.EX2MEM.fire, true.B, ~brTaken)

  val brCondTaken = Mux1H(
    Seq(
      (in.func3(2, 1) === BrCondEq.U) -> (Alu.io.Zero ^ in.func3(0)),
      (in.func3(2, 1) === BrCondGl.U) -> (Alu.io.Result(0) ^ in.func3(0)),
      (in.func3(2, 1) === BrCondGlu.U) -> (Alu.io.Result(0) ^ in.func3(0))
    )
  )
  brTaken    := (brCondTaken || in.jump) && in.pcSrc =/= PcSrcInc.U && io.inValid && ~io.stall
  io.pcBr    := Mux1H(Seq(in.pcSrc(0) -> pcBrImm, in.pcSrc(1) -> pcBrReg))
  io.brTaken := brTaken && brEnable

  out.pc    := in.pc
  out.inst  := in.inst
  out.func3 := in.func3

  out.memWrite := in.memWrite
  out.memRead  := in.memRead

  out.rd       := in.rd
  out.rdata2   := data2
  out.regWrite := in.regWrite
  out.aluOut   := Alu.io.Result

  out.csrWrite := in.csrWrite
  out.csrRead  := in.csrRead

  out.syscall := in.syscall
  out.mret    := in.mret
  out.halt    := in.halt

  io.ID2EX.ready  := io.EX2MEM.fire || ~io.inValid
  io.EX2MEM.valid := ~io.stall
}
