// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void halt(int commit_pc, int commit_mem, int commit_addr, int commit_halt, int commit_ret);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_halt_TOP____024unit(IData/*31:0*/ commit_pc, IData/*31:0*/ commit_mem, IData/*31:0*/ commit_addr, IData/*31:0*/ commit_halt, IData/*31:0*/ commit_ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_halt_TOP____024unit\n"); );
    // Body
    int commit_pc__Vcvt;
    for (size_t commit_pc__Vidx = 0; commit_pc__Vidx < 1; ++commit_pc__Vidx) commit_pc__Vcvt = commit_pc;
    int commit_mem__Vcvt;
    for (size_t commit_mem__Vidx = 0; commit_mem__Vidx < 1; ++commit_mem__Vidx) commit_mem__Vcvt = commit_mem;
    int commit_addr__Vcvt;
    for (size_t commit_addr__Vidx = 0; commit_addr__Vidx < 1; ++commit_addr__Vidx) commit_addr__Vcvt = commit_addr;
    int commit_halt__Vcvt;
    for (size_t commit_halt__Vidx = 0; commit_halt__Vidx < 1; ++commit_halt__Vidx) commit_halt__Vcvt = commit_halt;
    int commit_ret__Vcvt;
    for (size_t commit_ret__Vidx = 0; commit_ret__Vidx < 1; ++commit_ret__Vidx) commit_ret__Vcvt = commit_ret;
    halt(commit_pc__Vcvt, commit_mem__Vcvt, commit_addr__Vcvt, commit_halt__Vcvt, commit_ret__Vcvt);
}
