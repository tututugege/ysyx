// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_keyboard.h for the primary calling header

#include "Vps2_keyboard__pch.h"
#include "Vps2_keyboard___024root.h"

VL_ATTR_COLD void Vps2_keyboard___024root___eval_static(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vps2_keyboard___024root___eval_initial(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vps2_keyboard___024root___eval_final(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__stl(Vps2_keyboard___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vps2_keyboard___024root___eval_phase__stl(Vps2_keyboard___024root* vlSelf);

VL_ATTR_COLD void Vps2_keyboard___024root___eval_settle(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vps2_keyboard___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/ps2_keyboard.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vps2_keyboard___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__stl(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vps2_keyboard___024root___stl_sequent__TOP__0(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->data = vlSelf->ps2_keyboard__DOT__fifo[vlSelf->ps2_keyboard__DOT__r_ptr];
}

VL_ATTR_COLD void Vps2_keyboard___024root___eval_stl(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vps2_keyboard___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vps2_keyboard___024root___eval_triggers__stl(Vps2_keyboard___024root* vlSelf);

VL_ATTR_COLD bool Vps2_keyboard___024root___eval_phase__stl(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vps2_keyboard___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vps2_keyboard___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__act(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__nba(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vps2_keyboard___024root___ctor_var_reset(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clrn = VL_RAND_RESET_I(1);
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->nextdata_n = VL_RAND_RESET_I(1);
    vlSelf->overflow = VL_RAND_RESET_I(1);
    vlSelf->ps2_keyboard__DOT__buffer = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ps2_keyboard__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ps2_keyboard__DOT__w_ptr = VL_RAND_RESET_I(3);
    vlSelf->ps2_keyboard__DOT__r_ptr = VL_RAND_RESET_I(3);
    vlSelf->ps2_keyboard__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->ps2_keyboard__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->ps2_keyboard__DOT____Vlvbound_hae012186__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
