import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

object DecodeTable {
  val AluOpAdd  = "b0000"
  val AluOpSub  = "b0001"
  val AluOpSlt  = "b0010"
  val AluOpSltu = "b0011"
  val AluOpXor  = "b0100"
  val AluOpOr   = "b0101"
  val AluOpAnd  = "b0110"
  val AluOpSll  = "b1000"
  val AluOpSrl  = "b1001"
  val AluOpSra  = "b1010"
  val AluOpMul  = "b1011"
  val AluOpDiv  = "b1100"
  val AluOpXXX  = "b????"

  val AluSrc1R1 = "b00"
  val AluSrc1PC = "b01"
  val AluSrc1x0 = "b10"
  val AluSrc1XX = "b??"

  val AluSrc2R2  = "b00"
  val AluSrc2I   = "b01"
  val AluSrc24   = "b10"
  val AluSrc2Rs2 = "b11"
  val AluSrc2X   = "b??"

  val MemSizeB = "b00"
  val MemSizeH = "b01"
  val MemSizeW = "b10"
  val MemSizeX = "b??"

  val PcSrcInc = "b00"
  val PcSrcImm = "b01"
  val PcSrcReg = "b10"
  val PcSrcXXX = "b??"

  val BrCondEq  = "b00"
  val BrCondGl  = "b10"
  val BrCondGlu = "b11"
  val BrCondX   = "b??"

  val TypeR = "b000";
  val TypeI = "b001";
  val TypeS = "b010";
  val TypeB = "b011";
  val TypeU = "b100";
  val TypeJ = "b101";
  val TypeX = "b???";

  val Y = "b1"
  val N = "b0"
  val X = "b?"

  val CsrWrt = "b01"
  val CsrSet = "b10"
  val CsrClr = "b11"

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
  val MUL    = BitPat("b0000001_?????_?????_0??_?????_0110011")
  val DIV    = BitPat("b0000001_?????_?????_1??_?????_0110011")

  val table = TruthTable(
    Map(
      //                 |mret|                                                           MemRead
      //                   |                                                               |
      //     type| syscall||CsrRead|      AluSrc1   | AluSrc2  | AluOp|     N + PcSrc |RegWrite||MemWrite|
      //       |      |    |   |           |           |          |      Jump |       |    |   |  Halt
      //       |      |    |   |CsrWrite   |           |          |      |    |       |    |   |   |
      LUI -> BitPat( //    |   |   |       |           |          |      |    |       |    |   |   |
        "b" + (TypeU + N + N + N + N + AluSrc1x0 + AluSrc2I + AluOpAdd + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      AUIPC -> BitPat(
        "b" + (TypeU + N + N + N + N + AluSrc1PC + AluSrc2I + AluOpAdd + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      JAL -> BitPat(
        "b" + (TypeJ + N + N + N + N + AluSrc1PC + AluSrc24 + AluOpAdd + Y + PcSrcImm + Y + N + N + N)
          .filter(_ != 'b')
      ),
      JALR -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1PC + AluSrc24 + AluOpAdd + Y + PcSrcReg + Y + N + N + N)
          .filter(_ != 'b')
      ),
      BEQ -> BitPat(
        "b" + (TypeB + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSub + N + PcSrcImm + N + N + N + N)
          .filter(_ != 'b')
      ),
      BNE -> BitPat(
        "b" + (TypeB + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSub + N + PcSrcImm + N + N + N + N)
          .filter(_ != 'b')
      ),
      BLT -> BitPat(
        "b" + (TypeB + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSlt + N + PcSrcImm + N + N + N + N)
          .filter(_ != 'b')
      ),
      BGE -> BitPat(
        "b" + (TypeB + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSlt + N + PcSrcImm + N + N + N + N)
          .filter(_ != 'b')
      ),
      BLTU -> BitPat(
        "b" + (TypeB + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSltu + N + PcSrcImm + N + N + N + N)
          .filter(_ != 'b')
      ),
      BGEU -> BitPat(
        "b" + (TypeB + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSltu + N + PcSrcImm + N + N + N + N)
          .filter(_ != 'b')
      ),
      LB -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + Y + Y + N + N)
          .filter(_ != 'b')
      ),
      LH -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + Y + Y + N + N)
          .filter(_ != 'b')
      ),
      LW -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + Y + Y + N + N)
          .filter(_ != 'b')
      ),
      LBU -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + Y + Y + N + N)
          .filter(_ != 'b')
      ),
      LHU -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + Y + Y + N + N)
          .filter(_ != 'b')
      ),
      SB -> BitPat(
        "b" + (TypeS + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + N + N + Y + N)
          .filter(_ != 'b')
      ),
      SH -> BitPat(
        "b" + (TypeS + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + N + N + Y + N)
          .filter(_ != 'b')
      ),
      SW -> BitPat(
        "b" + (TypeS + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + N + N + Y + N)
          .filter(_ != 'b')
      ),
      ADDI -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAdd + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SLTI -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpSlt + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SLTIU -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpSltu + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      XORI -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpXor + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      ORI -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpOr + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      ANDI -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpAnd + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SLLI -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpSll + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SRLI -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpSrl + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SRAI -> BitPat(
        "b" + (TypeI + N + N + N + N + AluSrc1R1 + AluSrc2I + AluOpSra + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      ADD -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpAdd + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SUB -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSub + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SLL -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSll + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SLT -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSlt + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SLTU -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSltu + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      XOR -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpXor + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SRL -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSrl + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      SRA -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpSra + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      OR -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpOr + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      AND -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpAnd + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      EBREAK -> BitPat(
        "b" + (TypeX + N + N + N + N + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcXXX + N + N + N + Y)
          .filter(_ != 'b')
      ),
      ECALL -> BitPat(
        "b" + (TypeX + Y + N + N + N + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcXXX + N + N + N + N)
          .filter(_ != 'b')
      ),
      MRET -> BitPat(
        "b" + (TypeX + N + Y + N + N + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcXXX + N + N + N + N)
          .filter(_ != 'b')
      ),
      CSRRW -> BitPat(
        "b" + (TypeI + N + N + Y + Y + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcInc + N + N + N + N)
          .filter(_ != 'b')
      ),
      CSRRS -> BitPat(
        "b" + (TypeI + N + N + Y + Y + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcInc + N + N + N + N)
          .filter(_ != 'b')
      ),
      CSRRC -> BitPat(
        "b" + (TypeI + N + N + Y + Y + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcInc + N + N + N + N)
          .filter(_ != 'b')
      ),
      CSRRWI -> BitPat(
        "b" + (TypeI + N + N + Y + Y + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcInc + N + N + N + N)
          .filter(_ != 'b')
      ),
      CSRRSI -> BitPat(
        "b" + (TypeI + N + N + Y + Y + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcInc + N + N + N + N)
          .filter(_ != 'b')
      ),
      CSRRCI -> BitPat(
        "b" + (TypeI + N + N + Y + Y + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcInc + N + N + N + N)
          .filter(_ != 'b')
      ),
      MUL -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpMul + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      ),
      DIV -> BitPat(
        "b" + (TypeR + N + N + N + N + AluSrc1R1 + AluSrc2R2 + AluOpDiv + N + PcSrcInc + Y + N + N + N)
          .filter(_ != 'b')
      )
    ),
    BitPat(
      "b" + (TypeX + N + N + N + N + AluSrc1XX + AluSrc2X + AluOpXXX + N + PcSrcXXX + N + N + N + N)
        .filter(_ != 'b')
    )
  )
}
