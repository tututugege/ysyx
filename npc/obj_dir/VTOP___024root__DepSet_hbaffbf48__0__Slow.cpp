// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "VTOP__pch.h"
#include "VTOP___024root.h"

VL_ATTR_COLD void VTOP___024root___eval_static(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTOP___024root___eval_initial__TOP(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    VTOP___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VTOP___024root___eval_initial__TOP(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->TOP__DOT__seg[0U] = (0xfeU & vlSelf->TOP__DOT__seg
                                 [0U]);
    vlSelf->TOP__DOT__seg[1U] = (0xfeU & vlSelf->TOP__DOT__seg
                                 [1U]);
    vlSelf->TOP__DOT__seg[2U] = (0xfeU & vlSelf->TOP__DOT__seg
                                 [2U]);
    vlSelf->TOP__DOT__seg[3U] = (0xfeU & vlSelf->TOP__DOT__seg
                                 [3U]);
    vlSelf->TOP__DOT__seg[4U] = (0xfeU & vlSelf->TOP__DOT__seg
                                 [4U]);
    vlSelf->TOP__DOT__seg[5U] = (0xfeU & vlSelf->TOP__DOT__seg
                                 [5U]);
    vlSelf->TOP__DOT__seg[6U] = (0xfeU & vlSelf->TOP__DOT__seg
                                 [6U]);
    vlSelf->TOP__DOT__seg[7U] = (0xfeU & vlSelf->TOP__DOT__seg
                                 [7U]);
}

VL_ATTR_COLD void VTOP___024root___eval_final(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTOP___024root___eval_phase__stl(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
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
            VTOP___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/TOP.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTOP___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___stl_sequent__TOP__0(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))) 
           | (1U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                           >> 4U))) | (1U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data3) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))) 
           | (1U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                           >> 4U))) | (1U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data2) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))) 
           | (1U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                           >> 4U))) | (1U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data1) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data0))) 
           | (1U == (0xfU & (IData)(vlSelf->TOP__DOT__data0))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data0) 
                           >> 4U))) | (1U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data0) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))) 
           | (2U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                           >> 4U))) | (2U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data3) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))) 
           | (2U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                           >> 4U))) | (2U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data2) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))) 
           | (2U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                           >> 4U))) | (2U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data1) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data0))) 
           | (2U == (0xfU & (IData)(vlSelf->TOP__DOT__data0))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data0) 
                           >> 4U))) | (2U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data0) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__switch[7U] = (0xfU & ((IData)(vlSelf->TOP__DOT__data0) 
                                            >> 4U));
    vlSelf->TOP__DOT__switch[6U] = (0xfU & (IData)(vlSelf->TOP__DOT__data0));
    vlSelf->TOP__DOT__switch[5U] = (0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                                            >> 4U));
    vlSelf->TOP__DOT__switch[4U] = (0xfU & (IData)(vlSelf->TOP__DOT__data1));
    vlSelf->TOP__DOT__switch[3U] = (0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                                            >> 4U));
    vlSelf->TOP__DOT__switch[2U] = (0xfU & (IData)(vlSelf->TOP__DOT__data2));
    vlSelf->TOP__DOT__switch[1U] = (0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                                            >> 4U));
    vlSelf->TOP__DOT__switch[0U] = (0xfU & (IData)(vlSelf->TOP__DOT__data3));
    vlSelf->TOP__DOT__seg[0U] = ((1U & vlSelf->TOP__DOT__seg
                                  [0U]) | ((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6) 
                                             << 7U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5) 
                                                << 6U) 
                                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3) 
                                                     << 4U)))) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0) 
                                                    << 1U)))));
    vlSelf->TOP__DOT__seg[1U] = ((1U & vlSelf->TOP__DOT__seg
                                  [1U]) | ((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6) 
                                             << 7U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5) 
                                                << 6U) 
                                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3) 
                                                     << 4U)))) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0) 
                                                    << 1U)))));
    vlSelf->TOP__DOT__seg[2U] = ((1U & vlSelf->TOP__DOT__seg
                                  [2U]) | ((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6) 
                                             << 7U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5) 
                                                << 6U) 
                                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3) 
                                                     << 4U)))) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0) 
                                                    << 1U)))));
    vlSelf->TOP__DOT__seg[3U] = ((1U & vlSelf->TOP__DOT__seg
                                  [3U]) | ((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6) 
                                             << 7U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5) 
                                                << 6U) 
                                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3) 
                                                     << 4U)))) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0) 
                                                    << 1U)))));
    vlSelf->TOP__DOT__seg[4U] = ((1U & vlSelf->TOP__DOT__seg
                                  [4U]) | ((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6) 
                                             << 7U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5) 
                                                << 6U) 
                                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3) 
                                                     << 4U)))) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0) 
                                                    << 1U)))));
    vlSelf->TOP__DOT__seg[5U] = ((1U & vlSelf->TOP__DOT__seg
                                  [5U]) | ((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6) 
                                             << 7U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5) 
                                                << 6U) 
                                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3) 
                                                     << 4U)))) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0) 
                                                    << 1U)))));
    vlSelf->TOP__DOT__seg[6U] = ((1U & vlSelf->TOP__DOT__seg
                                  [6U]) | ((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6) 
                                             << 7U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5) 
                                                << 6U) 
                                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3) 
                                                     << 4U)))) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0) 
                                                    << 1U)))));
    vlSelf->TOP__DOT__seg[7U] = ((1U & vlSelf->TOP__DOT__seg
                                  [7U]) | ((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6) 
                                             << 7U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5) 
                                                << 6U) 
                                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3) 
                                                     << 4U)))) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0) 
                                                    << 1U)))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_8 
        = ((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
             | (3U == (0xfU & (IData)(vlSelf->TOP__DOT__data3)))) 
            | (5U == (0xfU & (IData)(vlSelf->TOP__DOT__data3)))) 
           | (6U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_8 
        = ((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
             | (3U == (0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                               >> 4U)))) | (5U == (0xfU 
                                                   & ((IData)(vlSelf->TOP__DOT__data3) 
                                                      >> 4U)))) 
           | (6U == (0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                             >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_8 
        = ((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
             | (3U == (0xfU & (IData)(vlSelf->TOP__DOT__data2)))) 
            | (5U == (0xfU & (IData)(vlSelf->TOP__DOT__data2)))) 
           | (6U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_8 
        = ((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
             | (3U == (0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                               >> 4U)))) | (5U == (0xfU 
                                                   & ((IData)(vlSelf->TOP__DOT__data2) 
                                                      >> 4U)))) 
           | (6U == (0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                             >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_8 
        = ((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
             | (3U == (0xfU & (IData)(vlSelf->TOP__DOT__data1)))) 
            | (5U == (0xfU & (IData)(vlSelf->TOP__DOT__data1)))) 
           | (6U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_8 
        = ((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
             | (3U == (0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                               >> 4U)))) | (5U == (0xfU 
                                                   & ((IData)(vlSelf->TOP__DOT__data1) 
                                                      >> 4U)))) 
           | (6U == (0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                             >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_8 
        = ((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
             | (3U == (0xfU & (IData)(vlSelf->TOP__DOT__data0)))) 
            | (5U == (0xfU & (IData)(vlSelf->TOP__DOT__data0)))) 
           | (6U == (0xfU & (IData)(vlSelf->TOP__DOT__data0))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_8 
        = ((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
             | (3U == (0xfU & ((IData)(vlSelf->TOP__DOT__data0) 
                               >> 4U)))) | (5U == (0xfU 
                                                   & ((IData)(vlSelf->TOP__DOT__data0) 
                                                      >> 4U)))) 
           | (6U == (0xfU & ((IData)(vlSelf->TOP__DOT__data0) 
                             >> 4U))));
    vlSelf->seg0n = (0xffU & (~ vlSelf->TOP__DOT__seg
                              [0U]));
    vlSelf->seg1n = (0xffU & (~ vlSelf->TOP__DOT__seg
                              [1U]));
    vlSelf->seg2n = (0xffU & (~ vlSelf->TOP__DOT__seg
                              [2U]));
    vlSelf->seg3n = (0xffU & (~ vlSelf->TOP__DOT__seg
                              [3U]));
    vlSelf->seg4n = (0xffU & (~ vlSelf->TOP__DOT__seg
                              [4U]));
    vlSelf->seg5n = (0xffU & (~ vlSelf->TOP__DOT__seg
                              [5U]));
    vlSelf->seg6n = (0xffU & (~ vlSelf->TOP__DOT__seg
                              [6U]));
    vlSelf->seg7n = (0xffU & (~ vlSelf->TOP__DOT__seg
                              [7U]));
}

VL_ATTR_COLD void VTOP___024root___eval_stl(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTOP___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTOP___024root___eval_triggers__stl(VTOP___024root* vlSelf);

VL_ATTR_COLD bool VTOP___024root___eval_phase__stl(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTOP___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTOP___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__nba(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->clr = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->seg0n = 0;
    vlSelf->seg1n = 0;
    vlSelf->seg2n = 0;
    vlSelf->seg3n = 0;
    vlSelf->seg4n = 0;
    vlSelf->seg5n = 0;
    vlSelf->seg6n = 0;
    vlSelf->seg7n = 0;
    vlSelf->ready = 0;
    vlSelf->overflow = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TOP__DOT__seg[__Vi0] = 0;
    }
    vlSelf->TOP__DOT__data0 = 0;
    vlSelf->TOP__DOT__data1 = 0;
    vlSelf->TOP__DOT__data2 = 0;
    vlSelf->TOP__DOT__data3 = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TOP__DOT__switch[__Vi0] = 0;
    }
    vlSelf->TOP__DOT__ps2__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TOP__DOT__ps2__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->TOP__DOT__ps2__DOT__w_ptr = 0;
    vlSelf->TOP__DOT__ps2__DOT__r_ptr = 0;
    vlSelf->TOP__DOT__ps2__DOT__count = 0;
    vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync = 0;
    vlSelf->TOP__DOT__ps2__DOT____Vlvbound_hae012186__0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_5_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_5_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_5_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_5_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_5_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_5_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_5_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_5_T_2 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
