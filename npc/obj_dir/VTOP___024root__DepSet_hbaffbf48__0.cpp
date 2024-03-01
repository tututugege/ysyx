// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "VTOP__pch.h"
#include "VTOP___024root.h"

void VTOP___024root___eval_act(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__0(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__TOP__DOT__ps2__DOT__ps2_clk_sync;
    __Vdly__TOP__DOT__ps2__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__TOP__DOT__ps2__DOT__count;
    __Vdly__TOP__DOT__ps2__DOT__count = 0;
    CData/*2:0*/ __Vdly__TOP__DOT__ps2__DOT__w_ptr;
    __Vdly__TOP__DOT__ps2__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__TOP__DOT__ps2__DOT__r_ptr;
    __Vdly__TOP__DOT__ps2__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__overflow;
    __Vdly__overflow = 0;
    CData/*0:0*/ __Vdly__ready;
    __Vdly__ready = 0;
    CData/*2:0*/ __Vdlyvdim0__TOP__DOT__ps2__DOT__fifo__v0;
    __Vdlyvdim0__TOP__DOT__ps2__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__ps2__DOT__fifo__v0;
    __Vdlyvval__TOP__DOT__ps2__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__ps2__DOT__fifo__v0;
    __Vdlyvset__TOP__DOT__ps2__DOT__fifo__v0 = 0;
    // Body
    __Vdly__TOP__DOT__ps2__DOT__ps2_clk_sync = vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync;
    __Vdly__ready = vlSelf->ready;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__TOP__DOT__ps2__DOT__r_ptr = vlSelf->TOP__DOT__ps2__DOT__r_ptr;
    __Vdly__TOP__DOT__ps2__DOT__w_ptr = vlSelf->TOP__DOT__ps2__DOT__w_ptr;
    __Vdly__TOP__DOT__ps2__DOT__count = vlSelf->TOP__DOT__ps2__DOT__count;
    __Vdlyvset__TOP__DOT__ps2__DOT__fifo__v0 = 0U;
    __Vdly__TOP__DOT__ps2__DOT__ps2_clk_sync = ((6U 
                                                 & ((IData)(vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->ps2_clk));
    if (vlSelf->clr) {
        __Vdly__TOP__DOT__ps2__DOT__count = 0U;
        __Vdly__TOP__DOT__ps2__DOT__w_ptr = 0U;
        __Vdly__TOP__DOT__ps2__DOT__r_ptr = 0U;
        __Vdly__overflow = 0U;
        __Vdly__ready = 0U;
    } else {
        if (vlSelf->ready) {
            __Vdly__TOP__DOT__ps2__DOT__r_ptr = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TOP__DOT__ps2__DOT__r_ptr)));
            if (((IData)(vlSelf->TOP__DOT__ps2__DOT__w_ptr) 
                 == (7U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ps2__DOT__r_ptr))))) {
                __Vdly__ready = 0U;
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->TOP__DOT__ps2__DOT__count))) {
                if ((((~ (IData)(vlSelf->TOP__DOT__ps2__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->TOP__DOT__ps2__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__TOP__DOT__ps2__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->TOP__DOT__ps2__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__TOP__DOT__ps2__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__TOP__DOT__ps2__DOT__fifo__v0 
                        = vlSelf->TOP__DOT__ps2__DOT__w_ptr;
                    __Vdly__ready = 1U;
                    __Vdly__TOP__DOT__ps2__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ps2__DOT__w_ptr)));
                    __Vdly__overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->TOP__DOT__ps2__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->TOP__DOT__ps2__DOT__w_ptr)))));
                }
                __Vdly__TOP__DOT__ps2__DOT__count = 0U;
            } else {
                vlSelf->TOP__DOT__ps2__DOT____Vlvbound_hae012186__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->TOP__DOT__ps2__DOT__count))) {
                    vlSelf->TOP__DOT__ps2__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->TOP__DOT__ps2__DOT__count))) 
                            & (IData)(vlSelf->TOP__DOT__ps2__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->TOP__DOT__ps2__DOT____Vlvbound_hae012186__0) 
                                        << (IData)(vlSelf->TOP__DOT__ps2__DOT__count))));
                }
                __Vdly__TOP__DOT__ps2__DOT__count = 
                    (0xfU & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ps2__DOT__count)));
            }
        }
    }
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((0U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data0) 
                                                               >> 4U))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data0) 
                                                                 >> 4U)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data0) 
                                                                >> 4U)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data0) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data0) 
                                                              >> 4U)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data0) 
                                                             >> 4U)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data0) 
                                                            >> 4U)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data0) 
                                                           >> 4U)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data0) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data0) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data0) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((((((2U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data0) 
                                                                >> 4U))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->TOP__DOT__data0) 
                                                                  >> 4U)))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data0) 
                                                                 >> 4U)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data0) 
                                                                >> 4U)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data0) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data0) 
                                                              >> 4U)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data0) 
                                                             >> 4U)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data0) 
                                                            >> 4U)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data0) 
                                                           >> 4U)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data0) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data0) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data0) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((0U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data0))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data0)))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((((((2U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data0))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data0)))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                        | (2U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data0) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data0) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data0) 
                                                             >> 4U)))) 
                                                     | (7U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data0) 
                                                            >> 4U)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data0) 
                                                           >> 4U)))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data0) 
                                                          >> 4U)))) 
                                                  | (0xaU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data0) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data0) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                          | (3U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data0) 
                                                                 >> 4U)))) 
                                                         | (4U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data0) 
                                                                >> 4U)))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data0) 
                                                               >> 4U)))) 
                                                       | (6U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data0) 
                                                              >> 4U)))) 
                                                      | (7U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data0) 
                                                             >> 4U)))) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data0) 
                                                            >> 4U)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data0) 
                                                           >> 4U)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data0) 
                                                          >> 4U)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data0) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data0) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                        | (2U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                       | (3U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                      | (4U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                     | (7U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                  | (0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data0)))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                          | (3U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                         | (4U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                       | (6U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                      | (7U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data0)))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                       | (7U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data0) 
                                                              >> 4U)))) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data0) 
                                                             >> 4U)))) 
                                                     | (9U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data0) 
                                                            >> 4U)))) 
                                                    | (0xaU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data0) 
                                                           >> 4U)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data0) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data0) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data0) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data0) 
                                                            >> 4U)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data0) 
                                                           >> 4U)))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data0) 
                                                          >> 4U)))) 
                                                  | (0xcU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data0) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data0) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                       | (7U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                     | (9U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                    | (0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data0)))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                  | (0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data0)))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data0) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data0) 
                                                              >> 4U)))) 
                                                      | (0xaU 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data0) 
                                                             >> 4U)))) 
                                                     | (0xbU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data0) 
                                                            >> 4U)))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data0) 
                                                           >> 4U)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data0) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data0) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data0) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                      | (0xaU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                     | (0xbU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data0)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data0)))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((0U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data1) 
                                                               >> 4U))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data1) 
                                                                 >> 4U)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data1) 
                                                                >> 4U)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data1) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data1) 
                                                              >> 4U)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data1) 
                                                             >> 4U)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data1) 
                                                            >> 4U)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data1) 
                                                           >> 4U)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data1) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data1) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data1) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((((((2U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data1) 
                                                                >> 4U))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->TOP__DOT__data1) 
                                                                  >> 4U)))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data1) 
                                                                 >> 4U)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data1) 
                                                                >> 4U)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data1) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data1) 
                                                              >> 4U)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data1) 
                                                             >> 4U)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data1) 
                                                            >> 4U)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data1) 
                                                           >> 4U)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data1) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data1) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data1) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((0U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data1))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data1)))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((((((2U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data1))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data1)))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                        | (2U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data1) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data1) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data1) 
                                                             >> 4U)))) 
                                                     | (7U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data1) 
                                                            >> 4U)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data1) 
                                                           >> 4U)))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data1) 
                                                          >> 4U)))) 
                                                  | (0xaU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data1) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data1) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                          | (3U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data1) 
                                                                 >> 4U)))) 
                                                         | (4U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data1) 
                                                                >> 4U)))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data1) 
                                                               >> 4U)))) 
                                                       | (6U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data1) 
                                                              >> 4U)))) 
                                                      | (7U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data1) 
                                                             >> 4U)))) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data1) 
                                                            >> 4U)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data1) 
                                                           >> 4U)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data1) 
                                                          >> 4U)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data1) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data1) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                        | (2U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                       | (3U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                      | (4U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                     | (7U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                  | (0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data1)))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                          | (3U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                         | (4U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                       | (6U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                      | (7U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data1)))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                       | (7U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data1) 
                                                              >> 4U)))) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data1) 
                                                             >> 4U)))) 
                                                     | (9U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data1) 
                                                            >> 4U)))) 
                                                    | (0xaU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data1) 
                                                           >> 4U)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data1) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data1) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data1) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data1) 
                                                            >> 4U)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data1) 
                                                           >> 4U)))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data1) 
                                                          >> 4U)))) 
                                                  | (0xcU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data1) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data1) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                       | (7U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                     | (9U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                    | (0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data1)))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                  | (0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data1)))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data1) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data1) 
                                                              >> 4U)))) 
                                                      | (0xaU 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data1) 
                                                             >> 4U)))) 
                                                     | (0xbU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data1) 
                                                            >> 4U)))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data1) 
                                                           >> 4U)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data1) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data1) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data1) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                      | (0xaU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                     | (0xbU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data1)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data1)))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((0U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data2) 
                                                               >> 4U))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data2) 
                                                                 >> 4U)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data2) 
                                                                >> 4U)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data2) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data2) 
                                                              >> 4U)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data2) 
                                                             >> 4U)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data2) 
                                                            >> 4U)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data2) 
                                                           >> 4U)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data2) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data2) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data2) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((((((2U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data2) 
                                                                >> 4U))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->TOP__DOT__data2) 
                                                                  >> 4U)))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data2) 
                                                                 >> 4U)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data2) 
                                                                >> 4U)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data2) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data2) 
                                                              >> 4U)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data2) 
                                                             >> 4U)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data2) 
                                                            >> 4U)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data2) 
                                                           >> 4U)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data2) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data2) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data2) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((0U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data2))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data2)))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((((((2U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data2))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data2)))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                        | (2U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data2) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data2) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data2) 
                                                             >> 4U)))) 
                                                     | (7U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data2) 
                                                            >> 4U)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data2) 
                                                           >> 4U)))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data2) 
                                                          >> 4U)))) 
                                                  | (0xaU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data2) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data2) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                          | (3U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data2) 
                                                                 >> 4U)))) 
                                                         | (4U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data2) 
                                                                >> 4U)))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data2) 
                                                               >> 4U)))) 
                                                       | (6U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data2) 
                                                              >> 4U)))) 
                                                      | (7U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data2) 
                                                             >> 4U)))) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data2) 
                                                            >> 4U)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data2) 
                                                           >> 4U)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data2) 
                                                          >> 4U)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data2) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data2) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                        | (2U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                       | (3U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                      | (4U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                     | (7U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                  | (0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data2)))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                          | (3U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                         | (4U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                       | (6U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                      | (7U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data2)))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                       | (7U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data2) 
                                                              >> 4U)))) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data2) 
                                                             >> 4U)))) 
                                                     | (9U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data2) 
                                                            >> 4U)))) 
                                                    | (0xaU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data2) 
                                                           >> 4U)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data2) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data2) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data2) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data2) 
                                                            >> 4U)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data2) 
                                                           >> 4U)))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data2) 
                                                          >> 4U)))) 
                                                  | (0xcU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data2) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data2) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                       | (7U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                     | (9U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                    | (0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data2)))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                  | (0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data2)))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data2) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data2) 
                                                              >> 4U)))) 
                                                      | (0xaU 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data2) 
                                                             >> 4U)))) 
                                                     | (0xbU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data2) 
                                                            >> 4U)))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data2) 
                                                           >> 4U)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data2) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data2) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data2) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                      | (0xaU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                     | (0xbU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data2)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data2)))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((0U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data3) 
                                                               >> 4U))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data3) 
                                                                 >> 4U)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data3) 
                                                                >> 4U)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data3) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data3) 
                                                              >> 4U)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data3) 
                                                             >> 4U)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data3) 
                                                            >> 4U)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data3) 
                                                           >> 4U)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data3) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data3) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data3) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((((((2U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data3) 
                                                                >> 4U))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->TOP__DOT__data3) 
                                                                  >> 4U)))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data3) 
                                                                 >> 4U)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data3) 
                                                                >> 4U)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data3) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data3) 
                                                              >> 4U)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data3) 
                                                             >> 4U)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data3) 
                                                            >> 4U)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data3) 
                                                           >> 4U)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data3) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data3) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data3) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((0U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data3))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data3)))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((((((2U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data3))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                         | (5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                      | (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data3)))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                        | (2U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data3) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data3) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data3) 
                                                             >> 4U)))) 
                                                     | (7U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data3) 
                                                            >> 4U)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data3) 
                                                           >> 4U)))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data3) 
                                                          >> 4U)))) 
                                                  | (0xaU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data3) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data3) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                          | (3U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->TOP__DOT__data3) 
                                                                 >> 4U)))) 
                                                         | (4U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->TOP__DOT__data3) 
                                                                >> 4U)))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data3) 
                                                               >> 4U)))) 
                                                       | (6U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data3) 
                                                              >> 4U)))) 
                                                      | (7U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data3) 
                                                             >> 4U)))) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data3) 
                                                            >> 4U)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data3) 
                                                           >> 4U)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data3) 
                                                          >> 4U)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data3) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data3) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                        | (2U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                       | (3U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                      | (4U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                     | (7U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                  | (0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data3)))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_5_T_2) 
                                                          | (3U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                         | (4U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                       | (6U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                      | (7U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data3)))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                       | (7U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data3) 
                                                              >> 4U)))) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data3) 
                                                             >> 4U)))) 
                                                     | (9U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data3) 
                                                            >> 4U)))) 
                                                    | (0xaU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data3) 
                                                           >> 4U)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data3) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data3) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data3) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data3) 
                                                            >> 4U)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data3) 
                                                           >> 4U)))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data3) 
                                                          >> 4U)))) 
                                                  | (0xcU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data3) 
                                                         >> 4U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data3) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                       | (7U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                     | (9U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                    | (0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                   | (0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data3)))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_8) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                    | (9U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                  | (0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data3)))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->TOP__DOT__data3) 
                                                               >> 4U)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->TOP__DOT__data3) 
                                                              >> 4U)))) 
                                                      | (0xaU 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->TOP__DOT__data3) 
                                                             >> 4U)))) 
                                                     | (0xbU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TOP__DOT__data3) 
                                                            >> 4U)))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TOP__DOT__data3) 
                                                           >> 4U)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TOP__DOT__data3) 
                                                          >> 4U)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->TOP__DOT__data3) 
                                                         >> 4U)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TOP__DOT__data3) 
                                                        >> 4U)))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((
                                                   ((((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_2) 
                                                        | (6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                      | (0xaU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                     | (0xbU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                  | (0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->TOP__DOT__data3)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__data3)))));
    vlSelf->TOP__DOT__ps2__DOT__count = __Vdly__TOP__DOT__ps2__DOT__count;
    vlSelf->TOP__DOT__ps2__DOT__w_ptr = __Vdly__TOP__DOT__ps2__DOT__w_ptr;
    vlSelf->overflow = __Vdly__overflow;
    vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync = __Vdly__TOP__DOT__ps2__DOT__ps2_clk_sync;
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
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__data3 = 0U;
        vlSelf->TOP__DOT__data2 = 0U;
        vlSelf->TOP__DOT__data1 = 0U;
        vlSelf->TOP__DOT__data0 = 0U;
    } else if (vlSelf->ready) {
        vlSelf->TOP__DOT__data3 = vlSelf->TOP__DOT__data2;
        vlSelf->TOP__DOT__data2 = vlSelf->TOP__DOT__data1;
        vlSelf->TOP__DOT__data1 = vlSelf->TOP__DOT__data0;
        vlSelf->TOP__DOT__data0 = vlSelf->TOP__DOT__ps2__DOT__fifo
            [vlSelf->TOP__DOT__ps2__DOT__r_ptr];
    }
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
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))) 
           | (1U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                           >> 4U))) | (1U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data3) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))) 
           | (2U == (0xfU & (IData)(vlSelf->TOP__DOT__data3))));
    vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                           >> 4U))) | (2U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data3) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__switch[1U] = (0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                                            >> 4U));
    vlSelf->TOP__DOT__switch[0U] = (0xfU & (IData)(vlSelf->TOP__DOT__data3));
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
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))) 
           | (1U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                           >> 4U))) | (1U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data2) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))) 
           | (2U == (0xfU & (IData)(vlSelf->TOP__DOT__data2))));
    vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                           >> 4U))) | (2U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data2) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__switch[3U] = (0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                                            >> 4U));
    vlSelf->TOP__DOT__switch[2U] = (0xfU & (IData)(vlSelf->TOP__DOT__data2));
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
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))) 
           | (1U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                           >> 4U))) | (1U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data1) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))) 
           | (2U == (0xfU & (IData)(vlSelf->TOP__DOT__data1))));
    vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                           >> 4U))) | (2U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data1) 
                                                 >> 4U))));
    vlSelf->TOP__DOT__switch[5U] = (0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                                            >> 4U));
    vlSelf->TOP__DOT__switch[4U] = (0xfU & (IData)(vlSelf->TOP__DOT__data1));
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
    vlSelf->TOP__DOT__ps2__DOT__r_ptr = __Vdly__TOP__DOT__ps2__DOT__r_ptr;
    if (__Vdlyvset__TOP__DOT__ps2__DOT__fifo__v0) {
        vlSelf->TOP__DOT__ps2__DOT__fifo[__Vdlyvdim0__TOP__DOT__ps2__DOT__fifo__v0] 
            = __Vdlyvval__TOP__DOT__ps2__DOT__fifo__v0;
    }
    vlSelf->ready = __Vdly__ready;
    vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & (IData)(vlSelf->TOP__DOT__data0))) 
           | (1U == (0xfU & (IData)(vlSelf->TOP__DOT__data0))));
    vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_5_T_2 
        = ((0U == (0xfU & ((IData)(vlSelf->TOP__DOT__data0) 
                           >> 4U))) | (1U == (0xfU 
                                              & ((IData)(vlSelf->TOP__DOT__data0) 
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
}

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
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTOP___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/TOP.v", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("build/TOP.v", 1, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clr & 0xfeU))) {
        Verilated::overWidthError("clr");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
