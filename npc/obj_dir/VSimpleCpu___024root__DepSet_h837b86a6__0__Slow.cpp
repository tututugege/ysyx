// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu___024root.h"

VL_ATTR_COLD void VSimpleCpu___024root___eval_static(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSimpleCpu___024root___eval_initial(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VSimpleCpu___024root___eval_final(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__stl(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSimpleCpu___024root___eval_phase__stl(VSimpleCpu___024root* vlSelf);

VL_ATTR_COLD void VSimpleCpu___024root___eval_settle(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_settle\n"); );
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
            VSimpleCpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/SimpleCpu.v", 2964, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSimpleCpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__stl(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleCpu___024root___stl_sequent__TOP__0(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ SimpleCpu__DOT___Alu_io_A_T_3;
    SimpleCpu__DOT___Alu_io_A_T_3 = 0;
    CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T = 0;
    CData/*7:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4 = 0;
    SData/*8:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6 = 0;
    CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10 = 0;
    CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21 = 0;
    CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_29;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_29 = 0;
    CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_49;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_49 = 0;
    CData/*4:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_57;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_57 = 0;
    CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0;
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0 = 0;
    CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0;
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0 = 0;
    CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0;
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0 = 0;
    CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0;
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0 = 0;
    CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hdc0fb08b__0;
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hdc0fb08b__0 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_45;
    SimpleCpu__DOT__RF__DOT___GEN_45 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_77;
    SimpleCpu__DOT__RF__DOT___GEN_77 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_90;
    SimpleCpu__DOT__RF__DOT___GEN_90 = 0;
    CData/*2:0*/ SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0;
    SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 = 0;
    CData/*1:0*/ SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0;
    SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0 = 0;
    // Body
    vlSelf->Fetch_PC = vlSelf->SimpleCpu__DOT__PcReg;
    vlSelf->SimpleCpu__DOT__PcInc = ((IData)(4U) + vlSelf->SimpleCpu__DOT__PcReg);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0 
        = ((0x20U & ((~ (vlSelf->Fetch_Inst >> 0x19U)) 
                     << 5U)) | ((0x10U & ((~ (vlSelf->Fetch_Inst 
                                              >> 0x1aU)) 
                                          << 4U)) | 
                                ((8U & ((~ (vlSelf->Fetch_Inst 
                                            >> 0x1bU)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->Fetch_Inst 
                                                         >> 0x1cU)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ 
                                                           (vlSelf->Fetch_Inst 
                                                            >> 0x1dU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelf->Fetch_Inst 
                                                             >> 0x1fU))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2 
        = ((2U & ((~ (vlSelf->Fetch_Inst >> 6U)) << 1U)) 
           | (1U & (~ (vlSelf->Fetch_Inst >> 0xeU))));
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0 
        = ((2U & ((~ (vlSelf->Fetch_Inst >> 0xdU)) 
                  << 1U)) | (1U & (~ (vlSelf->Fetch_Inst 
                                      >> 0xeU))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4 
        = ((0x80U & (vlSelf->Fetch_Inst << 7U)) | (
                                                   (0x40U 
                                                    & (vlSelf->Fetch_Inst 
                                                       << 5U)) 
                                                   | ((0x20U 
                                                       & ((~ 
                                                           (vlSelf->Fetch_Inst 
                                                            >> 2U)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((~ 
                                                              (vlSelf->Fetch_Inst 
                                                               >> 3U)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((~ 
                                                                 (vlSelf->Fetch_Inst 
                                                                  >> 4U)) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((~ 
                                                                    (vlSelf->Fetch_Inst 
                                                                     >> 5U)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((~ 
                                                                       (vlSelf->Fetch_Inst 
                                                                        >> 6U)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (~ 
                                                                        (vlSelf->Fetch_Inst 
                                                                         >> 0xdU))))))))));
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0 
        = ((4U & ((~ (vlSelf->Fetch_Inst >> 6U)) << 2U)) 
           | ((2U & ((~ (vlSelf->Fetch_Inst >> 0xcU)) 
                     << 1U)) | (1U & (~ (vlSelf->Fetch_Inst 
                                         >> 0xeU)))));
    SimpleCpu__DOT__RF__DOT___GEN_77 = ((0xdU == (0x1fU 
                                                  & (vlSelf->Fetch_Inst 
                                                     >> 0x14U)))
                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13
                                         : ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->Fetch_Inst 
                                                 >> 0x14U)))
                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12
                                             : ((0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Fetch_Inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Fetch_Inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Fetch_Inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Fetch_Inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Fetch_Inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Fetch_Inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Fetch_Inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Fetch_Inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Fetch_Inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Fetch_Inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1
                                                           : vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0)))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36 
        = ((8U & ((~ (vlSelf->Fetch_Inst >> 2U)) << 3U)) 
           | ((4U & (vlSelf->Fetch_Inst >> 2U)) | (
                                                   (2U 
                                                    & (vlSelf->Fetch_Inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->Fetch_Inst 
                                                          >> 0xdU))))));
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0 
        = ((2U & (vlSelf->Fetch_Inst >> 0xcU)) | (1U 
                                                  & (~ 
                                                     (vlSelf->Fetch_Inst 
                                                      >> 0xeU))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21 
        = ((4U & ((~ (vlSelf->Fetch_Inst >> 4U)) << 2U)) 
           | ((2U & (vlSelf->Fetch_Inst >> 4U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Fetch_Inst 
                                                       >> 6U)))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T 
        = ((2U & ((~ (vlSelf->Fetch_Inst >> 2U)) << 1U)) 
           | (1U & (~ (vlSelf->Fetch_Inst >> 5U))));
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0 
        = ((2U & (vlSelf->Fetch_Inst >> 0xcU)) | (1U 
                                                  & (vlSelf->Fetch_Inst 
                                                     >> 0xeU)));
    SimpleCpu__DOT__RF__DOT___GEN_45 = ((0xdU == (0x1fU 
                                                  & (vlSelf->Fetch_Inst 
                                                     >> 0xfU)))
                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13
                                         : ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->Fetch_Inst 
                                                 >> 0xfU)))
                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12
                                             : ((0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Fetch_Inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Fetch_Inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Fetch_Inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Fetch_Inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Fetch_Inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Fetch_Inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Fetch_Inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Fetch_Inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Fetch_Inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Fetch_Inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1
                                                           : vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0)))))))))))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_29 
        = ((4U & ((~ (vlSelf->Fetch_Inst >> 2U)) << 2U)) 
           | ((2U & (vlSelf->Fetch_Inst >> 5U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Fetch_Inst 
                                                       >> 0xeU)))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_49 
        = ((4U & ((~ (vlSelf->Fetch_Inst >> 2U)) << 2U)) 
           | ((2U & (vlSelf->Fetch_Inst >> 5U)) | (1U 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xeU))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8 
        = ((2U & (vlSelf->Fetch_Inst >> 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Fetch_Inst 
                                                    >> 4U))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27 
        = ((4U & vlSelf->Fetch_Inst) | ((2U & (vlSelf->Fetch_Inst 
                                               >> 3U)) 
                                        | (1U & (vlSelf->Fetch_Inst 
                                                 >> 5U))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10 
        = ((2U & (vlSelf->Fetch_Inst >> 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Fetch_Inst 
                                                    >> 5U))));
    vlSelf->Memory_MemWrite = ((IData)(((0x23U == (0x3fU 
                                                   & vlSelf->Fetch_Inst)) 
                                        & (7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                               | (IData)(((0x23U == 
                                           (0x7fU & vlSelf->Fetch_Inst)) 
                                          & (3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0)))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6 
        = ((0x100U & (vlSelf->Fetch_Inst << 8U)) | 
           ((0x80U & (vlSelf->Fetch_Inst << 6U)) | 
            ((0x40U & ((~ (vlSelf->Fetch_Inst >> 2U)) 
                       << 6U)) | ((0x20U & ((~ (vlSelf->Fetch_Inst 
                                                >> 3U)) 
                                            << 5U)) 
                                  | ((0x10U & ((~ (vlSelf->Fetch_Inst 
                                                   >> 4U)) 
                                               << 4U)) 
                                     | ((8U & ((~ (vlSelf->Fetch_Inst 
                                                   >> 5U)) 
                                               << 3U)) 
                                        | (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))))));
    SimpleCpu__DOT__RF__DOT___GEN_90 = ((0x1aU == (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0x14U)))
                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & (vlSelf->Fetch_Inst 
                                                    >> 0x14U)))
                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25
                                             : ((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Fetch_Inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Fetch_Inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Fetch_Inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Fetch_Inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Fetch_Inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Fetch_Inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Fetch_Inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Fetch_Inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Fetch_Inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Fetch_Inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14
                                                           : SimpleCpu__DOT__RF__DOT___GEN_77)))))))))))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_57 
        = ((0x10U & ((~ (vlSelf->Fetch_Inst >> 2U)) 
                     << 4U)) | ((8U & (vlSelf->Fetch_Inst 
                                       >> 1U)) | ((4U 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xaU)) 
                                                  | (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0))));
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_58 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Fetch_Inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Fetch_Inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Fetch_Inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Fetch_Inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Fetch_Inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Fetch_Inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Fetch_Inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Fetch_Inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Fetch_Inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Fetch_Inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Fetch_Inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->Fetch_Inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14
                                                             : SimpleCpu__DOT__RF__DOT___GEN_45)))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_11 
        = (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_29))) 
            << 5U) | (((IData)((0x3000U == (0x3014U 
                                            & vlSelf->Fetch_Inst))) 
                       << 4U) | (((IData)(((0x1000U 
                                            == (0x1004U 
                                                & vlSelf->Fetch_Inst)) 
                                           & (3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0)))) 
                                  << 3U) | (((IData)(
                                                     (0x5010U 
                                                      == 
                                                      (0x40007014U 
                                                       & vlSelf->Fetch_Inst))) 
                                             << 2U) 
                                            | (((IData)(
                                                        ((0U 
                                                          == 
                                                          (0x1004U 
                                                           & vlSelf->Fetch_Inst)) 
                                                         & (3U 
                                                            == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0x40000030U 
                                                          == 
                                                          (0x40001034U 
                                                           & vlSelf->Fetch_Inst))))))));
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hdc0fb08b__0 
        = (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_29))) 
            << 1U) | (7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_49)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_18 
        = (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T))) 
            << 3U) | (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10))) 
                       << 2U) | (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21))) 
                                  << 1U) | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_28 
        = (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10))) 
            << 2U) | ((2U & (vlSelf->Fetch_Inst >> 2U)) 
                      | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_21 
        = (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8))) 
            << 1U) | (3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_7 
        = (((IData)((0xffU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4))) 
            << 9U) | (((IData)((0x1ffU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6))) 
                       << 8U) | (((IData)((0x13U == 
                                           (0x107bU 
                                            & vlSelf->Fetch_Inst))) 
                                  << 7U) | (((IData)(
                                                     ((0x13U 
                                                       == 
                                                       (0x705bU 
                                                        & vlSelf->Fetch_Inst)) 
                                                      & (0x3fU 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0)))) 
                                             << 6U) 
                                            | (((IData)(
                                                        (0x13U 
                                                         == 
                                                         (0xfe00005bU 
                                                          & vlSelf->Fetch_Inst))) 
                                                << 5U) 
                                               | (((IData)(
                                                           (0x17U 
                                                            == 
                                                            (0x5fU 
                                                             & vlSelf->Fetch_Inst))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              ((0x67U 
                                                                == 
                                                                (0x1077U 
                                                                 & vlSelf->Fetch_Inst)) 
                                                               & (3U 
                                                                  == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0)))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->Fetch_Inst))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0x2013U 
                                                                     == 
                                                                     (0x207bU 
                                                                      & vlSelf->Fetch_Inst))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     ((0x5013U 
                                                                       == 
                                                                       (0x705bU 
                                                                        & vlSelf->Fetch_Inst)) 
                                                                      & (0x3fU 
                                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0)))))))))))));
    vlSelf->Memory_MemRead = ((0xffU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4)) 
                              | (0x1ffU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6)));
    vlSelf->Memory_MemWriteData = ((0U == (0x1fU & 
                                           (vlSelf->Fetch_Inst 
                                            >> 0x14U)))
                                    ? 0U : ((0x1fU 
                                             == (0x1fU 
                                                 & (vlSelf->Fetch_Inst 
                                                    >> 0x14U)))
                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Fetch_Inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30
                                                 : 
                                                ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Fetch_Inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Fetch_Inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27
                                                    : SimpleCpu__DOT__RF__DOT___GEN_90))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15 
        = (((IData)((0x4010U == (0x5014U & vlSelf->Fetch_Inst))) 
            << 1U) | (0x1fU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_57)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13 
        = (((IData)(((0x10U == (0x14U & vlSelf->Fetch_Inst)) 
                     & (3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0)))) 
            << 3U) | (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_49))) 
                       << 2U) | (((IData)((0x1fU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_57))) 
                                  << 1U) | (IData)(
                                                   (0x40001010U 
                                                    == 
                                                    (0x40001014U 
                                                     & vlSelf->Fetch_Inst))))));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_11))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26 
        = (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21))) 
            << 2U) | (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hdc0fb08b__0));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24 
        = (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T))) 
            << 3U) | (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8))) 
                       << 2U) | (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hdc0fb08b__0)));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2 
        = (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_18)));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_21)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_9 
        = (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T))) 
            << 6U) | (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2))) 
                       << 5U) | (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10))) 
                                  << 4U) | (((IData)(
                                                     (7U 
                                                      == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36))) 
                                                << 2U) 
                                               | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))))));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_11))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36)));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp 
        = (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36))) 
            << 3U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
                       << 2U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
                                  << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_11)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_28))) 
            << 2U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                       << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24))));
    SimpleCpu__DOT___Alu_io_A_T_3 = ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                      ? vlSelf->SimpleCpu__DOT__PcReg
                                      : ((0U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                          ? ((0U == 
                                              (0x1fU 
                                               & (vlSelf->Fetch_Inst 
                                                  >> 0xfU)))
                                              ? 0U : 
                                             ((0x1fU 
                                               == (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xfU)))
                                               ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31
                                               : ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Fetch_Inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Fetch_Inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Fetch_Inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Fetch_Inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27
                                                      : vlSelf->SimpleCpu__DOT__RF__DOT___GEN_58))))))
                                          : 0U));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8 
        = ((4U & ((~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                        >> 1U)) << 1U)) 
                             | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))));
    SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0 
        = ((2U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                      >> 2U)) << 1U)) | (1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                                  >> 3U))));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14 
        = ((4U & ((~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                        >> 1U)) << 1U)) 
                             | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36))));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm = 
        ((4U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
          ? (0xfffff000U & vlSelf->Fetch_Inst) : ((5U 
                                                   == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
                                                   ? 
                                                  ((((vlSelf->Fetch_Inst 
                                                      >> 0x1fU)
                                                      ? 0xfffU
                                                      : 0U) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->Fetch_Inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->Fetch_Inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->Fetch_Inst 
                                                               >> 0x14U)))))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
                                                    ? 
                                                   ((((vlSelf->Fetch_Inst 
                                                       >> 0x1fU)
                                                       ? 0xfffffU
                                                       : 0U) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->Fetch_Inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->Fetch_Inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->Fetch_Inst 
                                                                >> 7U)))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
                                                     ? 
                                                    ((((vlSelf->Fetch_Inst 
                                                        >> 0x1fU)
                                                        ? 0xfffffU
                                                        : 0U) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->Fetch_Inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->Fetch_Inst 
                                                              >> 7U))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
                                                      ? 
                                                     ((((vlSelf->Fetch_Inst 
                                                         >> 0x1fU)
                                                         ? 0xfffffU
                                                         : 0U) 
                                                       << 0xcU) 
                                                      | (vlSelf->Fetch_Inst 
                                                         >> 0x14U))
                                                      : 0U)))));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
        = ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
            ? 0U : SimpleCpu__DOT___Alu_io_A_T_3);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 9U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0xaU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0xbU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0xcU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0xdU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0xeU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x19U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x1aU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x1bU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x1cU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x1dU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x1eU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & SimpleCpu__DOT___Alu_io_A_T_3);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 1U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 2U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 3U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 4U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 5U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 6U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x11U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x12U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x13U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x14U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x15U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x16U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 7U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 8U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0xfU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x10U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x17U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x18U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (SimpleCpu__DOT___Alu_io_A_T_3 >> 0x1fU));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4 
        = ((8U & ((~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)) 
                  << 3U)) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
                              << 2U) | (IData)(SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0)));
    SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 
        = ((4U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                      >> 1U)) << 2U)) | (IData)(SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0));
    vlSelf->SimpleCpu__DOT__PcBr = (vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                    + vlSelf->SimpleCpu__DOT__PcReg);
    vlSelf->SimpleCpu__DOT__Alu_io_B = ((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                         ? (0x1fU & 
                                            (vlSelf->Fetch_Inst 
                                             >> 0x14U))
                                         : ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                             ? 4U : 
                                            ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                              ? vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm
                                              : vlSelf->Memory_MemWriteData)));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1 
        = ((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18)) 
           & ((~ (IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
              & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_11))) 
            << 3U) | (IData)(SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T 
        = ((8U & ((~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)) 
                  << 3U)) | (IData)(SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB = (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                                ^ (
                                                   (0xfU 
                                                    == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T))
                                                    ? 0U
                                                    : 0xffffffffU));
    vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
        = (0x3ffffffffULL & ((0x1ffffffffULL & ((QData)((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din)) 
                                                + (QData)((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB)))) 
                             + (QData)((IData)((1U 
                                                & (~ (IData)(
                                                             (0xfU 
                                                              == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))))))));
}

VL_ATTR_COLD void VSimpleCpu___024root___eval_triggers__stl(VSimpleCpu___024root* vlSelf);
VL_ATTR_COLD void VSimpleCpu___024root___eval_stl(VSimpleCpu___024root* vlSelf);

VL_ATTR_COLD bool VSimpleCpu___024root___eval_phase__stl(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSimpleCpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSimpleCpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__ico(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__act(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__nba(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleCpu___024root___ctor_var_reset(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Memory_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->Memory_MemRead = VL_RAND_RESET_I(1);
    vlSelf->Memory_MemAddr = VL_RAND_RESET_I(2);
    vlSelf->Memory_MemReadData = VL_RAND_RESET_I(32);
    vlSelf->Memory_MemWriteData = VL_RAND_RESET_I(32);
    vlSelf->Memory_MemWriteStrb = VL_RAND_RESET_I(4);
    vlSelf->Fetch_PC = VL_RAND_RESET_I(32);
    vlSelf->Fetch_Inst = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__RF_io_wdata = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu_io_B = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu_io_Result = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__PcReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__PcInc = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__PcBr = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_3 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_5 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_7 = VL_RAND_RESET_I(10);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_9 = VL_RAND_RESET_I(7);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_11 = VL_RAND_RESET_I(6);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_18 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_21 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_28 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0 = 0;
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_58 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 = VL_RAND_RESET_Q(34);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
