// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu___024root.h"

void VSimpleCpu___024root___ico_sequent__TOP__0(VSimpleCpu___024root* vlSelf);

void VSimpleCpu___024root___eval_ico(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VSimpleCpu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VSimpleCpu___024root___eval_triggers__ico(VSimpleCpu___024root* vlSelf);

bool VSimpleCpu___024root___eval_phase__ico(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VSimpleCpu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VSimpleCpu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VSimpleCpu___024root___eval_act(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_act\n"); );
}

void VSimpleCpu___024root___eval_triggers__act(VSimpleCpu___024root* vlSelf);

bool VSimpleCpu___024root___eval_phase__act(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSimpleCpu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSimpleCpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VSimpleCpu___024root___eval_nba(VSimpleCpu___024root* vlSelf);

bool VSimpleCpu___024root___eval_phase__nba(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSimpleCpu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__ico(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__nba(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__act(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG

void VSimpleCpu___024root___eval(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VSimpleCpu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("build/SimpleCpu.v", 3019, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VSimpleCpu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSimpleCpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/SimpleCpu.v", 3019, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSimpleCpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("build/SimpleCpu.v", 3019, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSimpleCpu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSimpleCpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSimpleCpu___024root___eval_debug_assertions(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
