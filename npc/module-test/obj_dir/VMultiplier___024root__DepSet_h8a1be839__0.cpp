// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiplier.h for the primary calling header

#include "VMultiplier__pch.h"
#include "VMultiplier___024root.h"

VL_INLINE_OPT void VMultiplier___024root___ico_sequent__TOP__0(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0 
        = (1U & ((~ (vlSelf->io_y >> 0x1fU)) | (IData)(vlSelf->io_ySigned)));
    vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0 
        = ((6U == (vlSelf->io_y >> 0x1dU)) | (5U == 
                                              (vlSelf->io_y 
                                               >> 0x1dU)));
    vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0 
        = ((6U == (7U & (vlSelf->io_y >> 0x1bU))) | 
           (5U == (7U & (vlSelf->io_y >> 0x1bU))));
    vlSelf->Multiplier__DOT____VdfgTmp_ha690227c__0 
        = ((6U == (7U & (vlSelf->io_y >> 5U))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 5U))));
    vlSelf->Multiplier__DOT____VdfgTmp_h5be92e1d__0 
        = ((6U == (7U & (vlSelf->io_y >> 0x19U))) | 
           (5U == (7U & (vlSelf->io_y >> 0x19U))));
    vlSelf->Multiplier__DOT____VdfgTmp_hb76a2bdc__0 
        = ((6U == (7U & (vlSelf->io_y >> 0x17U))) | 
           (5U == (7U & (vlSelf->io_y >> 0x17U))));
    vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0 
        = ((6U == (7U & (vlSelf->io_y >> 0xdU))) | 
           (5U == (7U & (vlSelf->io_y >> 0xdU))));
    vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0 
        = ((6U == (7U & (vlSelf->io_y >> 0x15U))) | 
           (5U == (7U & (vlSelf->io_y >> 0x15U))));
    vlSelf->Multiplier__DOT____VdfgTmp_h557bf8db__0 
        = ((6U == (7U & (vlSelf->io_y >> 1U))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 1U))));
    vlSelf->Multiplier__DOT____VdfgTmp_h5102e58c__0 
        = ((6U == (7U & (vlSelf->io_y >> 7U))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 7U))));
    vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0 
        = ((6U == (7U & (vlSelf->io_y >> 3U))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 3U))));
    vlSelf->Multiplier__DOT____VdfgTmp_ha28613e5__0 
        = ((6U == (7U & (vlSelf->io_y >> 0x11U))) | 
           (5U == (7U & (vlSelf->io_y >> 0x11U))));
    vlSelf->Multiplier__DOT____VdfgTmp_h5feb7463__0 
        = ((6U == (7U & (vlSelf->io_y >> 0xfU))) | 
           (5U == (7U & (vlSelf->io_y >> 0xfU))));
    vlSelf->Multiplier__DOT____VdfgTmp_h514988d4__0 
        = ((6U == (7U & (vlSelf->io_y >> 9U))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 9U))));
    vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0 
        = ((6U == (7U & (vlSelf->io_y >> 0x13U))) | 
           (5U == (7U & (vlSelf->io_y >> 0x13U))));
    vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0 
        = ((6U == (7U & (vlSelf->io_y >> 0xbU))) | 
           (5U == (7U & (vlSelf->io_y >> 0xbU))));
    vlSelf->Multiplier__DOT__extX = (((QData)((IData)(
                                                      ((IData)(vlSelf->io_xSigned) 
                                                       & (vlSelf->io_x 
                                                          >> 0x1fU)))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->io_x)));
    vlSelf->Multiplier__DOT___ppTemp_T_223 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (vlSelf->io_y 
                                                    >> 0x1dU))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (vlSelf->io_y 
                                                     >> 0x1dU))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (vlSelf->io_y 
                                                       >> 0x1dU)) 
                                                     | (1U 
                                                        == 
                                                        (vlSelf->io_y 
                                                         >> 0x1dU)))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_209 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0x1bU)))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_y 
                                                        >> 0x1bU)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0x1bU))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_y 
                                                            >> 0x1bU))))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_55 = (0x1ffffffffULL 
                                             & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha690227c__0)
                                                 ? 
                                                (~ vlSelf->Multiplier__DOT__extX)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 5U)))
                                                  ? 
                                                 VL_SHIFTL_QQI(33,33,32, 
                                                               (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 5U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->io_x)) 
                                                   << 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_y 
                                                         >> 5U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_y 
                                                           >> 5U))))
                                                    ? vlSelf->Multiplier__DOT__extX
                                                    : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_195 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5be92e1d__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0x19U)))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_y 
                                                        >> 0x19U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0x19U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_y 
                                                            >> 0x19U))))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_181 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_hb76a2bdc__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_y 
                                                        >> 0x17U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0x17U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_y 
                                                            >> 0x17U))))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_111 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0xdU)))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_y 
                                                        >> 0xdU)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0xdU))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_y 
                                                            >> 0xdU))))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_167 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0x15U)))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_y 
                                                        >> 0x15U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0x15U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_y 
                                                            >> 0x15U))))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_27 = (0x1ffffffffULL 
                                             & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h557bf8db__0)
                                                 ? 
                                                (~ vlSelf->Multiplier__DOT__extX)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 1U)))
                                                  ? 
                                                 VL_SHIFTL_QQI(33,33,32, 
                                                               (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 1U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->io_x)) 
                                                   << 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_y 
                                                         >> 1U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_y 
                                                           >> 1U))))
                                                    ? vlSelf->Multiplier__DOT__extX
                                                    : 0ULL)))));
    vlSelf->Multiplier__DOT__casez_tmp = ((0U == (3U 
                                                  & vlSelf->io_y))
                                           ? 0ULL : 
                                          (0x1ffffffffULL 
                                           & ((1U == 
                                               (3U 
                                                & vlSelf->io_y))
                                               ? vlSelf->Multiplier__DOT__extX
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->io_y))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  (~ vlSelf->Multiplier__DOT__extX)))));
    vlSelf->Multiplier__DOT___ppTemp_T_69 = (0x1ffffffffULL 
                                             & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5102e58c__0)
                                                 ? 
                                                (~ vlSelf->Multiplier__DOT__extX)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 7U)))
                                                  ? 
                                                 VL_SHIFTL_QQI(33,33,32, 
                                                               (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 7U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->io_x)) 
                                                   << 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_y 
                                                         >> 7U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_y 
                                                           >> 7U))))
                                                    ? vlSelf->Multiplier__DOT__extX
                                                    : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_139 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha28613e5__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0x11U)))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_y 
                                                        >> 0x11U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0x11U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_y 
                                                            >> 0x11U))))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_41 = (0x1ffffffffULL 
                                             & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0)
                                                 ? 
                                                (~ vlSelf->Multiplier__DOT__extX)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 3U)))
                                                  ? 
                                                 VL_SHIFTL_QQI(33,33,32, 
                                                               (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 3U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->io_x)) 
                                                   << 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_y 
                                                         >> 3U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_y 
                                                           >> 3U))))
                                                    ? vlSelf->Multiplier__DOT__extX
                                                    : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_125 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5feb7463__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0xfU)))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_y 
                                                        >> 0xfU)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0xfU))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_y 
                                                            >> 0xfU))))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_153 = (0x1ffffffffULL 
                                              & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0)
                                                  ? 
                                                 (~ vlSelf->Multiplier__DOT__extX)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0x13U)))
                                                   ? 
                                                  VL_SHIFTL_QQI(33,33,32, 
                                                                (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_y 
                                                        >> 0x13U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->io_x)) 
                                                    << 1U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0x13U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_y 
                                                            >> 0x13U))))
                                                     ? vlSelf->Multiplier__DOT__extX
                                                     : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_83 = (0x1ffffffffULL 
                                             & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h514988d4__0)
                                                 ? 
                                                (~ vlSelf->Multiplier__DOT__extX)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 9U)))
                                                  ? 
                                                 VL_SHIFTL_QQI(33,33,32, 
                                                               (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 9U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->io_x)) 
                                                   << 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_y 
                                                         >> 9U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_y 
                                                           >> 9U))))
                                                    ? vlSelf->Multiplier__DOT__extX
                                                    : 0ULL)))));
    vlSelf->Multiplier__DOT___ppTemp_T_97 = (0x1ffffffffULL 
                                             & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0)
                                                 ? 
                                                (~ vlSelf->Multiplier__DOT__extX)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_y 
                                                      >> 0xbU)))
                                                  ? 
                                                 VL_SHIFTL_QQI(33,33,32, 
                                                               (~ vlSelf->Multiplier__DOT__extX), 1U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_y 
                                                       >> 0xbU)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->io_x)) 
                                                   << 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_y 
                                                         >> 0xbU))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_y 
                                                           >> 0xbU))))
                                                    ? vlSelf->Multiplier__DOT__extX
                                                    : 0ULL)))));
    vlSelf->__VdfgTmp_hab77e2e0__0 = (1U & (~ ((IData)(vlSelf->io_xSigned)
                                                ? (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                           >> 0x20U))
                                                : (
                                                   (~ (IData)(
                                                              (0x60000000U 
                                                               == 
                                                               (0x60000000U 
                                                                & vlSelf->io_y)))) 
                                                   & (vlSelf->io_y 
                                                      >> 0x1fU)))));
    vlSelf->Multiplier__DOT___c32_15_io_out = (3U & 
                                               ((IData)(1U) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                               >> 0x20U))) 
                                                   + 
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x1eU))))));
    vlSelf->Multiplier__DOT___c22_12_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                            >> 0x19U))) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                      << 1U) 
                                                                     & (vlSelf->io_x 
                                                                        >> 0x16U))) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                                               >> 0x19U)))), 1U)));
    vlSelf->Multiplier__DOT___c22_13_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                            >> 0x1aU))) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                      << 1U) 
                                                                     & (vlSelf->io_x 
                                                                        >> 0x17U))) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                                               >> 0x1aU)))), 1U)));
    vlSelf->Multiplier__DOT___c22_9_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                           >> 0xaU))) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((2U 
                                                                 & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                     << 1U) 
                                                                    & (vlSelf->io_x 
                                                                       >> 7U))) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                                              >> 0xaU)))), 1U)));
    vlSelf->Multiplier__DOT___c22_8_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                           >> 9U))) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((2U 
                                                                 & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                     << 1U) 
                                                                    & (vlSelf->io_x 
                                                                       >> 6U))) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                                              >> 9U)))), 1U)));
    vlSelf->Multiplier__DOT___c22_11_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                            >> 0x12U))) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                      << 1U) 
                                                                     & (vlSelf->io_x 
                                                                        >> 0xfU))) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                                               >> 0x12U)))), 1U)));
    vlSelf->Multiplier__DOT___c22_10_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                            >> 0x11U))) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                      << 1U) 
                                                                     & (vlSelf->io_x 
                                                                        >> 0xeU))) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                                               >> 0x11U)))), 1U)));
    vlSelf->Multiplier__DOT___c32_14_io_out = (3U & 
                                               ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->io_xSigned)
                                                      ? (IData)(
                                                                (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                                 >> 0x20U))
                                                      : 
                                                     ((~ (IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSelf->io_y)))) 
                                                      & (vlSelf->io_y 
                                                         >> 0x1dU))))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                               >> 0x1fU))) 
                                                   + 
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_131__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT___c32_13_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                            >> 0x1aU))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                               >> 0x18U))) 
                                                   + 
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x16U))))));
    vlSelf->Multiplier__DOT___c32_12_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                            >> 0x19U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                               >> 0x17U))) 
                                                   + 
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x15U))))));
    vlSelf->Multiplier__DOT___c32_9_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                           >> 0xaU))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                              >> 8U))) 
                                                  + 
                                                  (1U 
                                                   & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                      & (vlSelf->io_x 
                                                         >> 6U))))));
    vlSelf->Multiplier__DOT___c32_8_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                           >> 9U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                              >> 7U))) 
                                                  + 
                                                  (1U 
                                                   & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                      & (vlSelf->io_x 
                                                         >> 5U))))));
    vlSelf->Multiplier__DOT___c32_10_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                            >> 0x11U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                               >> 0xfU))) 
                                                   + 
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0xdU))))));
    vlSelf->Multiplier__DOT___c32_11_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                            >> 0x12U))) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                               >> 0x10U))) 
                                                   + 
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_130__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x6000000U 
                                        == (0x6000000U 
                                            & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0x1bU))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_129__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_123__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_121__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_83__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                            >> 6U))))));
    vlSelf->Multiplier__DOT__c53_107__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                             >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_104__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                             >> 0xdU))))));
    vlSelf->Multiplier__DOT___c22_6_io_out = (3U & 
                                              ((1U 
                                                & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_181)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               (((IData)(vlSelf->Multiplier__DOT____VdfgTmp_hb76a2bdc__0) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_181))), 1U)));
    vlSelf->Multiplier__DOT___c22_7_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 1U))) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_hb76a2bdc__0)) 
                                                                  & (0x2000000U 
                                                                     == 
                                                                     (0x3800000U 
                                                                      & vlSelf->io_y))) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                                              >> 1U)))), 1U)));
    vlSelf->Multiplier__DOT___c32_6_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 2U))) 
                                               + ((1U 
                                                   & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_195)) 
                                                  + (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5be92e1d__0))));
    vlSelf->Multiplier__DOT___c32_7_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 3U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                              >> 1U))) 
                                                  + 
                                                  ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5be92e1d__0)) 
                                                   & (4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0x19U)))))));
    vlSelf->Multiplier__DOT__c53_128__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x1800000U 
                                        == (0x1800000U 
                                            & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0x19U))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_71__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 7U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 5U))))));
    vlSelf->Multiplier__DOT__c53_67__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 8U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 6U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 4U))))));
    vlSelf->Multiplier__DOT__c53_55__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 5U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 3U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 1U))))));
    vlSelf->Multiplier__DOT__c53_59__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 6U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 4U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 2U))))));
    vlSelf->Multiplier__DOT__c53_63__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 7U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 5U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 3U))))));
    vlSelf->Multiplier__DOT__c53_79__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0xbU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                             >> 9U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                            >> 7U))))));
    vlSelf->Multiplier__DOT__c53_75__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                            >> 6U))))));
    vlSelf->Multiplier__DOT__c53_51__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 4U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 2U))) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_209)))));
    vlSelf->Multiplier__DOT__c53_127__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_119__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_117__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_98__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 0xdU))))));
    vlSelf->Multiplier__DOT__c53_101__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                             >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_126__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x600000U == 
                                        (0x600000U 
                                         & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0x17U))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_125__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_115__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_113__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_95__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                             >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_92__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                             >> 0xdU))))));
    vlSelf->Multiplier__DOT___c22_io_out = (3U & ((1U 
                                                   & (IData)(vlSelf->Multiplier__DOT__casez_tmp)) 
                                                  + 
                                                  VL_SHIFTR_III(2,2,32, 
                                                                (((IData)(
                                                                          (3U 
                                                                           == 
                                                                           (3U 
                                                                            & vlSelf->io_y))) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__casez_tmp))), 1U)));
    vlSelf->Multiplier__DOT___c22_1_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT__casez_tmp 
                                                           >> 1U))) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((~ (IData)(
                                                                             (3U 
                                                                              == 
                                                                              (3U 
                                                                               & vlSelf->io_y)))) 
                                                                  & (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->io_y))) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Multiplier__DOT__casez_tmp 
                                                                              >> 1U)))), 1U)));
    vlSelf->Multiplier__DOT___c32_io_out = (3U & ((1U 
                                                   & (IData)(
                                                             (vlSelf->Multiplier__DOT__casez_tmp 
                                                              >> 2U))) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_27)) 
                                                   + (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h557bf8db__0))));
    vlSelf->Multiplier__DOT___c32_1_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT__casez_tmp 
                                                           >> 3U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                              >> 1U))) 
                                                  + 
                                                  ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h557bf8db__0)) 
                                                   & (4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 1U)))))));
    vlSelf->Multiplier__DOT__signal = (1U & ((IData)(vlSelf->io_xSigned)
                                              ? (IData)(
                                                        (vlSelf->Multiplier__DOT__casez_tmp 
                                                         >> 0x20U))
                                              : (vlSelf->io_y 
                                                 >> 1U)));
    vlSelf->Multiplier__DOT___c22_2_io_out = (3U & 
                                              ((1U 
                                                & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_69)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               (((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5102e58c__0) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_69))), 1U)));
    vlSelf->Multiplier__DOT___c22_3_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                           >> 1U))) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5102e58c__0)) 
                                                                  & (0x200U 
                                                                     == 
                                                                     (0x380U 
                                                                      & vlSelf->io_y))) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                                              >> 1U)))), 1U)));
    vlSelf->Multiplier__DOT__c53_87__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 4U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 2U))) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_41)))));
    vlSelf->Multiplier__DOT__c53_1__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 5U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 3U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 1U))))));
    vlSelf->Multiplier__DOT__c53_2__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 6U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 4U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 2U))))));
    vlSelf->Multiplier__DOT__c53_3__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 7U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 5U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 3U))))));
    vlSelf->Multiplier__DOT__c53_10__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0xdU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                             >> 0xbU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                            >> 9U))))));
    vlSelf->Multiplier__DOT__c53_12__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0xeU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                             >> 0xcU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                            >> 0xaU))))));
    vlSelf->Multiplier__DOT__c53_4__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 8U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 6U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 4U))))));
    vlSelf->Multiplier__DOT__c53_8__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0xcU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                             >> 0xaU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                            >> 8U))))));
    vlSelf->Multiplier__DOT__c53_14__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0xfU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                             >> 0xdU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                            >> 0xbU))))));
    vlSelf->Multiplier__DOT__c53_5__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 7U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 5U))))));
    vlSelf->Multiplier__DOT__c53_6__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                            >> 6U))))));
    vlSelf->Multiplier__DOT__c53_7__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0xbU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                             >> 9U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                            >> 7U))))));
    vlSelf->Multiplier__DOT__c53_16__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x10U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0xeU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0xcU))))));
    vlSelf->Multiplier__DOT__c53_27__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x15U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x13U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x11U))))));
    vlSelf->Multiplier__DOT__c53_30__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x16U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x14U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x12U))))));
    vlSelf->Multiplier__DOT__c53_52__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x1dU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x1bU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x19U))))));
    vlSelf->Multiplier__DOT__c53_60__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x1fU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x1dU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x1bU))))));
    vlSelf->Multiplier__DOT__c53_56__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x1eU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x1cU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x1aU))))));
    vlSelf->Multiplier__DOT__c53_64__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x20U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x1eU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x1cU))))));
    vlSelf->Multiplier__DOT__c53_18__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0xdU))))));
    vlSelf->Multiplier__DOT__c53_24__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x14U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x12U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x10U))))));
    vlSelf->Multiplier__DOT__c53_48__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x1cU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x1aU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x18U))))));
    vlSelf->Multiplier__DOT__c53_20__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_22__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x13U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x11U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0xfU))))));
    vlSelf->Multiplier__DOT__c53_33__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x17U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x15U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x13U))))));
    vlSelf->Multiplier__DOT__c53_45__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x1bU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x19U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x17U))))));
    vlSelf->Multiplier__DOT__c53_80__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_42__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_36__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x18U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x16U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x14U))))));
    vlSelf->Multiplier__DOT__c53_39__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_84__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x18U == (0x18U 
                                                  & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 5U))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT___c22_4_io_out = (3U & 
                                              ((1U 
                                                & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_125)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               (((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5feb7463__0) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_125))), 1U)));
    vlSelf->Multiplier__DOT___c22_5_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                           >> 1U))) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5feb7463__0)) 
                                                                  & (0x20000U 
                                                                     == 
                                                                     (0x38000U 
                                                                      & vlSelf->io_y))) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                                              >> 1U)))), 1U)));
    vlSelf->Multiplier__DOT___c32_4_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                           >> 2U))) 
                                               + ((1U 
                                                   & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_139)) 
                                                  + (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha28613e5__0))));
    vlSelf->Multiplier__DOT___c32_5_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                           >> 3U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                              >> 1U))) 
                                                  + 
                                                  ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha28613e5__0)) 
                                                   & (4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 0x11U)))))));
    vlSelf->Multiplier__DOT__c53_114__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_94__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_112__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x6000U == 
                                        (0x6000U & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0xfU))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_110__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_91__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_122__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_120__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x60000U == 
                                        (0x60000U & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0x13U))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_124__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x180000U == 
                                        (0x180000U 
                                         & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0x15U))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_118__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_116__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x18000U == 
                                        (0x18000U & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0x11U))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_66__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x10U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 0xeU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0xcU))))));
    vlSelf->Multiplier__DOT__c53_54__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0xdU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0xbU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 9U))))));
    vlSelf->Multiplier__DOT__c53_58__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0xeU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0xcU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 0xaU))))));
    vlSelf->Multiplier__DOT__c53_62__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0xfU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0xdU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 0xbU))))));
    vlSelf->Multiplier__DOT__c53_70__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0xdU))))));
    vlSelf->Multiplier__DOT__c53_50__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0xcU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0xaU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 8U))))));
    vlSelf->Multiplier__DOT__c53_97__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_109__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_26__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 4U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 2U))) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_153)))));
    vlSelf->Multiplier__DOT__c53_103__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_106__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_111__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_100__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_29__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 5U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 3U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 1U))))));
    vlSelf->Multiplier__DOT__c53_32__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 6U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 4U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 2U))))));
    vlSelf->Multiplier__DOT__c53_78__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x13U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 0x11U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0xfU))))));
    vlSelf->Multiplier__DOT__c53_74__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_82__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                             >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_35__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 7U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 5U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 3U))))));
    vlSelf->Multiplier__DOT__c53_47__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0xbU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 9U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 7U))))));
    vlSelf->Multiplier__DOT__c53_89__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_44__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 6U))))));
    vlSelf->Multiplier__DOT__c53_38__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 8U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 6U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 4U))))));
    vlSelf->Multiplier__DOT__c53_41__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 7U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 5U))))));
    vlSelf->Multiplier__DOT__c53_86__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0xdU))))));
    vlSelf->Multiplier__DOT___c32_2_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                           >> 2U))) 
                                               + ((1U 
                                                   & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_83)) 
                                                  + (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h514988d4__0))));
    vlSelf->Multiplier__DOT___c32_3_io_out = (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                           >> 3U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                              >> 1U))) 
                                                  + 
                                                  ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h514988d4__0)) 
                                                   & (4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_y 
                                                          >> 9U)))))));
    vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_90__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x60U == (0x60U 
                                                  & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 7U))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_11__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 5U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 3U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 1U))))));
    vlSelf->Multiplier__DOT__c53_13__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 6U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 4U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 2U))))));
    vlSelf->Multiplier__DOT__c53_9__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 4U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 2U))) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_97)))));
    vlSelf->Multiplier__DOT__c53_15__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 7U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 5U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 3U))))));
    vlSelf->Multiplier__DOT__c53_17__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 8U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 6U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 4U))))));
    vlSelf->Multiplier__DOT__c53_19__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 7U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 5U))))));
    vlSelf->Multiplier__DOT__c53_21__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 6U))))));
    vlSelf->Multiplier__DOT__c53_23__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0xbU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                             >> 9U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 7U))))));
    vlSelf->Multiplier__DOT__c53_25__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0xcU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                             >> 0xaU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 8U))))));
    vlSelf->Multiplier__DOT__c53_28__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0xdU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                             >> 0xbU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 9U))))));
    vlSelf->Multiplier__DOT__c53_31__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0xeU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                             >> 0xcU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 0xaU))))));
    vlSelf->Multiplier__DOT__c53_96__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x180U == (0x180U 
                                                   & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 9U))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_53__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x15U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x13U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x11U))))));
    vlSelf->Multiplier__DOT__c53_61__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x17U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x15U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x13U))))));
    vlSelf->Multiplier__DOT__c53_57__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x16U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x14U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x12U))))));
    vlSelf->Multiplier__DOT__c53_65__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x18U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x16U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x14U))))));
    vlSelf->Multiplier__DOT__c53_105__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_102__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x600U == (0x600U 
                                                   & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0xbU))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_49__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x14U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x12U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x10U))))));
    vlSelf->Multiplier__DOT__c53_99__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                 >> 0x1eU))))));
    vlSelf->Multiplier__DOT__c53_108__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((IData)(vlSelf->io_xSigned)
                            ? (IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x1800U == 
                                        (0x1800U & vlSelf->io_y)))) 
                            & (vlSelf->io_y >> 0xdU))))) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_69__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT__c53_34__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0xfU))) + ((1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                             >> 0xdU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 0xbU))))));
    vlSelf->Multiplier__DOT__c53_73__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_77__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x1bU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x19U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x17U))))));
    vlSelf->Multiplier__DOT__c53_46__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x13U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x11U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0xfU))))));
    vlSelf->Multiplier__DOT__c53_81__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_88__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x16U))))));
    vlSelf->Multiplier__DOT__c53_43__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0xeU))))));
    vlSelf->Multiplier__DOT__c53_37__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x10U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0xeU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0xcU))))));
    vlSelf->Multiplier__DOT__c53_40__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0xdU))))));
    vlSelf->Multiplier__DOT__c53_85__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x15U))))));
    vlSelf->Multiplier__DOT___c22_14_io_out = (3U & 
                                               ((IData)(vlSelf->__VdfgTmp_hab77e2e0__0) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                      << 1U) 
                                                                     & (vlSelf->io_x 
                                                                        >> 0x1eU))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_hab77e2e0__0)), 1U)));
    vlSelf->Multiplier__DOT___c22_33_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_15_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_14_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_15_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 0x1cU))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 0x1bU))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 0x14U))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 0xcU))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_129__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_223)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 4U))) + 
                 (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_1_io_out), 1U) 
                  + (1U & (IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 5U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0)) 
                  & (4U == (7U & (vlSelf->io_y >> 0x1bU)))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0) 
                 + (1U & (IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_1_io_out))));
    vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 0x13U))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 0xbU))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT___c22_15_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_1_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_1_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_16_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_1_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_17_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_1_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_1_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_68__DOT___c32_1_io_out 
        = (3U & ((IData)(vlSelf->Multiplier__DOT__signal) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x1dU))))));
    vlSelf->Multiplier__DOT__c53_72__DOT___c32_1_io_out 
        = (3U & ((IData)(vlSelf->Multiplier__DOT__signal) 
                 + ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                   >> 0x20U))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                             >> 0x1eU))))));
    vlSelf->__VdfgTmp_h87e2503e__0 = (3U & (~ ((2U 
                                                & (((IData)(vlSelf->io_xSigned)
                                                     ? (IData)(
                                                               (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                                >> 0x20U))
                                                     : 
                                                    ((~ (IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelf->io_y)))) 
                                                     & (vlSelf->io_y 
                                                        >> 3U))) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->Multiplier__DOT__signal))));
    vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0) 
                 + (1U & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_1_io_out))));
    vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0)) 
                  & (4U == (7U & (vlSelf->io_y >> 3U)))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_2__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_55)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_3__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 8U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 7U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 9U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 5U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 6U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0xaU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x10U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x18U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x19U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x1aU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0xfU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x17U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0xdU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0xeU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x11U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x16U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x15U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x12U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 8U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 9U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0xaU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 7U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0) 
                 + (1U & (IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_1_io_out))));
    vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0)) 
                  & (4U == (7U & (vlSelf->io_y >> 0x13U)))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_167)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 0xdU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 6U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 5U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_111)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0)) 
                  & (4U == (7U & (vlSelf->io_y >> 0xbU)))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0) 
                 + (1U & (IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_1_io_out))));
    vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 5U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 6U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 7U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 8U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x10U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x11U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x12U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0xfU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 9U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0x15U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0xeU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0xdU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0xaU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT___c22_34_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_14_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_15_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_14_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_25_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_14_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_1_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_32_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_31_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_24_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_2_io_out)) 
                                                + (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x1aU))) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_197__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out)) 
                 + ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                           & (vlSelf->io_x >> 0x19U))) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_196__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_13_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_30_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_11_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT___c22_35_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_16_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_15_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_16_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_36_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_17_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_16_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_17_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_76__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->__VdfgTmp_h87e2503e__0)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->__VdfgTmp_h87e2503e__0), 1U) 
                    + (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                     >> 0x1fU))))));
    vlSelf->Multiplier__DOT___c22_18_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_1_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_19_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_16_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_2_io_out)) 
                                                + ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha690227c__0) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c32_17_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_2_io_out)) 
                                                + (
                                                   ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha690227c__0)) 
                                                    & (4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_y 
                                                           >> 5U)))) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c32_18_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out)) 
                                                + (
                                                   (1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_2_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_132__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_3_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_133__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_134__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_3_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_188__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT___c22_11_io_out)))));
    vlSelf->Multiplier__DOT__c53_195__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_12_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_194__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_13_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_193__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_12_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_1_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_192__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_191__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_190__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out)) 
                    + (1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                             & (vlSelf->io_x >> 0x12U))))));
    vlSelf->Multiplier__DOT__c53_189__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out)) 
                    + (1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                             & (vlSelf->io_x >> 0x11U))))));
    vlSelf->Multiplier__DOT___c22_27_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_10_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT___c22_28_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_11_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT___c22_29_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_10_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT__c53_187__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT___c22_10_io_out)))));
    vlSelf->Multiplier__DOT___c22_26_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT___c22_25_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT__c53_181__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_178__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_137__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out)) 
                    + (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0))));
    vlSelf->Multiplier__DOT__c53_136__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_135__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_138__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out)) 
                    + ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0)) 
                       & (4U == (7U & (vlSelf->io_y 
                                       >> 0xdU)))))));
    vlSelf->Multiplier__DOT___c22_20_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_4_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT__c53_139__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT___c22_4_io_out)))));
    vlSelf->Multiplier__DOT___c22_21_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_5_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT__c53_140__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT___c22_5_io_out)))));
    vlSelf->Multiplier__DOT___c22_22_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_4_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT__c53_141__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT___c32_4_io_out)))));
    vlSelf->Multiplier__DOT___c22_23_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_5_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT__c53_142__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT___c32_5_io_out)))));
    vlSelf->Multiplier__DOT___c22_24_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out), 1U) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out) 
                                                                       >> 1U))), 1U)));
    vlSelf->Multiplier__DOT__c53_143__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT___c32_19_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out), 1U) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_144__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT___c32_20_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out), 1U) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_145__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT___c32_22_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out), 1U) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_180__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_161__DOT___c32_1_io_out 
        = (3U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0)) 
                  & (4U == (vlSelf->io_y >> 0x1dU))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_158__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_163__DOT___c32_1_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & vlSelf->io_x)) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out), 1U) 
                                            + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_160__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_165__DOT___c32_1_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 1U))) + 
                 (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out), 1U) 
                  + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_162__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT___c32_23_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out), 1U) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_184__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_159__DOT___c32_1_io_out 
        = (3U & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_156__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_183__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_182__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_185__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT___c32_10_io_out)))));
    vlSelf->Multiplier__DOT__c53_186__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT___c32_11_io_out)))));
    vlSelf->Multiplier__DOT___c32_21_io_out = (3U & 
                                               (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out), 1U) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_146__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_157__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_154__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_179__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_176__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_155__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_152__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_149__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_147__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_151__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_148__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_153__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_150__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_175__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_172__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_177__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_174__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT___c22_57_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_34_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_33_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_34_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_56_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_33_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_25_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_33_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_55_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_25_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_32_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_25_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_54_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_32_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_31_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_32_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_53_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_31_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_24_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_31_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_13_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT___c22_58_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_36_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_35_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_36_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_167__DOT___c32_1_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 2U))) + 
                 (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out), 1U) 
                  + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_164__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_169__DOT___c32_1_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 3U))) + 
                 (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out), 1U) 
                  + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_166__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_55 
                                >> 0x1dU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT___c22_37_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_18_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_17_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_18_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_38_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_19_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_18_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_19_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_39_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_16_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_19_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_16_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_40_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_17_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_16_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_17_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_41_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_18_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_17_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_18_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_2_io_out), 1U) 
                 + (1U & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_1_io_out))));
    vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_3_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_12_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_13_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_12_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_193__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_137__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_3_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_138__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_139__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 9U))) + 
                 (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_1_io_out), 1U) 
                  + (1U & (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->io_x >> 0xaU))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_1_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0)) 
                  & (4U == (7U & (vlSelf->io_y >> 0x15U)))) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_9_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c22_9_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_6_io_out), 1U) 
                 + (1U & (IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_1_io_out))));
    vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c22_6_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_7_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c22_7_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_6_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_7_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c32_6_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c32_7_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_9_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_8_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c32_9_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c22_8_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT___c22_108_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_56_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c22_55_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_56_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_107_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_55_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c22_54_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_55_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_106_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_54_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c22_53_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_54_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_31_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_24_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_1_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_171__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_168__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT__c53_173__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_1_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_170__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out)))));
    vlSelf->Multiplier__DOT___c22_59_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_37_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_36_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_37_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_60_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_38_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_37_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_38_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_61_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_39_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_38_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_39_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_62_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_40_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_39_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_40_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_63_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_41_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_40_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_41_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_42_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_18_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_43_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_44_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_52_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_51_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_50_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_49_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_30_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_48_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_47_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_230__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_229__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_30_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_45_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_46_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_26_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c32_27_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c32_28_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c32_29_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out)) 
                                                + (
                                                   (1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_20_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_198__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_21_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_199__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_22_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_200__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_23_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_201__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_24_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_202__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_19_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_212__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_211__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_224__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_26_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_223__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_25_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_222__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_22_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_1_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_225__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_23_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_226__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_27_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_227__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_28_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_228__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c22_29_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_203__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_20_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_210__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_221__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_209__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_204__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT___c32_21_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_205__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_206__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_207__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_208__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_219__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_220__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_105_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_53_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c32_31_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_53_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_213__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_214__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_8_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c32_8_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT___c22_64_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_42_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_41_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_42_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_65_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_43_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_42_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_43_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_66_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_44_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_43_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_44_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_104_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c32_31_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c22_52_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c32_31_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_103_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_52_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c22_51_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_52_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_102_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_51_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c22_50_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_51_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_101_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_50_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c22_49_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_50_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_100_io_out = (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->Multiplier__DOT___c22_49_io_out)) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Multiplier__DOT___c32_30_io_out)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_49_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_99_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_30_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_48_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_30_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_98_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_48_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_47_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_48_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_30_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT___c22_67_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_45_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_44_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_45_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_68_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_46_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_45_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c22_46_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_69_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_26_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c22_46_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_26_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_70_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_27_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_26_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_27_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_71_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_28_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_27_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_28_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_72_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c32_29_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_28_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT___c32_29_io_out))), 1U)));
    vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_20_io_out), 1U) 
                 + (1U & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_1_io_out))));
    vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_21_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_22_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_23_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_24_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_212__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_25_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_22_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_26_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_23_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_27_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_28_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_29_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_19_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_211__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_222__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_210__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_20_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c32_21_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_213__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_214__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_215__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_216__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_218__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_217__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c32_40_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT___c22_47_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_1_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_73_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT___c32_29_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_74_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_75_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_76_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_77_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_91_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_92_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_93_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_94_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_95_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_97_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_96_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_78_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_34_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_90_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_33_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_79_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_80_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_81_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_82_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_83_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_84_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_32_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_89_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_39_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c32_35_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c32_36_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT__c53_215__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT__c53_217__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_1_io_out)))));
    vlSelf->Multiplier__DOT___c32_37_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_2_io_out), 1U))));
    vlSelf->Multiplier__DOT___c22_85_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_88_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_87_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c22_86_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out)) 
                                                + VL_SHIFTR_III(2,2,32, 
                                                                ((2U 
                                                                  & (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_2_io_out)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out))), 1U)));
    vlSelf->Multiplier__DOT___c32_38_io_out = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_2_io_out)) 
                                                + (
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out), 1U) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out), 1U))));
    vlSelf->io_res = ((((QData)((IData)((1U & ((IData)(vlSelf->Multiplier__DOT___c22_57_io_out) 
                                               + ((IData)(vlSelf->Multiplier__DOT___c22_56_io_out) 
                                                  >> 1U))))) 
                        << 0x3fU) | (((QData)((IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->Multiplier__DOT___c22_108_io_out)))) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->Multiplier__DOT___c22_107_io_out)))) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->Multiplier__DOT___c22_106_io_out)))) 
                                                       << 0x3cU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->Multiplier__DOT___c22_105_io_out)))) 
                                                          << 0x3bU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(vlSelf->Multiplier__DOT___c22_104_io_out)))) 
                                                             << 0x3aU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_103_io_out)))) 
                                                                << 0x39U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_102_io_out)))) 
                                                                   << 0x38U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_101_io_out)))) 
                                                                      << 0x37U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_100_io_out)))) 
                                                                         << 0x36U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_99_io_out)))) 
                                                                            << 0x35U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_98_io_out)))) 
                                                                               << 0x34U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c32_40_io_out)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_97_io_out)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_96_io_out)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_95_io_out)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_94_io_out)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_93_io_out)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_92_io_out)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_91_io_out)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_90_io_out)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c32_39_io_out)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_89_io_out)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_88_io_out)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_87_io_out)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_86_io_out)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c32_38_io_out)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_85_io_out)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c32_37_io_out)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c32_36_io_out)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c32_35_io_out)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c32_34_io_out)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->Multiplier__DOT___c32_33_io_out) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_32_io_out) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_84_io_out) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_83_io_out) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_82_io_out) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_81_io_out) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_80_io_out) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_79_io_out) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_78_io_out) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_77_io_out) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_76_io_out) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_75_io_out) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_74_io_out) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_73_io_out) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_72_io_out) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_71_io_out) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_70_io_out) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_69_io_out) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_68_io_out) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_67_io_out) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_66_io_out) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_65_io_out) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_64_io_out) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_63_io_out) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_62_io_out) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_61_io_out) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_60_io_out) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_59_io_out) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_58_io_out) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_35_io_out) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_15_io_out) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->Multiplier__DOT___c22_io_out))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                      + (((QData)((IData)((1U & ((IData)(vlSelf->Multiplier__DOT___c22_108_io_out) 
                                                 >> 1U)))) 
                          << 0x3fU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->Multiplier__DOT___c22_107_io_out) 
                                                            >> 1U)))) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->Multiplier__DOT___c22_106_io_out) 
                                                             >> 1U)))) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->Multiplier__DOT___c22_105_io_out) 
                                                                >> 1U)))) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_104_io_out) 
                                                                   >> 1U)))) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->Multiplier__DOT___c22_103_io_out) 
                                                                      >> 1U)))) 
                                                  << 0x3aU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->Multiplier__DOT___c22_102_io_out) 
                                                                         >> 1U)))) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->Multiplier__DOT___c22_101_io_out) 
                                                                            >> 1U)))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->Multiplier__DOT___c22_100_io_out) 
                                                                               >> 1U)))) 
                                                           << 0x37U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->Multiplier__DOT___c22_99_io_out) 
                                                                                >> 1U)))) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_98_io_out) 
                                                                                >> 1U)))) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_40_io_out) 
                                                                                >> 1U)))) 
                                                                    << 0x34U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_97_io_out) 
                                                                                >> 1U)))) 
                                                                       << 0x33U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_96_io_out) 
                                                                                >> 1U)))) 
                                                                          << 0x32U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_95_io_out) 
                                                                                >> 1U)))) 
                                                                             << 0x31U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_94_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_93_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_92_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_91_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_90_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_39_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_89_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_88_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_87_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_86_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_38_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_85_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_37_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_36_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_35_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_34_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_33_io_out) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c32_32_io_out) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_84_io_out) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_83_io_out) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_82_io_out) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_81_io_out) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_80_io_out) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_79_io_out) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_78_io_out) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_77_io_out) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_76_io_out) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_75_io_out) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_74_io_out) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_73_io_out) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_72_io_out) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_71_io_out) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_70_io_out) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_69_io_out) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_68_io_out) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_67_io_out) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_66_io_out) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_65_io_out) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_64_io_out) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_63_io_out) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_62_io_out) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_61_io_out) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_60_io_out) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_59_io_out) 
                                                                                << 4U)) 
                                                                                | (0x10U 
                                                                                & ((IData)(vlSelf->Multiplier__DOT___c22_58_io_out) 
                                                                                << 3U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

void VMultiplier___024root___eval_ico(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMultiplier___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VMultiplier___024root___eval_triggers__ico(VMultiplier___024root* vlSelf);

bool VMultiplier___024root___eval_phase__ico(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMultiplier___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMultiplier___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMultiplier___024root___eval_act(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_act\n"); );
}

void VMultiplier___024root___eval_nba(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_nba\n"); );
}

void VMultiplier___024root___eval_triggers__act(VMultiplier___024root* vlSelf);

bool VMultiplier___024root___eval_phase__act(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMultiplier___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMultiplier___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMultiplier___024root___eval_phase__nba(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMultiplier___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiplier___024root___dump_triggers__ico(VMultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiplier___024root___dump_triggers__nba(VMultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiplier___024root___dump_triggers__act(VMultiplier___024root* vlSelf);
#endif  // VL_DEBUG

void VMultiplier___024root___eval(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval\n"); );
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
            VMultiplier___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../build/Multiplier.sv", 36, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMultiplier___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMultiplier___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../build/Multiplier.sv", 36, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMultiplier___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../build/Multiplier.sv", 36, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMultiplier___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMultiplier___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMultiplier___024root___eval_debug_assertions(VMultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_go & 0xfeU))) {
        Verilated::overWidthError("io_go");}
    if (VL_UNLIKELY((vlSelf->io_xSigned & 0xfeU))) {
        Verilated::overWidthError("io_xSigned");}
    if (VL_UNLIKELY((vlSelf->io_ySigned & 0xfeU))) {
        Verilated::overWidthError("io_ySigned");}
}
#endif  // VL_DEBUG
