// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu__Syms.h"
#include "VSimpleCpu___024unit.h"

extern "C" int pmem_read(int raddr, int MemRead);

VL_INLINE_OPT void VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ MemRead, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int MemRead__Vcvt;
    for (size_t MemRead__Vidx = 0; MemRead__Vidx < 1; ++MemRead__Vidx) MemRead__Vcvt = MemRead;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt, MemRead__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char Wstrb);

VL_INLINE_OPT void VSimpleCpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ Wstrb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimpleCpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char Wstrb__Vcvt;
    for (size_t Wstrb__Vidx = 0; Wstrb__Vidx < 1; ++Wstrb__Vidx) Wstrb__Vcvt = Wstrb;
    pmem_write(waddr__Vcvt, wdata__Vcvt, Wstrb__Vcvt);
}
