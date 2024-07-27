import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

class Srt2Divider extends Module {
  val io = IO(new Bundle {
    val div      = Input(Bool())
    val signed   = Input(Bool())
    val x        = Input(UInt(32.W))
    val y        = Input(UInt(32.W))
    val res      = Output(UInt(32.W))
    val rem      = Output(UInt(32.W))
    val complete = Output(Bool())
  })

  val idle :: init :: quot :: fix :: done :: Nil = Enum(5)

  val state = RegInit(idle)

  val xAbs =
    RegEnable((Fill(32, io.signed && io.x(31)) ^ io.x) +& (io.x(31) && io.signed).asUInt, state === idle && io.div)
  val yAbs =
    RegEnable((Fill(32, io.signed && io.y(31)) ^ io.y) +& (io.y(31) && io.signed).asUInt, state === idle && io.div)
  val resSign = Wire(Bool())
  val remSign = Wire(Bool())

  resSign := io.x(31) ^ io.y(31)
  remSign := io.x(31)

  val remainder = Reg(UInt(65.W))
  val quotient  = Reg(UInt(32.W))
  val quotientM = Reg(UInt(32.W))
  val count     = Reg(UInt(6.W))

  // shift
  val lzd = Module(new Lzd(false))
  lzd.io.in := Mux(state === init, yAbs, remainder(63, 32) ^ Fill(32, remainder(64)))

  val shsrc = Wire(UInt(65.W))
  val shamt = Wire(UInt(6.W))
  val shout = Wire(UInt(65.W))

  val lzdShamt   = Wire(UInt(6.W))
  val minShamt   = Wire(UInt(6.W))
  val shortShift = remainder(64) ^ remainder(63)

  val finalShift = Wire(Bool())
  val firstShift = RegEnable(shamt, state === init) // record it to recover the remainder

  lzdShamt   := lzd.io.zero.asUInt ## (Fill(5, ~lzd.io.zero).asUInt & lzd.io.out)
  finalShift := (count <= lzdShamt) // all valid bits are 0
  minShamt   := Mux(finalShift, count, lzdShamt)

  shsrc := Mux(state === init, xAbs, remainder)
  shamt := Mux(shortShift, 1.U, minShamt)
  shout := shsrc << shamt

  count := MuxLookup(state, "b100000".U)(
    Seq(
      idle -> "b100000".U,
      quot -> (count +& ~shamt +& 1.U)
    )
  )

  val divi    = Wire(UInt(33.W))
  val divisor = RegEnable(divi, state === init)
  divi := yAbs << lzdShamt

  // add or sub

  val addA   = shout(64, 32)
  val addB   = Fill(33, ~remainder(64)) ^ divisor
  val cin    = ~remainder(64)
  val addOut = addA +& addB +& cin
  val result = Mux(shout(64) ^ shout(63), addOut, shout(64, 32))

  remainder := Mux1H(
    Seq(
      (state === init) -> shout,
      (state === quot) -> result ## remainder(30, 0) ## 1.U(1.W)
    )
  )

  // on-the-fly conversion
  val shiftQuot  = quotient << shamt(4, 0)
  val shiftQuotM = ~(~quotientM << shamt(4, 0))

  quotient := MuxLookup(state, quotient)(
    Seq(
      idle -> 0.U,
      quot -> Mux(
        ~shout(64) || shout(64) && shout(63),
        shiftQuot(31, 1) ## (~shout(64) && shout(63)).asUInt,
        shiftQuotM(31, 1) ## 1.U(1.W)
      )
    )
  )

  quotientM := MuxLookup(state, quotientM)(
    Seq(
      idle -> 0.U,
      quot -> Mux(
        ~shout(64) && shout(63),
        shiftQuot(31, 1) ## 0.U(1.W),
        shiftQuotM(31, 1) ## (~(shout(64) && ~shout(63))).asUInt
      )
    )
  )

  switch(state) {
    is(idle) {
      state := Mux(io.div, init, idle)
    }

    is(init) {
      state := quot
    }

    is(quot) {
      state := Mux(finalShift, fix, quot)
    }

    is(fix) {
      state := done
    }

    is(done) {
      state := idle
    }
  }

  val resAbs = Mux(remainder(64), quotientM, quotient)
  val remAbs = Mux(remainder(64), remainder(63, 32) + divisor(31, 0), remainder(63, 32)) >> firstShift

  val resAbsReg = RegEnable(resAbs, state === fix)
  val remAbsReg = RegEnable(remAbs, state === fix)

  io.res := (Fill(32, resSign && io.signed) ^ resAbsReg) +& (resSign && io.signed).asUInt
  io.rem := (Fill(32, remSign && io.signed) ^ remAbsReg) +& (remSign && io.signed).asUInt

  io.complete := state === done
}

class Lzd(useDecoder: Boolean) extends Module {
  val io = IO(new Bundle {
    val in   = Input(UInt(32.W))
    val out  = Output(UInt(5.W))
    val zero = Output(Bool())
  })

  if (useDecoder) {

    val lzdMap = (for (i <- 0 until 32) yield {
      BitPat("b" + "0" * i + "1" + "?" * (31 - i)) -> BitPat(
        "b" + "0" * (4 - (if (i == 0) 0 else log2Floor(i))) + i.toBinaryString
      )
    }).toMap

    val table = TruthTable(lzdMap, BitPat("b?????"))

    io.zero := ~io.in.orR
    io.out  := decoder(io.in, table)
  } else {

    class Lzd4 extends Module {
      val io = IO(new Bundle {
        val in   = Input(UInt(4.W))
        val out  = Output(UInt(2.W))
        val zero = Output(Bool())
      })

      io.zero := ~io.in.orR

      val outVec = Wire(Vec(2, UInt(1.W)))
      outVec(0) := (io.in(2) || ~io.in(1)) & ~io.in(3)
      outVec(1) := ~(io.in(3) || io.in(2))

      io.out := outVec.asUInt
    }

    val outVec = Wire(Vec(3, UInt(1.W)))
    val z      = Wire(Vec(8, Bool()))
    val out2   = Wire(Vec(8, UInt(2.W)))
    val lzd = for (i <- 0 until 8) yield {
      Module(new Lzd4)
    }

    for (i <- 0 until 8) {
      lzd(i).io.in := io.in(i * 4 + 3, i * 4)

      z(i)    := lzd(i).io.zero
      out2(i) := lzd(i).io.out
    }

    outVec(0) := z(7) && (~z(6) || z(5) && ~z(4) || z(5) && z(3) && ~z(2) || z(5) && z(3) && z(1))
    outVec(1) := z(7) && z(6) && (~z(5) || ~z(4) || z(3) && z(2))
    outVec(2) := z(7) && z(6) && z(5) && z(4)

    io.zero := z.asUInt.andR
    io.out  := outVec.asUInt(2, 0) ## out2(~outVec.asUInt(2, 0))
  }
}
