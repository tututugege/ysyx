import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import dataclass.since
import java.awt.MouseInfo

class FullAdder extends Module {
  val io = IO(new Bundle {
    val in  = Input(UInt(3.W))
    val out = Output(UInt(2.W))
  })

  io.out := io.in(0) +& io.in(1) +& io.in(2)
}

class HalfAdder extends Module {
  val io = IO(new Bundle {
    val in  = Input(UInt(2.W))
    val out = Output(UInt(2.W))
  })
  io.out := io.in(0) +& io.in(1)
}

class Compresser42 extends Module {
  val io = IO(new Bundle {
    val in  = Input(UInt(5.W))
    val out = Output(UInt(3.W))
  })

  val c32_1 = Module(new FullAdder)
  val c32_2 = Module(new FullAdder)
  c32_1.io.in := io.in(2, 0)
  c32_2.io.in := c32_1.io.out(0) ## io.in(4, 3)

  io.out := c32_2.io.out(1) ## c32_1.io.out(1) ## c32_2.io.out(0)
}

class Multiplier extends Module {
  val io = IO(new Bundle {
    val xSigned = Input(Bool())
    val ySigned = Input(Bool())
    val x       = Input(UInt(32.W))
    val y       = Input(UInt(32.W))
    val res     = Output(UInt(64.W))
  })

  val y0 = 0.U(2.W) ## io.y ## 0.U(1.W)

  val columns: Array[Seq[Bool]] = Array.fill(2 * 32)(Seq())
  val extX = Wire(UInt(33.W))
  val negX = Wire(UInt(33.W))

  extX := Mux(io.xSigned, io.x(31), 0.U(1.W)) ## io.x
  negX := ~extX

  var lastSel = WireInit(0.U(3.W))

  for (i <- Range(0, 34, 2)) {
    val sel    = y0(i + 2, i)
    val ppTemp = Wire(UInt(33.W))

    ppTemp := MuxLookup(sel, 0.U)(
      Seq(
        1.U -> extX,
        2.U -> extX,
        3.U -> (extX << 1),
        4.U -> (negX << 1),
        5.U -> negX,
        6.U -> negX
      )
    )

    val signal = Mux(io.xSigned, ppTemp(32), sel(2) && ~(sel(0) && sel(1)))
    val tail = MuxLookup(lastSel, 0.U(2.W))(
      Seq(
        4.U -> 2.U(2.W),
        5.U -> 1.U(2.W),
        6.U -> 1.U(2.W)
      )
    )

    val (pp, weight) = i match {
      case 0 =>
        (Cat(~signal, signal, signal, ppTemp), 0)
      case n if (n == 30) =>
        (Cat(~signal, ppTemp, tail), i - 2)
      case n if (n == 32) =>
        (Mux(io.ySigned, tail, ppTemp(31, 0) ## tail), i - 2)
      case _ =>
        (Cat(1.U(1.W), ~signal, ppTemp, tail), i - 2)
    }

    // printf("%x %d\n", pp, sel)

    for (j <- columns.indices) {
      if (j >= weight && j < (weight + pp.getWidth)) {
        columns(j) = columns(j) :+ pp(j - weight)
      }
    }
    lastSel = sel
  }

  def addOneColumn(col: Seq[Bool], cin: Seq[Bool]): (Seq[Bool], Seq[Bool], Seq[Bool]) = {
    var sum   = Seq[Bool]()
    var cout1 = Seq[Bool]()
    var cout2 = Seq[Bool]()
    col.size match {
      case 1 => // do nothing
        sum = col ++ cin
      case 2 =>
        val c22 = Module(new HalfAdder)
        c22.io.in := VecInit(col).asUInt
        sum   = c22.io.out(0).asBool +: cin
        cout2 = Seq(c22.io.out(1).asBool)
      case 3 =>
        val c32 = Module(new FullAdder)
        c32.io.in := VecInit(col).asUInt
        sum   = c32.io.out(0).asBool +: cin
        cout2 = Seq(c32.io.out(1).asBool)
      case 4 =>
        val c53 = Module(new Compresser42)
        c53.io.in := (VecInit(col :+ (if (cin.nonEmpty) cin.head else false.B))).asUInt
        sum   = Seq(c53.io.out(0).asBool) ++ (if (cin.nonEmpty) cin.drop(1) else Nil)
        cout1 = Seq(c53.io.out(1).asBool)
        cout2 = Seq(c53.io.out(2).asBool)
      case n =>
        val cin_1               = if (cin.nonEmpty) Seq(cin.head) else Nil
        val cin_2               = if (cin.nonEmpty) cin.drop(1) else Nil
        val (s_1, c_1_1, c_1_2) = addOneColumn(col.take(4), cin_1)
        val (s_2, c_2_1, c_2_2) = addOneColumn(col.drop(4), cin_2)
        sum   = s_1 ++ s_2
        cout1 = c_1_1 ++ c_2_1
        cout2 = c_1_2 ++ c_2_2
    }
    (sum, cout1, cout2)
  }

  def max(in: Iterable[Int]): Int = in.reduce((a, b) => if (a > b) a else b)

  def addAll(cols: Array[Seq[Bool]], depth: Int): (UInt, UInt) = {
    if (max(cols.map(_.size)) <= 2) {
      val sum = Cat(cols.map(_(0)).reverse)
      var k   = 0
      while (cols(k).size == 1) k = k + 1
      val carry = Cat(cols.drop(k).map(_(1)).reverse)
      (sum, Cat(carry, 0.U(k.W)))
    } else {
      val columns_next = Array.fill(2 * 32)(Seq[Bool]())
      var cout1, cout2 = Seq[Bool]()
      for (i <- cols.indices) {
        val (s, c1, c2) = addOneColumn(cols(i), cout1)
        columns_next(i) = s ++ cout2
        cout1           = c1
        cout2           = c2
      }

      val toNextLayer = columns_next

      addAll(toNextLayer, depth + 1)
    }
  }

  val (sum, carry) = addAll(cols = columns, depth = 0)

  io.res := sum + carry

}
