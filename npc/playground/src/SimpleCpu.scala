import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import Decoder._

class MemoryBundle extends Bundle {
  val MemWrite     = Output(Bool())
  val MemRead      = Output(Bool())
  val MemAddr      = Output(UInt(2.W))
  val MemReadData  = Input(UInt(32.W))
  val MemWriteData = Output(UInt(32.W))
  val MemWriteStrb = Output(UInt(4.W))
}

class FetchBundle extends Bundle {
  val PC   = Output(UInt(32.W))
  val Inst = Input(UInt(32.W))
}

class SimpleCpu extends Module {

  val Halt = IO(Output(Bool()))

  val START_PC      = "h80000000"
  val PcReg         = RegInit(START_PC.U)
  val DecoderModule = Module(new Decoder())
  val RF            = Module(new RegFile)
  val Alu           = Module(new ALU(32))
  val MemoryAccess  = Module(new MemorySim)

  val Fetch = Wire(new FetchBundle)
  // Decoder
  val DecoderBundle = Wire(Flipped(new DecoderBundle))
  DecoderBundle.Inst := Fetch.Inst
  DecoderModule.io <> DecoderBundle

  // PC Module
  val PcNext = Wire(UInt(32.W))
  val PcBr   = Wire(UInt(32.W))
  val PcInc  = Wire(UInt(32.W))

  PcInc := PcReg + 4.U
  PcBr  := PcReg + DecoderBundle.Imm
  PcNext := MuxLookup(
    DecoderBundle.PcSrc,
    PcInc,
    Seq(("b" + PcSrcInc).asUInt -> PcInc, ("b" + PcSrcImm).asUInt -> PcBr, ("b" + PcSrcReg).asUInt -> RF.io.rdata1)
  )
  PcReg    := PcNext
  Fetch.PC := PcReg

  // RegFile
  RF.io.rs1   := DecoderBundle.rs1
  RF.io.rs2   := DecoderBundle.rs2
  RF.io.waddr := DecoderBundle.rd

  // ALU
  val AluOut = Wire(UInt(32.W))
  Alu.io.A := MuxLookup(
    DecoderBundle.AluSrc1,
    0.U,
    Seq(
      ("b" + Decoder.AluSrc1R1).U -> RF.io.rdata1,
      ("b" + Decoder.AluSrc1PC).U -> PcReg,
      ("b" + Decoder.AluSrc1x0).U -> 0.U(32.W)
    )
  );

  Alu.io.B := MuxLookup(
    DecoderBundle.AluSrc2,
    0.U,
    Seq(
      ("b" + Decoder.AluSrc2R2).U -> RF.io.rdata2,
      ("b" + Decoder.AluSrc2Imm).U -> DecoderBundle.Imm,
      ("b" + Decoder.AluSrc24).U -> 4.U(32.W),
      ("b" + Decoder.AluSrc2Rs2).U -> 0.U(27.W) ## DecoderBundle.rs2
    )
  );

  Alu.io.AluOp := DecoderBundle.AluOp
  AluOut       := Alu.io.Result

  // Memory Access

  val Memory = Wire(new MemoryBundle)

  Memory.MemRead      := DecoderBundle.MemRead
  Memory.MemWrite     := DecoderBundle.MemWrite
  Memory.MemAddr      := AluOut
  Memory.MemWriteData := RF.io.rdata2

  val StrbTable = TruthTable(
    Map(
      BitPat("b00" + Decoder.MemSizeB) -> BitPat("b0001"),
      BitPat("b01" + Decoder.MemSizeB) -> BitPat("b0010"),
      BitPat("b10" + Decoder.MemSizeB) -> BitPat("b0100"),
      BitPat("b11" + Decoder.MemSizeB) -> BitPat("b1000"),
      BitPat("b00" + Decoder.MemSizeH) -> BitPat("b0011"),
      BitPat("b01" + Decoder.MemSizeB) -> BitPat("b0110"),
      BitPat("b10" + Decoder.MemSizeB) -> BitPat("b1100"),
      BitPat("b00" + Decoder.MemSizeW) -> BitPat("b1111")
    ),
    BitPat("b????")
  )

  Memory.MemWriteStrb := decoder(AluOut(1, 0) ## DecoderBundle.MemSize, StrbTable)

  MemoryAccess.io.clock := clock
  MemoryAccess.io.reset := reset
  MemoryAccess.io.PC    := Fetch.PC
  Fetch.Inst            := MemoryAccess.io.Inst

  MemoryAccess.io.Address  := Memory.MemAddr
  MemoryAccess.io.MemRead  := Memory.MemRead
  MemoryAccess.io.MemWrite := Memory.MemWrite

  MemoryAccess.io.Wdata := Memory.MemWriteData
  MemoryAccess.io.Wstrb := Memory.MemWriteStrb

  Memory.MemReadData := MemoryAccess.io.ReadData

  // write back
  RF.io.wen   := DecoderBundle.RegWrite
  RF.io.wdata := Mux(Memory.MemRead, Memory.MemReadData, AluOut)

  // Halt
  Halt := DecoderBundle.Halt
}
