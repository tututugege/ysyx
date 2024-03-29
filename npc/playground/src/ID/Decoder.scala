import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import Decoder._

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
  val PcSrc   = Output(UInt(2.W))
  val BrCond  = Output(UInt(2.W))
  val Halt    = Output(Bool())

  // CSR
  val CsrWtype = Output(UInt(2.W))
  val CsrRead  = Output(Bool())
  val CsrImm   = Output(Bool())

  // Exception
  val Syscall = Output(Bool())
  val Mret    = Output(Bool())

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

  val PcSrcInc = "00"
  val PcSrcImm = "01"
  val PcSrcReg = "10"
  val PcSrcX   = "??"

  val BrCondEq  = "00"
  val BrCondGl  = "01"
  val BrCondGlu = "10"
  val BrCondJ   = "11"
  val BrCondX   = "??"
}

class Decoder extends Module {
  val io = IO(new DecoderBundle)

  val LUI    = BitPat("b???????_?????_?????_???_?????_0110111")
  val AUIPC  = BitPat("b???????_?????_?????_???_?????_0010111")
  val JAL    = BitPat("b???????_?????_?????_???_?????_1101111")
  val JALR   = BitPat("b???????_?????_?????_000_?????_1100111")
  val BEQ    = BitPat("b???????_?????_?????_000_?????_1100011")
  val BNE    = BitPat("b???????_?????_?????_001_?????_1100011")
  val BLT    = BitPat("b???????_?????_?????_100_?????_1100011")
  val BGE    = BitPat("b???????_?????_?????_101_?????_1100011")
  val BLTU   = BitPat("b???????_?????_?????_110_?????_1100011")
  val BGEU   = BitPat("b???????_?????_?????_111_?????_1100011")
  val LB     = BitPat("b???????_?????_?????_000_?????_0000011")
  val LH     = BitPat("b???????_?????_?????_001_?????_0000011")
  val LW     = BitPat("b???????_?????_?????_010_?????_0000011")
  val LBU    = BitPat("b???????_?????_?????_100_?????_0000011")
  val LHU    = BitPat("b???????_?????_?????_101_?????_0000011")
  val SB     = BitPat("b???????_?????_?????_000_?????_0100011")
  val SH     = BitPat("b???????_?????_?????_001_?????_0100011")
  val SW     = BitPat("b???????_?????_?????_010_?????_0100011")
  val ADDI   = BitPat("b???????_?????_?????_000_?????_0010011")
  val SLTI   = BitPat("b???????_?????_?????_010_?????_0010011")
  val SLTIU  = BitPat("b???????_?????_?????_011_?????_0010011")
  val XORI   = BitPat("b???????_?????_?????_100_?????_0010011")
  val ORI    = BitPat("b???????_?????_?????_110_?????_0010011")
  val ANDI   = BitPat("b???????_?????_?????_111_?????_0010011")
  val SLLI   = BitPat("b0000000_?????_?????_001_?????_0010011")
  val SRLI   = BitPat("b0000000_?????_?????_101_?????_0010011")
  val SRAI   = BitPat("b0100000_?????_?????_101_?????_0010011")
  val ADD    = BitPat("b0000000_?????_?????_000_?????_0110011")
  val SUB    = BitPat("b0100000_?????_?????_000_?????_0110011")
  val SLL    = BitPat("b0000000_?????_?????_001_?????_0110011")
  val SLT    = BitPat("b0000000_?????_?????_010_?????_0110011")
  val SLTU   = BitPat("b0000000_?????_?????_011_?????_0110011")
  val XOR    = BitPat("b0000000_?????_?????_100_?????_0110011")
  val SRL    = BitPat("b0000000_?????_?????_101_?????_0110011")
  val SRA    = BitPat("b0100000_?????_?????_101_?????_0110011")
  val OR     = BitPat("b0000000_?????_?????_110_?????_0110011")
  val AND    = BitPat("b0000000_?????_?????_111_?????_0110011")
  val EBREAK = BitPat("b0000000_00001_00000_000_00000_1110011")
  val ECALL  = BitPat("b0000000_00000_00000_000_00000_1110011")
  val MRET   = BitPat("b0011000_00010_00000_000_00000_1110011")
  val CSRRW  = BitPat("b???????_?????_?????_001_?????_1110011")
  val CSRRS  = BitPat("b???????_?????_?????_010_?????_1110011")
  val CSRRC  = BitPat("b???????_?????_?????_011_?????_1110011")
  val CSRRWI = BitPat("b???????_?????_?????_101_?????_1110011")
  val CSRRSI = BitPat("b???????_?????_?????_110_?????_1110011")
  val CSRRCI = BitPat("b???????_?????_?????_111_?????_1110011")

  val TypeR = "b000";
  val TypeI = "b001";
  val TypeS = "b010";
  val TypeB = "b011";
  val TypeU = "b100";
  val TypeJ = "b101";
  val TypeX = "b???";

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

  val HaltY = "1"
  val HaltN = "0"

  val SyscallY = "1"
  val SyscallN = "0"

  val MretY = "1"
  val MretN = "0"

  val CsrWriteN = "00"
  val CsrWrite  = "01"
  val CsrClear  = "10"
  val CsrSet    = "11"

  val CsrImmY = "1"
  val CsrImmN = "0"
  val CsrImmX = "?"

  val CsrReadY = "1"
  val CsrReadN = "0"

  val table = TruthTable(
    Map(
      LUI -> BitPat(
        TypeU + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1x0 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      AUIPC -> BitPat(
        TypeU + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1PC + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      JAL -> BitPat(
        TypeJ + SyscallN + MretN + BrCondJ + CsrReadN + CsrWriteN + CsrImmX + AluSrc1PC + AluSrc24 + AluOpAdd + PcSrcImm + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      JALR -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1PC + AluSrc24 + AluOpAdd + PcSrcReg + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      BEQ -> BitPat(
        TypeB + SyscallN + MretN + BrCondEq + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSub + PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      BNE -> BitPat(
        TypeB + SyscallN + MretN + BrCondEq + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSub + PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      BLT -> BitPat(
        TypeB + SyscallN + MretN + BrCondGl + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSlt + PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      BGE -> BitPat(
        TypeB + SyscallN + MretN + BrCondGl + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSlt + PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      BLTU -> BitPat(
        TypeB + SyscallN + MretN + BrCondGlu + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSltu + PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      BGEU -> BitPat(
        TypeB + SyscallN + MretN + BrCondGlu + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSltu + PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      LB -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + AluSrc1R1 + AluSrc2Imm + CsrImmX + AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + MemSizeB + HaltN
      ),
      LH -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + MemSizeH + HaltN
      ),
      LW -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + MemSizeW + HaltN
      ),
      LBU -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedN + MemWriteN + MemSizeB + HaltN
      ),
      LHU -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteY + MemReadY + MemReadSignedN + MemWriteN + MemSizeH + HaltN
      ),
      SB -> BitPat(
        TypeS + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + MemSizeB + HaltN
      ),
      SH -> BitPat(
        TypeS + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + MemSizeH + HaltN
      ),
      SW -> BitPat(
        TypeS + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + MemSizeW + HaltN
      ),
      ADDI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAdd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SLTI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpSlt + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SLTIU -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpSltu + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      XORI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpXor + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      ORI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpOr + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      ANDI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpAnd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SLLI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpSll + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SRLI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpSrl + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SRAI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2Imm + AluOpSra + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      ADD -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpAdd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SUB -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSub + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SLL -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSll + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SLT -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSlt + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SLTU -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSltu + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      XOR -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpXor + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SRL -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSrl + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      SRA -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpSra + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      OR -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpOr + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      AND -> BitPat(
        TypeR + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1R1 + AluSrc2R2 + AluOpAnd + PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      EBREAK -> BitPat(
        TypeX + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1X + AluSrc2X + AluOpX + PcSrcX + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltY
      ),
      ECALL -> BitPat(
        TypeX + SyscallY + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1X + AluSrc2X + AluOpX + PcSrcX + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      MRET -> BitPat(
        TypeX + SyscallN + MretY + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1X + AluSrc2X + AluOpX + PcSrcX + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      CSRRW -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadY + CsrWrite + CsrImmN + AluSrc1X + AluSrc2X + AluOpX + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      CSRRS -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadY + CsrSet + CsrImmN + AluSrc1X + AluSrc2X + AluOpX + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      CSRRC -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadY + CsrClear + CsrImmN + AluSrc1X + AluSrc2X + AluOpX + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      CSRRWI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadY + CsrWrite + CsrImmY + AluSrc1X + AluSrc2X + AluOpX + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      CSRRSI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadY + CsrSet + CsrImmY + AluSrc1X + AluSrc2X + AluOpX + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      ),
      CSRRCI -> BitPat(
        TypeI + SyscallN + MretN + BrCondX + CsrReadY + CsrClear + CsrImmY + AluSrc1X + AluSrc2X + AluOpX + PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
      )
    ),
    BitPat(
      TypeX + SyscallN + MretN + BrCondX + CsrReadN + CsrWriteN + CsrImmX + AluSrc1X + AluSrc2X + AluOpX + PcSrcX + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + MemSizeX + HaltN
    )
  )

  val Type       = Wire(UInt(3.W))
  val DecoderOut = Wire(UInt(28.W))

  DecoderOut := decoder(io.Inst, table).asUInt

  Type        := DecoderOut(27, 25)
  io.Syscall  := DecoderOut(24)
  io.Mret     := DecoderOut(23)
  io.BrCond   := DecoderOut(22, 21)
  io.CsrRead  := DecoderOut(20) && ~(io.CsrWtype === ("b" + CsrWrite).U && io.rd === 0.U)
  io.CsrWtype := DecoderOut(19, 18) & Fill(2, ~(DecoderOut(19) && io.rs1 === 0.U))
  io.CsrImm   := DecoderOut(17)
  io.AluSrc1  := DecoderOut(16, 15)
  io.AluSrc2  := DecoderOut(14, 13)
  io.AluOp    := DecoderOut(12, 9)
  io.PcSrc    := DecoderOut(8, 7)
  io.RegWrite := DecoderOut(6) || io.CsrRead

  io.MemRead       := DecoderOut(5)
  io.MemReadSigned := DecoderOut(4)
  io.MemWrite      := DecoderOut(3)
  io.MemSize       := DecoderOut(2, 1)

  io.Halt := DecoderOut(0)

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
