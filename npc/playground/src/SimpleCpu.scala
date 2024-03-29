import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import Decoder._
import SimpleCpu._

class FetchBundle extends Bundle {
  val PC   = Output(UInt(32.W))
  val Inst = Input(UInt(32.W))
}

object SimpleCpu {
  val START_PC = "h80000000"

  object ExceptionCode {
    val EcallM = 11
  }
}

class SimpleCpu extends Module {

  val Halt = IO(Output(Bool()))

  val PcReg         = RegInit(START_PC.U)
  val DecoderModule = Module(new Decoder())
  val RF            = Module(new RegFile(32))
  val Alu           = Module(new ALU(32))
  val MemoryAccess  = Module(new MemorySim)
  val Csr           = Module(new CsrRegister)

  val Fetch     = Wire(new FetchBundle)
  val CsrIO     = Wire(Flipped(new CsrBundle))
  val DecoderIO = Wire(Flipped(new DecoderBundle))

  // Decoder
  DecoderIO.Inst := Fetch.Inst
  DecoderModule.io <> DecoderIO

  // PC Module
  val PcNext   = Wire(UInt(32.W))
  val PcNormal = Wire(UInt(32.W))
  val PcBr     = Wire(UInt(32.W))
  val PcImm    = Wire(UInt(32.W))
  val PcInc    = Wire(UInt(32.W))
  val BrTaken  = Wire(Bool())
  val BrCond   = Wire(Bool())
  val BrReg    = Wire(Bool())
  val BrImm    = Wire(Bool())

  BrReg    := (DecoderIO.PcSrc === ("b" + PcSrcReg).asUInt)
  BrImm    := (DecoderIO.PcSrc === ("b" + PcSrcImm).asUInt)
  PcInc    := PcReg + 4.U
  PcImm    := PcReg + DecoderIO.Imm
  PcBr     := Mux(BrReg, RF.io.rdata1, PcImm)
  PcNormal := Mux(BrTaken, PcBr, PcInc)
  PcNext := MuxCase(
    0.U,
    Seq(
      DecoderIO.Syscall -> CsrIO.mtvecRdata,
      DecoderIO.Mret -> CsrIO.mepcRdata,
      (!DecoderIO.Mret && !DecoderIO.Syscall) -> PcNormal
    )
  )
  PcReg    := PcNext
  Fetch.PC := PcReg
  BrCond := MuxLookup(
    DecoderIO.BrCond,
    false.B,
    Seq(
      ("b" + BrCondEq).U -> (Alu.io.Zero ^ Fetch.Inst(12)),
      ("b" + BrCondGl).U -> (Alu.io.Result(0) ^ Fetch.Inst(12)),
      ("b" + BrCondGlu).U -> (Alu.io.Result(0) ^ Fetch.Inst(12)),
      ("b" + BrCondJ).U -> true.B
    )
  )
  BrTaken := BrCond && BrImm || BrReg

  // RegFile
  RF.io.rs1   := DecoderIO.rs1
  RF.io.rs2   := DecoderIO.rs2
  RF.io.waddr := DecoderIO.rd

  // ALU
  val AluOut = Wire(UInt(32.W))
  Alu.io.A := MuxLookup(
    DecoderIO.AluSrc1,
    0.U,
    Seq(
      ("b" + Decoder.AluSrc1R1).U -> RF.io.rdata1,
      ("b" + Decoder.AluSrc1PC).U -> PcReg,
      ("b" + Decoder.AluSrc1x0).U -> 0.U(32.W)
    )
  );

  Alu.io.B := MuxLookup(
    DecoderIO.AluSrc2,
    0.U,
    Seq(
      ("b" + Decoder.AluSrc2R2).U -> RF.io.rdata2,
      ("b" + Decoder.AluSrc2Imm).U -> DecoderIO.Imm,
      ("b" + Decoder.AluSrc24).U -> 4.U(32.W),
      ("b" + Decoder.AluSrc2Rs2).U -> 0.U(27.W) ## DecoderIO.rs2
    )
  );

  Alu.io.AluOp := DecoderIO.AluOp
  AluOut       := Alu.io.Result

  // Memory Access

  val StrbTable = TruthTable(
    Map(
      BitPat("b00" + Decoder.MemSizeB) -> BitPat("b0001"),
      BitPat("b01" + Decoder.MemSizeB) -> BitPat("b0010"),
      BitPat("b10" + Decoder.MemSizeB) -> BitPat("b0100"),
      BitPat("b11" + Decoder.MemSizeB) -> BitPat("b1000"),
      BitPat("b00" + Decoder.MemSizeH) -> BitPat("b0011"),
      BitPat("b01" + Decoder.MemSizeH) -> BitPat("b0110"),
      BitPat("b10" + Decoder.MemSizeH) -> BitPat("b1100"),
      BitPat("b00" + Decoder.MemSizeW) -> BitPat("b1111")
    ),
    BitPat("b????")
  )

  MemoryAccess.io.clock := clock
  MemoryAccess.io.reset := reset
  Fetch.Inst            := MemoryAccess.io.Inst

  MemoryAccess.io.PC            := Fetch.PC
  MemoryAccess.io.Address       := AluOut
  MemoryAccess.io.MemRead       := DecoderIO.MemRead && !reset.asBool
  MemoryAccess.io.MemReadSigned := DecoderIO.MemReadSigned
  MemoryAccess.io.MemWrite      := DecoderIO.MemWrite && !reset.asBool
  MemoryAccess.io.MemSize       := DecoderIO.MemSize

  MemoryAccess.io.Wdata := RF.io.rdata2
  MemoryAccess.io.Wstrb := decoder(AluOut(1, 0) ## DecoderIO.MemSize, StrbTable)

  // CSR
  val CsrData = Wire(UInt(32.W))

  CsrData := Mux(DecoderIO.CsrImm, DecoderIO.rs1, RF.io.rdata1)
  Csr.io <> CsrIO

  CsrIO.CsrAddr := DecoderIO.Imm
  CsrIO.Wdata := MuxLookup(
    DecoderIO.CsrWtype,
    0.U,
    Seq(
      "b01".U -> CsrData,
      "b10".U -> "hffffffff".U(32.W), // set
      "b11".U -> 0.U(32.W)
    )
  ) //clear

  CsrIO.Wen       := DecoderIO.CsrWtype.orR
  CsrIO.Wmask     := Mux(DecoderIO.CsrWtype(1), CsrData, Fill(32, 1.U(1.W)))
  CsrIO.Exception := DecoderIO.Syscall
  CsrIO.Cause     := ExceptionCode.EcallM.U
  CsrIO.Pc        := PcReg

  // write back
  RF.io.wen   := DecoderIO.RegWrite
  RF.io.wdata := Mux(DecoderIO.MemRead, MemoryAccess.io.ReadData, Mux(DecoderIO.CsrRead, CsrIO.Rdata, AluOut))

  // Halt
  Halt := DecoderIO.Halt
}
