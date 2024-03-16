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
  val PcSrc   = Output(UInt(2.W))
  val BrCond  = Output(UInt(2.W))
  val Halt    = Output(Bool())
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

  val table = TruthTable(
    Map(
      LUI -> BitPat(
        TypeU + Decoder.BrCondX + Decoder.AluSrc1x0 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      AUIPC -> BitPat(
        TypeU + Decoder.BrCondX + Decoder.AluSrc1PC + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      JAL -> BitPat(
        TypeJ + Decoder.BrCondJ + Decoder.AluSrc1PC + Decoder.AluSrc24 + Decoder.AluOpAdd + Decoder.PcSrcImm + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      JALR -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1PC + Decoder.AluSrc24 + Decoder.AluOpAdd + Decoder.PcSrcReg + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      BEQ -> BitPat(
        TypeB + Decoder.BrCondEq + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSub + Decoder.PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      BNE -> BitPat(
        TypeB + Decoder.BrCondEq + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSub + Decoder.PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      BLT -> BitPat(
        TypeB + Decoder.BrCondGl + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSlt + Decoder.PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      BGE -> BitPat(
        TypeB + Decoder.BrCondGl + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSlt + Decoder.PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      BLTU -> BitPat(
        TypeB + Decoder.BrCondGlu + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSltu + Decoder.PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      BGEU -> BitPat(
        TypeB + Decoder.BrCondGlu + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSltu + Decoder.PcSrcImm + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      LB -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + Decoder.MemSizeB + HaltN
      ),
      LH -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + Decoder.MemSizeH + HaltN
      ),
      LW -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadY + MemReadSignedY + MemWriteN + Decoder.MemSizeW + HaltN
      ),
      LBU -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadY + MemReadSignedN + MemWriteN + Decoder.MemSizeB + HaltN
      ),
      LHU -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadY + MemReadSignedN + MemWriteN + Decoder.MemSizeH + HaltN
      ),
      SB -> BitPat(
        TypeS + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + Decoder.MemSizeB + HaltN
      ),
      SH -> BitPat(
        TypeS + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + Decoder.MemSizeH + HaltN
      ),
      SW -> BitPat(
        TypeS + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteN + MemReadN + MemReadSignedX + MemWriteY + Decoder.MemSizeW + HaltN
      ),
      ADDI -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SLTI -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSlt + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SLTIU -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSltu + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      XORI -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpXor + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      ORI -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpOr + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      ANDI -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpAnd + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SLLI -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSll + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SRLI -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSrl + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SRAI -> BitPat(
        TypeI + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2Imm + Decoder.AluOpSra + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      ADD -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpAdd + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SUB -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSub + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SLL -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSll + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SLT -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSlt + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SLTU -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSltu + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      XOR -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpXor + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SRL -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSrl + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      SRA -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpSra + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      OR -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpOr + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      AND -> BitPat(
        TypeR + Decoder.BrCondX + Decoder.AluSrc1R1 + Decoder.AluSrc2R2 + Decoder.AluOpAnd + Decoder.PcSrcInc + RegWriteY + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
      ),
      EBREAK -> BitPat(
        TypeX + Decoder.BrCondX + Decoder.AluSrc1X + Decoder.AluSrc2X + Decoder.AluOpX + Decoder.PcSrcX + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltY
      )
    ),
    BitPat(
      TypeX + Decoder.BrCondX + Decoder.AluSrc1X + Decoder.AluSrc2X + Decoder.AluOpX + Decoder.PcSrcX + RegWriteN + MemReadN + MemReadSignedX + MemWriteN + Decoder.MemSizeX + HaltN
    )
  )

  val Type       = Wire(UInt(3.W))
  val DecoderOut = Wire(UInt(22.W))

  DecoderOut := decoder(io.Inst, table).asUInt

  Type        := DecoderOut(21, 19)
  io.BrCond   := DecoderOut(18, 17)
  io.AluSrc1  := DecoderOut(16, 15)
  io.AluSrc2  := DecoderOut(14, 13)
  io.AluOp    := DecoderOut(12, 9)
  io.PcSrc    := DecoderOut(8, 7)
  io.RegWrite := DecoderOut(6)

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
