import chisel3._
import chisel3.util._
import chiseltest._
import chiseltest.formal._
import org.scalatest.flatspec.AnyFlatSpec

class Lzd32 extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(4.W))
  })

  val myLzd  = Module(new Lzd(false))
  val refLzd = Module(new Lzd(true))

  myLzd.io.in  := io.in
  refLzd.io.in := io.in

  assert(myLzd.io.out =/= refLzd.io.out)
  assert(myLzd.io.zero === refLzd.io.zero)
}

class FormalTest extends AnyFlatSpec with ChiselScalatestTester with Formal {
  "Test" should "pass" in {
    verify(new Lzd32, Seq(BoundedCheck(1)))
  }
}
