import chisel3._
import chisel3.util._

class display extends Module {
    val io = IO(new Bundle {
        val sw = Input(UInt(8.W))
        val seg = Output(UInt(8.W))
    })

    val myEncoder = Module(new encoder)
    val myBcd7seg = Module(new bcd7seg)

    myEncoder.io.in := io.sw
    myBcd7seg.io.in := myEncoder.io.out

    io.seg := ~(myBcd7seg.io.out ## myEncoder.io.zero)
}
