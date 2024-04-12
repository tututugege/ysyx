// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "VTOP__pch.h"
#include "VTOP___024root.h"

VL_INLINE_OPT void VTOP___024root___ico_sequent__TOP__0(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->TOP__DOT__InstRam_arvalid = (1U & ((~ (IData)(vlSelf->TOP__DOT__arFireReg)) 
                                               & (~ (IData)(vlSelf->reset))));
    vlSelf->TOP__DOT__InstRam__DOT__nxt_rstate = ((8U 
                                                   & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                      ? 1U
                                                      : 
                                                     (((((IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate) 
                                                         >> 3U) 
                                                        & (~ (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg))) 
                                                       & (0U 
                                                          != (IData)(vlSelf->TOP__DOT__InstRam__DOT__LFSR)))
                                                       ? 1U
                                                       : 
                                                      ((IData)(
                                                               (((IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate) 
                                                                 >> 3U) 
                                                                & (~ (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg))))
                                                        ? 2U
                                                        : 8U)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                      ? 1U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->TOP__DOT__InstRam__DOT__rcounter))
                                                       ? 8U
                                                       : 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                      ? 1U
                                                      : 
                                                     ((((IData)(vlSelf->TOP__DOT__InstRam_arvalid) 
                                                        & (IData)(vlSelf->TOP__DOT__InstRam_arready)) 
                                                       & (0U 
                                                          != (IData)(vlSelf->TOP__DOT__InstRam__DOT__LFSR)))
                                                       ? 4U
                                                       : 
                                                      (((IData)(vlSelf->TOP__DOT__InstRam_arvalid) 
                                                        & (IData)(vlSelf->TOP__DOT__InstRam_arready))
                                                        ? 8U
                                                        : 2U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelf->TOP__DOT__InstRam__DOT__arcounter))
                                                       ? 2U
                                                       : 1U)
                                                      : 1U))));
    vlSelf->TOP__DOT___arFireReg_T_1 = ((IData)(vlSelf->TOP__DOT__InstRam_arready) 
                                        & (IData)(vlSelf->TOP__DOT__InstRam_arvalid));
    vlSelf->TOP__DOT__IF_io_Pre2IF_valid = ((IData)(vlSelf->TOP__DOT___arFireReg_T_1) 
                                            | (IData)(vlSelf->TOP__DOT__arFireReg));
    vlSelf->TOP__DOT__IF__DOT__record_io_reset = ((
                                                   (~ 
                                                    ((IData)(vlSelf->TOP__DOT__Pre2IFValid) 
                                                     & (IData)(vlSelf->TOP__DOT___Pre2IFValid_T_2))) 
                                                   | (IData)(vlSelf->TOP__DOT__IF__DOT___io_Pre2IF_ready_T)) 
                                                  & (IData)(vlSelf->TOP__DOT__IF_io_Pre2IF_valid));
}

void VTOP___024root___eval_ico(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTOP___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VTOP___024root___eval_triggers__ico(VTOP___024root* vlSelf);

bool VTOP___024root___eval_phase__ico(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTOP___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VTOP___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTOP___024root___eval_act(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_act\n"); );
}

void VTOP___024root___nba_sequent__TOP__0(VTOP___024root* vlSelf);

void VTOP___024root___eval_nba(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTOP___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VTOP___024root___eval_triggers__act(VTOP___024root* vlSelf);

bool VTOP___024root___eval_phase__act(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTOP___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTOP___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTOP___024root___eval_phase__nba(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTOP___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__ico(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__nba(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
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
            VTOP___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("build/TOP.v", 2613, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTOP___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTOP___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/TOP.v", 2613, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTOP___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("build/TOP.v", 2613, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTOP___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTOP___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
