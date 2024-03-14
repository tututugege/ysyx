// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu___024root.h"

VL_INLINE_OPT void VSimpleCpu___024root___ico_sequent__TOP__0(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ SimpleCpu__DOT___Alu_io_A_T_3;
    SimpleCpu__DOT___Alu_io_A_T_3 = 0;
    CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T = 0;
    CData/*7:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3 = 0;
    SData/*8:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5 = 0;
    CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9 = 0;
    CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20 = 0;
    CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28 = 0;
    CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48 = 0;
    CData/*4:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56;
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56 = 0;
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
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_58;
    SimpleCpu__DOT__RF__DOT___GEN_58 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_77;
    SimpleCpu__DOT__RF__DOT___GEN_77 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_90;
    SimpleCpu__DOT__RF__DOT___GEN_90 = 0;
    CData/*2:0*/ SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0;
    SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 = 0;
    CData/*1:0*/ SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0;
    SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0 = 0;
    // Body
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0 
        = ((0x40U & ((~ (vlSelf->Fetch_Inst >> 0x19U)) 
                     << 6U)) | ((0x20U & ((~ (vlSelf->Fetch_Inst 
                                              >> 0x1aU)) 
                                          << 5U)) | 
                                ((0x10U & ((~ (vlSelf->Fetch_Inst 
                                               >> 0x1bU)) 
                                           << 4U)) 
                                 | ((8U & ((~ (vlSelf->Fetch_Inst 
                                               >> 0x1cU)) 
                                           << 3U)) 
                                    | ((4U & ((~ (vlSelf->Fetch_Inst 
                                                  >> 0x1dU)) 
                                              << 2U)) 
                                       | ((2U & ((~ 
                                                  (vlSelf->Fetch_Inst 
                                                   >> 0x1eU)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelf->Fetch_Inst 
                                                    >> 0x1fU)))))))));
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0 
        = ((2U & ((~ (vlSelf->Fetch_Inst >> 0xdU)) 
                  << 1U)) | (1U & (~ (vlSelf->Fetch_Inst 
                                      >> 0xeU))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3 
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35 
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
    SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0 
        = ((4U & ((~ (vlSelf->Fetch_Inst >> 6U)) << 2U)) 
           | ((2U & ((~ (vlSelf->Fetch_Inst >> 0xcU)) 
                     << 1U)) | (1U & (~ (vlSelf->Fetch_Inst 
                                         >> 0xeU)))));
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
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20 
        = ((4U & ((~ (vlSelf->Fetch_Inst >> 4U)) << 2U)) 
           | ((2U & (vlSelf->Fetch_Inst >> 4U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Fetch_Inst 
                                                       >> 6U)))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T 
        = ((2U & ((~ (vlSelf->Fetch_Inst >> 2U)) << 1U)) 
           | (1U & (~ (vlSelf->Fetch_Inst >> 5U))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28 
        = ((4U & ((~ (vlSelf->Fetch_Inst >> 2U)) << 2U)) 
           | ((2U & (vlSelf->Fetch_Inst >> 5U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Fetch_Inst 
                                                       >> 0xeU)))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48 
        = ((4U & ((~ (vlSelf->Fetch_Inst >> 2U)) << 2U)) 
           | ((2U & (vlSelf->Fetch_Inst >> 5U)) | (1U 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xeU))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26 
        = ((4U & vlSelf->Fetch_Inst) | ((2U & (vlSelf->Fetch_Inst 
                                               >> 3U)) 
                                        | (1U & (vlSelf->Fetch_Inst 
                                                 >> 5U))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9 
        = ((2U & (vlSelf->Fetch_Inst >> 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Fetch_Inst 
                                                    >> 5U))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7 
        = ((4U & vlSelf->Fetch_Inst) | ((2U & ((~ (vlSelf->Fetch_Inst 
                                                   >> 3U)) 
                                               << 1U)) 
                                        | (1U & (~ 
                                                 (vlSelf->Fetch_Inst 
                                                  >> 4U)))));
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
    vlSelf->Halt = (IData)(((0x100073U == (0x1ffffffU 
                                           & vlSelf->Fetch_Inst)) 
                            & (0x7fU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0))));
    vlSelf->Memory_MemWrite = ((IData)(((0x23U == (0x3fU 
                                                   & vlSelf->Fetch_Inst)) 
                                        & (7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                               | (IData)(((0x23U == 
                                           (0x7fU & vlSelf->Fetch_Inst)) 
                                          & (3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0)))));
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5 
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
    SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56 
        = ((0x10U & ((~ (vlSelf->Fetch_Inst >> 2U)) 
                     << 4U)) | ((8U & (vlSelf->Fetch_Inst 
                                       >> 1U)) | ((4U 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xaU)) 
                                                  | (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0))));
    SimpleCpu__DOT__RF__DOT___GEN_58 = ((0x1aU == (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xfU)))
                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & (vlSelf->Fetch_Inst 
                                                    >> 0xfU)))
                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25
                                             : ((0x18U 
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13 
        = (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28))) 
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
        = (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28))) 
            << 1U) | (7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_20 
        = (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T))) 
            << 3U) | (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9))) 
                       << 2U) | (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20))) 
                                  << 1U) | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31 
        = (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9))) 
            << 2U) | ((2U & (vlSelf->Fetch_Inst >> 2U)) 
                      | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_22 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
            << 1U) | (1U & (vlSelf->Fetch_Inst >> 3U)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
            << 2U) | (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9))) 
                       << 1U) | (1U & (vlSelf->Fetch_Inst 
                                       >> 3U))));
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8 
        = (((IData)((0xffU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3))) 
            << 9U) | (((IData)((0x1ffU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5))) 
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
                                                        ((0x13U 
                                                          == 
                                                          (0x5bU 
                                                           & vlSelf->Fetch_Inst)) 
                                                         & (0x7fU 
                                                            == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0)))) 
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
    vlSelf->Memory_MemRead = ((0xffU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3)) 
                              | (0x1ffU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17 
        = (((IData)((0x4010U == (0x5014U & vlSelf->Fetch_Inst))) 
            << 1U) | (0x1fU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15 
        = (((IData)(((0x10U == (0x14U & vlSelf->Fetch_Inst)) 
                     & (3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0)))) 
            << 3U) | (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48))) 
                       << 2U) | (((IData)((0x1fU == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56))) 
                                  << 1U) | (IData)(
                                                   (0x40001010U 
                                                    == 
                                                    (0x40001014U 
                                                     & vlSelf->Fetch_Inst))))));
    vlSelf->SimpleCpu__DOT__RF_io_rdata1 = ((0U == 
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
                                                     : SimpleCpu__DOT__RF__DOT___GEN_58))))));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29 
        = (((IData)((7U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20))) 
            << 2U) | (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hdc0fb08b__0));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10 
        = ((4U & (vlSelf->Fetch_Inst >> 1U)) | (IData)(SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hdc0fb08b__0));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_22))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_20)));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35)));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_27 
        = (((IData)((3U == (IData)(SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T))) 
            << 4U) | (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
                       << 3U) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10)));
    SimpleCpu__DOT___Alu_io_A_T_3 = ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                      ? vlSelf->SimpleCpu__DOT__PcReg
                                      : ((0U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                          ? vlSelf->SimpleCpu__DOT__RF_io_rdata1
                                          : 0U));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
        = (((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31))) 
              << 9U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29))) 
                         << 8U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_27))) 
                                    << 7U) | (((IData)(
                                                       (7U 
                                                        == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26))) 
                                               << 6U) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24))) 
                                                  << 5U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_22))) 
                                                     << 4U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_20))) 
                                                        << 3U) 
                                                       | (((IData)(
                                                                   (0xfU 
                                                                    == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35))) 
                                                           << 2U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))) 
                                                              << 1U) 
                                                             | (0U 
                                                                != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))))))))))) 
            << 0xaU) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
                         << 9U) | (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
                                    << 8U) | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                               << 7U) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->Memory_MemRead) 
                                                     << 5U) 
                                                    | ((0x10U 
                                                        & ((~ 
                                                            (vlSelf->Fetch_Inst 
                                                             >> 0xeU)) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelf->Memory_MemWrite) 
                                                           << 3U) 
                                                          | ((6U 
                                                              & (vlSelf->Fetch_Inst 
                                                                 >> 0xbU)) 
                                                             | (IData)(vlSelf->Halt))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31))) 
            << 2U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29))) 
                       << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_27))));
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
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                      >> 9U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                                  >> 0xaU)) 
                                                << 1U)) 
                                         | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))));
    SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0 
        = ((2U & ((~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                      >> 0xbU)) << 1U)) | (1U & (~ 
                                                 (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                                  >> 0xcU))));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                      >> 9U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                                  >> 0xaU)) 
                                                << 1U)) 
                                         | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35))));
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
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                      >> 9U)) << 3U)) | (((IData)((0U 
                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
                                          << 2U) | (IData)(SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0)));
    SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                      >> 0xaU)) << 2U)) | (IData)(SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1 
        = ((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18)) 
           & ((~ (IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
              & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)));
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
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 3U) | (IData)(SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                      >> 9U)) << 3U)) | (IData)(SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
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

void VSimpleCpu___024root___eval_triggers__ico(VSimpleCpu___024root* vlSelf);
void VSimpleCpu___024root___eval_ico(VSimpleCpu___024root* vlSelf);

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

VL_INLINE_OPT void VSimpleCpu___024root___nba_sequent__TOP__0(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ SimpleCpu__DOT___Alu_io_A_T_3;
    SimpleCpu__DOT___Alu_io_A_T_3 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_45;
    SimpleCpu__DOT__RF__DOT___GEN_45 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_58;
    SimpleCpu__DOT__RF__DOT___GEN_58 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_77;
    SimpleCpu__DOT__RF__DOT___GEN_77 = 0;
    IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_90;
    SimpleCpu__DOT__RF__DOT___GEN_90 = 0;
    // Body
    vlSelf->SimpleCpu__DOT__PcReg = ((IData)(vlSelf->reset)
                                      ? 0x80000000U
                                      : ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))
                                          ? vlSelf->SimpleCpu__DOT__RF_io_rdata1
                                          : ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))
                                              ? vlSelf->SimpleCpu__DOT__PcBr
                                              : vlSelf->SimpleCpu__DOT__PcInc)));
    if ((IData)(((0xf00U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xe80U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xf80U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xd80U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xe00U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xb80U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x700U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x780U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x800U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x880U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x900U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x980U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xa00U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xa80U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xb00U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xc00U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xc80U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xd00U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x680U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x600U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x480U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x400U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x380U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x300U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x580U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x100U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x280U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x80U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x180U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x200U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x500U == (0xf80U & vlSelf->Fetch_Inst)) 
                 & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    vlSelf->Fetch_PC = vlSelf->SimpleCpu__DOT__PcReg;
    vlSelf->SimpleCpu__DOT__PcInc = ((IData)(4U) + vlSelf->SimpleCpu__DOT__PcReg);
    vlSelf->SimpleCpu__DOT__PcBr = (vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                    + vlSelf->SimpleCpu__DOT__PcReg);
    vlSelf->Ret = vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10;
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
    SimpleCpu__DOT__RF__DOT___GEN_58 = ((0x1aU == (0x1fU 
                                                   & (vlSelf->Fetch_Inst 
                                                      >> 0xfU)))
                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & (vlSelf->Fetch_Inst 
                                                    >> 0xfU)))
                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25
                                             : ((0x18U 
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
    vlSelf->SimpleCpu__DOT__RF_io_rdata1 = ((0U == 
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
                                                     : SimpleCpu__DOT__RF__DOT___GEN_58))))));
    vlSelf->SimpleCpu__DOT__Alu_io_B = ((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                         ? (0x1fU & 
                                            (vlSelf->Fetch_Inst 
                                             >> 0x14U))
                                         : ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                             ? 4U : 
                                            ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                              ? vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm
                                              : vlSelf->Memory_MemWriteData)));
    SimpleCpu__DOT___Alu_io_A_T_3 = ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                      ? vlSelf->SimpleCpu__DOT__PcReg
                                      : ((0U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                          ? vlSelf->SimpleCpu__DOT__RF_io_rdata1
                                          : 0U));
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
}

VL_INLINE_OPT void VSimpleCpu___024root___nba_sequent__TOP__1(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1 
        = ((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18)) 
           & ((~ (IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
              & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)));
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
            VL_FATAL_MT("build/SimpleCpu.v", 3000, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("build/SimpleCpu.v", 3000, "", "NBA region did not converge.");
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
                VL_FATAL_MT("build/SimpleCpu.v", 3000, "", "Active region did not converge.");
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
