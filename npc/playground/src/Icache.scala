// import chisel3._
// import chisel3.util._
//
// class IcacheBundle extends Bundle {
//   val ar = Decoupled(new AxiReadRequestChannel())
//   val r  = Flipped(Decoupled(new AxiReadDataChannel()))
// }
//
// class Icache(indexWidth: Int, offsetWidth: Int) extends Module {
//   val io = IO(new Bundle {
//     val in  = new IcacheBundle
//     val out = Flipped(new IcacheBundle)
//   })
//
//   val tagWidth = 32 - indexWidth - offsetWidth
//
//   val idle :: read :: replace :: refill :: Nil = Enum(4)
//
//   // input information for req
//   val bankNum   = 1 << (offsetWidth - 2)
//   val state     = RegInit(idle)
//   val hit       = Wire(Bool())
//   val inTag     = Wire(UInt(tagWidth.W))
//   val inBankIdx = Wire(UInt((if (offsetWidth > 2) offsetWidth - 2 else 1).W))
//   val inIndex   = Wire(UInt(indexWidth.W))
//
//   inTag   := io.in.ar.bits.araddr(31, 31 - indexWidth + 1)
//   inIndex := io.in.ar.bits.araddr(offsetWidth + indexWidth, offsetWidth + 1)
//
//   if (offsetWidth > 2) {
//     inBankIdx := io.in.ar.bits.araddr(offsetWidth - 1, 2)
//   } else {
//     inBankIdx := 0.U
//   }
//
//   // information buffer for judge and select
//   val bufTag     = Wire(UInt(tagWidth.W))
//   val bufBankIdx = Wire(UInt((if (offsetWidth > 2) offsetWidth - 2 else 1).W))
//   val bufIndex   = Wire(UInt(indexWidth.W))
//
//   // cache bank
//   val cache = for (i <- 0 until bankNum) yield {
//     SyncReadMem(1 << indexWidth, UInt(32.W))
//   }
//
//   val cacheBankRdata = Wire(Vec(bankNum, UInt(32.W)))
//   val cacheRdata     = Wire(UInt(32.W))
//   for (i <- 0 until bankNum) {
//     cache(i).read(cacheBankRdata(i), inBankIdx === i.U && io.in.ar.valid)
//   }
//
//   cacheRdata := cacheBankRdata(bufBankIdx)
//
//   // tag and valid
//   val tagv      = SyncReadMem(1 << indexWidth, UInt((tagWidth + 1).W))
//   val tagvRdata = Wire(UInt((tagWidth + 1).W))
//   tagvRdata := tagv.read(inIndex, io.in.ar.valid)
//
//   switch(state) {
//     is(idle) {
//       state := Mux(io.in.ar.valid, read, idle)
//     }
//     is(read) {
//       state := Mux(hit, Mux(io.in.ar.valid, read, idle), replace)
//     }
//     is(replace) {
//       state := Mux(io.out.ar.fire, refill, replace)
//     }
//     is(refill) {
//       state := Mux(io.out.r.fire && io.out.r.bits.rlast, refill, replace)
//     }
//   }
//
//   hit := (inTag === tagvRdata(tagWidth, 1)) && tagvRdata(0)
//
//   io.in.ar.ready := state === idle
// }
