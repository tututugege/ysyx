import circt.stage._

object Elaborate extends App {
  val firtoolOptions = Array(
    "--lowering-options=" + List(
      // make yosys happy
      // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
      "disallowLocalVariables",
      "disallowPackedArrays",
      "locationInfoStyle=wrapInAtSquareBracket"
    ).reduce(_ + "," + _)
  )
  circt.stage.ChiselStage.emitSystemVerilogFile(new ysyx_23060226(32), args, firtoolOptions)
  // circt.stage.ChiselStage.emitSystemVerilogFile(new Multiplier, args, firtoolOptions)
}
