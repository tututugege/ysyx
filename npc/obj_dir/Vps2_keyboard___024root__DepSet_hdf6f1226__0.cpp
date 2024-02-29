// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_keyboard.h for the primary calling header

#include "Vps2_keyboard__pch.h"
#include "Vps2_keyboard___024root.h"

void Vps2_keyboard___024root___eval_act(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vps2_keyboard___024root___nba_sequent__TOP__0(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__ps2_keyboard__DOT__ps2_clk_sync;
    __Vdly__ps2_keyboard__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__ps2_keyboard__DOT__r_ptr;
    __Vdly__ps2_keyboard__DOT__r_ptr = 0;
    CData/*2:0*/ __Vdlyvdim0__ps2_keyboard__DOT__fifo__v0;
    __Vdlyvdim0__ps2_keyboard__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ps2_keyboard__DOT__fifo__v0;
    __Vdlyvval__ps2_keyboard__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ps2_keyboard__DOT__fifo__v0;
    __Vdlyvset__ps2_keyboard__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdly__ps2_keyboard__DOT__w_ptr;
    __Vdly__ps2_keyboard__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__ps2_keyboard__DOT__count;
    __Vdly__ps2_keyboard__DOT__count = 0;
    // Body
    __Vdly__ps2_keyboard__DOT__ps2_clk_sync = vlSelf->ps2_keyboard__DOT__ps2_clk_sync;
    __Vdly__ps2_keyboard__DOT__count = vlSelf->ps2_keyboard__DOT__count;
    __Vdly__ps2_keyboard__DOT__w_ptr = vlSelf->ps2_keyboard__DOT__w_ptr;
    __Vdly__ps2_keyboard__DOT__r_ptr = vlSelf->ps2_keyboard__DOT__r_ptr;
    __Vdlyvset__ps2_keyboard__DOT__fifo__v0 = 0U;
    __Vdly__ps2_keyboard__DOT__ps2_clk_sync = ((6U 
                                                & ((IData)(vlSelf->ps2_keyboard__DOT__ps2_clk_sync) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->ps2_clk));
    if (vlSelf->clrn) {
        if (vlSelf->ready) {
            if ((1U & (~ (IData)(vlSelf->nextdata_n)))) {
                __Vdly__ps2_keyboard__DOT__r_ptr = 
                    (7U & ((IData)(1U) + (IData)(vlSelf->ps2_keyboard__DOT__r_ptr)));
                if (((IData)(vlSelf->ps2_keyboard__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->ps2_keyboard__DOT__r_ptr))))) {
                    vlSelf->ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->ps2_keyboard__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->ps2_keyboard__DOT__count))) {
                if ((((~ (IData)(vlSelf->ps2_keyboard__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->ps2_keyboard__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__ps2_keyboard__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->ps2_keyboard__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__ps2_keyboard__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__ps2_keyboard__DOT__fifo__v0 
                        = vlSelf->ps2_keyboard__DOT__w_ptr;
                    vlSelf->ready = 1U;
                    __Vdly__ps2_keyboard__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->ps2_keyboard__DOT__w_ptr)));
                    vlSelf->overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->ps2_keyboard__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->ps2_keyboard__DOT__w_ptr)))));
                }
                __Vdly__ps2_keyboard__DOT__count = 0U;
            } else {
                vlSelf->ps2_keyboard__DOT____Vlvbound_hae012186__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->ps2_keyboard__DOT__count))) {
                    vlSelf->ps2_keyboard__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->ps2_keyboard__DOT__count))) 
                            & (IData)(vlSelf->ps2_keyboard__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->ps2_keyboard__DOT____Vlvbound_hae012186__0) 
                                        << (IData)(vlSelf->ps2_keyboard__DOT__count))));
                }
                __Vdly__ps2_keyboard__DOT__count = 
                    (0xfU & ((IData)(1U) + (IData)(vlSelf->ps2_keyboard__DOT__count)));
            }
        }
    } else {
        __Vdly__ps2_keyboard__DOT__count = 0U;
        __Vdly__ps2_keyboard__DOT__w_ptr = 0U;
        __Vdly__ps2_keyboard__DOT__r_ptr = 0U;
        vlSelf->overflow = 0U;
        vlSelf->ready = 0U;
    }
    vlSelf->ps2_keyboard__DOT__ps2_clk_sync = __Vdly__ps2_keyboard__DOT__ps2_clk_sync;
    vlSelf->ps2_keyboard__DOT__w_ptr = __Vdly__ps2_keyboard__DOT__w_ptr;
    vlSelf->ps2_keyboard__DOT__count = __Vdly__ps2_keyboard__DOT__count;
    vlSelf->ps2_keyboard__DOT__r_ptr = __Vdly__ps2_keyboard__DOT__r_ptr;
    if (__Vdlyvset__ps2_keyboard__DOT__fifo__v0) {
        vlSelf->ps2_keyboard__DOT__fifo[__Vdlyvdim0__ps2_keyboard__DOT__fifo__v0] 
            = __Vdlyvval__ps2_keyboard__DOT__fifo__v0;
    }
    vlSelf->data = vlSelf->ps2_keyboard__DOT__fifo[vlSelf->ps2_keyboard__DOT__r_ptr];
}

void Vps2_keyboard___024root___eval_nba(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vps2_keyboard___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vps2_keyboard___024root___eval_triggers__act(Vps2_keyboard___024root* vlSelf);

bool Vps2_keyboard___024root___eval_phase__act(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vps2_keyboard___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vps2_keyboard___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vps2_keyboard___024root___eval_phase__nba(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vps2_keyboard___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__nba(Vps2_keyboard___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__act(Vps2_keyboard___024root* vlSelf);
#endif  // VL_DEBUG

void Vps2_keyboard___024root___eval(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vps2_keyboard___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/ps2_keyboard.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vps2_keyboard___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("build/ps2_keyboard.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vps2_keyboard___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vps2_keyboard___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vps2_keyboard___024root___eval_debug_assertions(Vps2_keyboard___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clrn & 0xfeU))) {
        Verilated::overWidthError("clrn");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
    if (VL_UNLIKELY((vlSelf->nextdata_n & 0xfeU))) {
        Verilated::overWidthError("nextdata_n");}
}
#endif  // VL_DEBUG
