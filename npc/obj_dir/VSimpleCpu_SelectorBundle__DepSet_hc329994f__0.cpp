// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu_SelectorBundle.h"

VL_INLINE_OPT void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__6(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__6\n"); );
    // Body
    vlSelf->io_dout = (((IData)(vlSelf->__PVT__io_dout_hi) 
                        << 0x10U) | (IData)(vlSelf->__PVT__io_dout_lo));
}
