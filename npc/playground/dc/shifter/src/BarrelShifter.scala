import chisel3._
import chisel3.util._

class BarrelShifter(width: Int) extends Module {
  val io = IO(new Bundle {
    val left = Input(Bool())
    val shamt = Input(UInt(log2Up(width).W))
    val din = Input(UInt(width.W))
    val dout = Output(UInt(width.W))
  })

  val length = log2Up(width)

  val selectorNet = for (i <- 0 until length) yield {
    Module(new SelectorBundle(width))
  }

  val switch = Wire(Vec(length, Vec(width, Vec(4, UInt(1.W)))))

  for (i <- 0 until length) {
    for (j <- 0 until width) {
      if (i == 0) {
        switch(i)(j)(0) := io.din(j)
        switch(i)(j)(2) := io.din(j)

        if (j + 1 >= width)
          switch(i)(j)(1) := 0.U
        else
          switch(i)(j)(1) := io.din(j + 1)

        if (j - 1 < 0)
          switch(i)(j)(3) := 0.U
        else
          switch(i)(j)(3) := io.din(j - 1)

      } else {
        switch(i)(j)(0) := selectorNet(i - 1).io.dout(j)
        switch(i)(j)(2) := selectorNet(i - 1).io.dout(j)

        if (j + math.pow(2, i).toInt >= width)
          switch(i)(j)(1) := 0.U
        else
          switch(i)(j)(1) := selectorNet(i - 1).io
            .dout(j + math.pow(2, i).toInt)

        if (j - math.pow(2, i).toInt < 0)
          switch(i)(j)(3) := 0.U
        else
          switch(i)(j)(3) := selectorNet(i - 1).io
            .dout(j - math.pow(2, i).toInt)
      }
    }
    selectorNet(i).io.shamt := io.shamt(i)
    selectorNet(i).io.left := io.left
    selectorNet(i).io.din := switch(i)
  }

  io.dout := selectorNet(length - 1).io.dout
}
