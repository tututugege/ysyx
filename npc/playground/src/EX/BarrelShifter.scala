import chisel3._
import chisel3.util._

class BarrelShifter(width: Int) extends Module {
  val io = IO(new Bundle {
    val left   = Input(Bool())
    val signed = Input(Bool())
    val shamt  = Input(UInt(log2Up(width).W))
    val din    = Input(UInt(width.W))
    val dout   = Output(UInt(width.W))
  })

  val length = log2Up(width)

  val SelectorNet = for (i <- 0 until length) yield {
    Module(new SelectorBundle(width))
  }

  val switch  = Wire(Vec(length, Vec(width, Vec(4, UInt(1.W)))))
  val FillBit = Mux(io.signed && ~io.left, io.din(31), 0.U(1.W))

  for (i <- 0 until length) {
    for (j <- 0 until width) {
      if (i == 0) {
        switch(i)(j)(0) := io.din(j)
        switch(i)(j)(2) := io.din(j)

        if (j + 1 >= width)
          switch(i)(j)(1) := FillBit
        else
          switch(i)(j)(1) := io.din(j + 1)

        if (j - 1 < 0)
          switch(i)(j)(3) := 0.U
        else
          switch(i)(j)(3) := io.din(j - 1)

      } else {
        switch(i)(j)(0) := SelectorNet(i - 1).io.dout(j)
        switch(i)(j)(2) := SelectorNet(i - 1).io.dout(j)

        if (j + math.pow(2, i).toInt >= width)
          switch(i)(j)(1) := FillBit
        else
          switch(i)(j)(1) := SelectorNet(i - 1).io
            .dout(j + math.pow(2, i).toInt)

        if (j - math.pow(2, i).toInt < 0)
          switch(i)(j)(3) := 0.U
        else
          switch(i)(j)(3) := SelectorNet(i - 1).io
            .dout(j - math.pow(2, i).toInt)
      }
    }
    SelectorNet(i).io.shamt := io.shamt(i)
    SelectorNet(i).io.left  := io.left
    SelectorNet(i).io.din   := switch(i)
  }

  io.dout := SelectorNet(length - 1).io.dout
}

class SelectorBundle(width: Int) extends Module {
  val io = IO(new Bundle {
    val shamt = Input(Bool())
    val left  = Input(Bool())
    val din   = Input(Vec(width, Vec(4, UInt(1.W))))
    val dout  = Output(UInt(width.W))
  })

  val switch = Wire(Vec(width, UInt(1.W)))
  val selectorList = for (i <- 0 until width) yield {
    val sel = Module(new Selector4)

    sel.io.shamt := io.shamt
    sel.io.left  := io.left
    sel.io.din   := io.din(i)
    switch(i)    := sel.io.dout
  }

  io.dout := switch.asUInt
}

class Selector4 extends Module {
  val io = IO(new Bundle {
    val shamt = Input(Bool())
    val left  = Input(Bool())
    val din   = Input(Vec(4, UInt(1.W)))
    val dout  = Output(UInt(1.W))
  })

  val ShiftL = Wire(Bool())
  val ShiftR = Wire(Bool())
  val ShiftN = Wire(Bool())

  ShiftL := io.left && io.shamt
  ShiftR := ~io.left && io.shamt
  ShiftN := ~io.shamt

  io.dout := Mux1H(
    Seq(
      ShiftN -> io.din(0),
      ShiftR -> io.din(1),
      ShiftL -> io.din(3)
    )
  )
}
