import chisel3._
import chisel3.util._

object StageConnect {
  def apply[T <: Data](left: DecoupledIO[T], right: DecoupledIO[T], valid: Bool) = {
    right.valid := left.valid
    left.ready  := right.ready
    right.bits <> RegEnable(left.bits, left.fire && valid)
  }
}

// class PreToFetch(XLEN: Int) extends Bundle {
//   val bubbleN = Bool()
// }

class FetchToDecode(XLEN: Int) extends Bundle {
  val pc   = UInt(XLEN.W)
  val inst = UInt(32.W)
}

class DecodeToExecute(XLEN: Int) extends Bundle {
  val pc   = UInt(XLEN.W)
  val inst = UInt(32.W)

  // func3
  val func3 = UInt(3.W)

  // Memory
  val memWrite = Bool()
  val memRead  = Bool()

  // RegFile
  val rs1      = UInt(5.W)
  val rs2      = UInt(5.W)
  val rd       = UInt(5.W)
  val rdata1   = UInt(XLEN.W)
  val rdata2   = UInt(XLEN.W)
  val regWrite = Bool()

  // operant
  val imm     = UInt(XLEN.W)
  val aluOp   = UInt(4.W)
  val aluSrc1 = UInt(2.W)
  val aluSrc2 = UInt(2.W)

  // branch
  val pcSrc = UInt(2.W)
  val jump  = Bool()

  // CSR
  val csrWrite = Bool()
  val csrRead  = Bool()

  // Exception
  val syscall = Bool()
  val mret    = Bool()
  val halt    = Bool()

}

class ExecuteToMemory(XLEN: Int) extends Bundle {
  val pc   = UInt(XLEN.W)
  val inst = UInt(32.W)

  // func3
  val func3 = UInt(3.W)

  // Memory
  val memWrite = Bool()
  val memRead  = Bool()

  // RegFile
  val rd       = UInt(5.W)
  val rdata2   = UInt(XLEN.W)
  val regWrite = Bool()
  val aluOut   = UInt(XLEN.W)

  // CSR
  val csrWrite = Bool()
  val csrRead  = Bool()

  // Exception
  val syscall = Bool()
  val mret    = Bool()
  val halt    = Bool()
}

class MemoryToWrite(XLEN: Int) extends Bundle {
  val pc   = UInt(XLEN.W)
  val inst = UInt(32.W)

  // func3
  val func3 = UInt(3.W)

  // Memory
  val memRead  = Bool()
  val memWrite = Bool()

  // RegFile
  val rd       = UInt(5.W)
  val regWrite = Bool()
  val aluOut   = UInt(XLEN.W)

  // CSR
  val csrWrite = Bool()
  val csrRead  = Bool()

  // Exception
  val syscall = Bool()
  val mret    = Bool()
  val halt    = Bool()

}

class WriteBack(XLEN: Int) extends Bundle {
  val pc   = UInt(XLEN.W)
  val inst = UInt(32.W)

  // RegFile
  val rd       = UInt(5.W)
  val regWrite = Bool()
  val regWdata = UInt(XLEN.W)

  // CSR
  val csrWrite = Bool()
  val csrWdata = UInt(XLEN.W)
  val csrRead  = Bool()

  // Exception
  val syscall = Bool()
  val mret    = Bool()
  val halt    = Bool()

}
