import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

class DecoderBundle extends Bundle {
  val MemWrite      = Output(Bool())
  val MemRead       = Output(Bool())
  val MemReadSigned = Output(Bool())
  val MemSize       = Output(UInt(2.W))

  val rs1      = Output(UInt(5.W))
  val rs2      = Output(UInt(5.W))
  val rd       = Output(UInt(5.W))
  val RegWrite = Output(Bool())

  val Inst    = Input(UInt(32.W))
  val Imm     = Output(UInt(32.W))
  val AluOp   = Output(UInt(4.W))
  val AluSrc1 = Output(UInt(2.W))
  val AluSrc2 = Output(UInt(2.W))
  val PcSrc   = Output(Bool())

}

object Decoder {
  val AluOpAdd  = "0000"
  val AluOpSub  = "0001"
  val AluOpSlt  = "0010"
  val AluOpSltu = "0011"
  val AluOpXor  = "0100"
  val AluOpOr   = "0101"
  val AluOpAnd  = "0110"
  val AluOpSll  = "1000"
  val AluOpSrl  = "1001"
  val AluOpSra  = "1010"
  val AluOpX    = "????"

  val AluSrc1R1 = "00"
  val AluSrc1PC = "01"
  val AluSrc1x0 = "10"
  val AluSrc1X  = "??"

  val AluSrc2R2  = "00"
  val AluSrc2Imm = "01"
  val AluSrc24   = "10"
  val AluSrc2Rs2 = "11"
  val AluSrc2X   = "??"

  val MemSizeB = "00"
  val MemSizeH = "01"
  val MemSizeW = "10"
  val MemSizeX = "??"

}

class Decoder extends Module {
  val io = IO(new DecoderBundle)

  val LUI   = BitPat("b???????_?????_?????_???_?????_0110111")
  val AUIPC = BitPat("b???????_?????_?????_???_?????_0010111")
  val JAL   = BitPat("b???????_?????_?????_???_?????_1101111")
  val JALR  = BitPat("b???????_?????_?????_000_?????_1100111")
  val BEQ   = BitPat("b???????_?????_?????_000_?????_1100011")
  val BNE   = BitPat("b???????_?????_?????_001_?????_1100011")
  val BLT   = BitPat("b???????_?????_?????_100_?????_1100011")
  val BGE   = BitPat("b???????_?????_?????_101_?????_1100011")
  val BLTU  = BitPat("b???????_?????_?????_110_?????_1100011")
  val BGEU  = BitPat("b???????_?????_?????_111_?????_1100011")
  val LB    = BitPat("b???????_?????_?????_000_?????_0000011")
  val LH    = BitPat("b???????_?????_?????_001_?????_0000011")
  val LW    = BitPat("b???????_?????_?????_010_?????_0000011")
  val LBU   = BitPat("b???????_?????_?????_100_?????_0000011")
  val LHU   = BitPat("b???????_?????_?????_101_?????_0000011")
  val SB    = BitPat("b???????_?????_?????_000_?????_0100011")
  val SH    = BitPat("b???????_?????_?????_001_?????_0100011")
  val SW    = BitPat("b???????_?????_?????_010_?????_0100011")
  val ADDI  = BitPat("b???????_?????_?????_000_?????_0010011")
  val SLTI  = BitPat("b???????_?????_?????_010_?????_0010011")
  val SLTIU = BitPat("b???????_?????_?????_011_?????_0010011")
  val XORI  = BitPat("b???????_?????_?????_100_?????_0010011")
  val ORI   = BitPat("b???????_?????_?????_110_?????_0010011")
  val ANDI  = BitPat("b???????_?????_?????_111_?????_0010011")
  val SLLI  = BitPat("b0000000_?????_?????_001_?????_0010011")
  val SRLI  = BitPat("b0000000_?????_?????_101_?????_0010011")
  val SRAI  = BitPat("b0100000_?????_?????_101_?????_0010011")
  val ADD   = BitPat("b0000000_?????_?????_000_?????_0110011")
  val SUB   = BitPat("b0100000_?????_?????_000_?????_0110011")
  val SLL   = BitPat("b0000000_?????_?????_001_?????_0110011")
  val SLT   = BitPat("b0000000_?????_?????_010_?????_0110011")
  val SLTU  = BitPat("b0000000_?????_?????_011_?????_0110011")
  val XOR   = BitPat("b0000000_?????_?????_100_?????_0110011")
  val SRL   = BitPat("b0000000_?????_?????_101_?????_0110011")
  val SRA   = BitPat("b0100000_?????_?????_101_?????_0110011")
  val OR    = BitPat("b0000000_?????_?????_110_?????_0110011")
  val AND   = BitPat("b0000000_?????_?????_111_?????_0110011")

  val TypeR = "b000";
  val TypeI = "b001";
  val TypeS = "b010";
  val TypeB = "b011";
  val TypeU = "b100";
  val TypeJ = "b101";
  val TypeX = "b???";

  val PcSrcBr  = "0"
  val PcSrcInc = "1"
  val PcSrcX   = "?"

  val RegWriteY = "1"
  val RegWriteN = "0"
  val RegWriteX = "?"

  val MemReadY = "1"
  val MemReadN = "0"
  val MemReadX = "?"

  val MemReadSignedY = "1"
  val MemReadSignedN = "0"
  val MemReadSignedX = "?"

  val MemWriteY = "1"
  val MemWriteN = "0"
  val MemWriteX = "?"

  val table = TruthTable(
    Map(
      LUI -> BitPat(
        TypeU + Decoder.AluSrc1x0 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      AUIPC -> BitPat(
        TypeU + Decoder.AluSrc1PC + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      JAL -> BitPat(
        TypeJ + Decoder.AluSrc1PC + Decoder.AluSrc24 + Decoder.AluOpAdd + PcSrcBr + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      JALR -> BitPat(
        TypeI + Decoder.AluSrc1PC + Decoder.AluSrc24 + Decoder.AluOpAdd + PcSrcBr + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      BEQ -> BitPat(
        TypeB + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSub + PcSrcBr + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      BNE -> BitPat(
        TypeB + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSub + PcSrcBr + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      BLT -> BitPat(
        TypeB + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSlt + PcSrcBr + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      BGE -> BitPat(
        TypeB + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSlt + PcSrcBr + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      BLTU -> BitPat(
        TypeB + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSltu + PcSrcBr + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      BGEU -> BitPat(
        TypeB + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSltu + PcSrcBr + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      LB -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + Decoder.MemSizeB
      ),
      LH -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + Decoder.MemSizeH
      ),
      LW -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + Decoder.MemSizeW
      ),
      LBU -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedN + MemWriteN + Decoder.MemSizeB
      ),
      LHU -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedN + MemWriteN + Decoder.MemSizeH
      ),
      SB -> BitPat(
        TypeS + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + Decoder.MemSizeB
      ),
      SH -> BitPat(
        TypeS + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + Decoder.MemSizeH
      ),
      SW -> BitPat(
        TypeS + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + Decoder.MemSizeW
      ),
      ADDI -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SLTI -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSlt + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SLTIU -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSltu + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      XORI -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpXor + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      ORI -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpOr + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      ANDI -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAnd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SLLI -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSll + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SRLI -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSrl + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SRAI -> BitPat(
        TypeI + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSra + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      ADD -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpAdd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SUB -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSub + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SLL -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSll + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SLT -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSlt + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SLTU -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSltu + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      XOR -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpXor + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SRL -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSrl + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      SRA -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSra + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      OR -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpOr + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      ),
      AND -> BitPat(
        TypeR + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpAnd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
      )
    ),
    BitPat(
      TypeX + Decoder.AluSrc1X + Decoder.AluSrc2X + Decoder.AluOpX + PcSrcX + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX
    )
  )

  val Type       = Wire(UInt(3.W))
  val DecoderOut = Wire(UInt(18.W))

  DecoderOut := decoder(io.Inst, table).asUInt

  Type        := DecoderOut(17, 15)
  io.AluSrc1  := DecoderOut(14, 13)
  io.AluSrc2  := DecoderOut(12, 11)
  io.AluOp    := DecoderOut(10, 7)
  io.PcSrc    := DecoderOut(6)
  io.RegWrite := DecoderOut(5)

  io.MemRead       := DecoderOut(4)
  io.MemReadSigned := DecoderOut(3)
  io.MemWrite      := DecoderOut(2)
  io.MemSize       := DecoderOut(1, 0)

  io.rs1 := io.Inst(19, 15)
  io.rs2 := io.Inst(24, 20)
  io.rd  := io.Inst(11, 7)

  val ImmI = Wire(UInt(32.W))
  val ImmS = Wire(UInt(32.W))
  val ImmB = Wire(UInt(32.W))
  val ImmJ = Wire(UInt(32.W))
  val ImmU = Wire(UInt(32.W))

  ImmI := Fill(20, io.Inst(31)) ## io.Inst(31, 20)
  ImmS := Fill(20, io.Inst(31)) ## io.Inst(31, 25) ## io.Inst(11, 7)
  ImmB := Fill(20, io.Inst(31)) ## io.Inst(7) ## io.Inst(30, 25) ## io.Inst(11, 8) ## 0.U(1.W)
  ImmJ := Fill(12, io.Inst(31)) ## io.Inst(19, 12) ## io.Inst(20) ## io.Inst(30, 21) ## 0.U(1.W)
  ImmU := io.Inst(31, 12) ## 0.U(12.W)

  io.Imm := MuxLookup(
    Type,
    0.U,
    Seq(
      TypeI.asUInt -> ImmI,
      TypeS.asUInt -> ImmS,
      TypeB.asUInt -> ImmB,
      TypeJ.asUInt -> ImmJ,
      TypeU.asUInt -> ImmU
    )
  )

}
