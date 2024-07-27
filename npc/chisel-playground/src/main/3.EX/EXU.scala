import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import DecodeTable._

class EXU(XLEN: Int) extends Module {
  val io = IO(new Bundle {
    val inValid    = Input(Bool())
    val WBoutValid = Input(Bool())

    val ID2EX  = Flipped(Decoupled(new DecodeToExecute(XLEN)))
    val EX2MEM = Decoupled(new ExecuteToMemory(XLEN))

    val pcBr    = Output(UInt(XLEN.W))
    val brTaken = Output(Bool())

    // forwarding
    val bypassMEM = Input(UInt(XLEN.W))
    val bypassWB  = Input(UInt(XLEN.W))
    val bypassLD  = Input(UInt(XLEN.W))
    val hazard1   = Input(UInt(2.W))
    val hazard2   = Input(UInt(2.W))
    val stall     = Input(Bool())
  })

  val in  = io.ID2EX.bits
  val out = io.EX2MEM.bits
  val Alu = Module(new ALU(XLEN))
  val Div = Module(new Srt2Divider)
  val Mul = Module(new Multiplier)

  // bypass
  val bypass1Reg = Reg(UInt(32.W))
  val bypass2Reg = Reg(UInt(32.W))
  val hazard1Reg = Reg(Bool())
  val hazard2Reg = Reg(Bool())

  val data1 = Wire(UInt(XLEN.W))
  val data2 = Wire(UInt(XLEN.W))

  bypass1Reg := Mux(
    ~io.EX2MEM.fire && io.hazard1(1) && io.WBoutValid,
    Mux(io.stall, io.bypassLD, io.bypassWB),
    bypass1Reg
  )

  bypass2Reg := Mux(
    ~io.EX2MEM.fire && io.hazard2(1) && io.WBoutValid,
    Mux(io.stall, io.bypassLD, io.bypassWB),
    bypass2Reg
  )

  hazard1Reg := Mux(
    io.ID2EX.fire,
    false.B,
    Mux(io.hazard1(1) && ~io.hazard1(0) && io.WBoutValid, true.B, hazard1Reg)
  )

  hazard2Reg := Mux(
    io.ID2EX.fire,
    false.B,
    Mux(io.hazard2(1) && ~io.hazard2(0) && io.WBoutValid, true.B, hazard2Reg)
  )

  data1 := MuxCase(
    in.rdata1,
    Seq(
      io.hazard1(0) -> io.bypassMEM,
      (io.hazard1(1) && ~io.hazard1(0)) -> io.bypassWB,
      hazard1Reg -> bypass1Reg
    )
  )

  data2 := MuxCase(
    in.rdata2,
    Seq(
      io.hazard2(0) -> io.bypassMEM,
      (io.hazard2(1) && ~io.hazard2(0)) -> io.bypassWB,
      hazard2Reg -> bypass2Reg
    )
  )

  // ALU
  Alu.io.A := MuxLookup(in.aluSrc1, 0.U)(
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

  // Divider
  Div.io.div    := (in.aluOp === AluOpDiv.U) && io.inValid && ~io.stall
  Div.io.signed := ~in.func3(0)
  Div.io.x      := data1
  Div.io.y      := data2

  val divCompelete = Div.io.complete || ~Div.io.div

  val divRes = Mux(in.func3(1), Div.io.rem, Div.io.res)

  // Multiplier
  Mul.io.x       := data1
  Mul.io.xSigned := ~(in.func3(1, 0).andR)
  Mul.io.y       := data2
  Mul.io.ySigned := ~in.func3(1)
  Mul.io.y       := data2

  val mulRes = Mux(in.func3(1, 0).orR, Mul.io.res(63, 32), Mul.io.res(31, 0))

  // branch
  val brSrc1  = Mux1H(Seq(in.pcSrc(0) -> in.pc, in.pcSrc(1) -> data1))
  val pcBrImm = brSrc1 + in.imm // compute branch pc for jal, B-type
  val pcBrReg = pcBrImm(31, 1) ## 0.U(1.W) // branch pc for jalr

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

  out.aluOut := MuxLookup(in.aluOp, Alu.io.Result)(
    Seq(
      AluOpMul.U -> mulRes,
      AluOpDiv.U -> divRes
    )
  )

  out.csrAddr  := in.imm
  out.csrWrite := in.csrWrite
  out.csrWdata := Mux(in.func3(2), in.rs1, data1)
  out.csrRead  := in.csrRead

  out.syscall := in.syscall
  out.mret    := in.mret
  out.halt    := in.halt

  io.ID2EX.ready  := io.EX2MEM.fire || ~io.inValid
  io.EX2MEM.valid := ~io.stall && divCompelete
}
