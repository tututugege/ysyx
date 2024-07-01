// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiplier.h for the primary calling header

#include "VMultiplier__pch.h"
#include "VMultiplier__Syms.h"
#include "VMultiplier___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiplier___024root___dump_triggers__stl(VMultiplier___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMultiplier___024root___eval_triggers__stl(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMultiplier___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
