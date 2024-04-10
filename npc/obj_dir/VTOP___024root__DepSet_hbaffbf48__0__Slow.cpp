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

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
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
            VL_FATAL_MT("build/TOP.v", 2613, "", "Settle region did not converge.");
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

extern const VlUnpacked<CData/*0:0*/, 64> VTOP__ConstPool__TABLE_h56ddf635_0;
extern const VlUnpacked<CData/*2:0*/, 64> VTOP__ConstPool__TABLE_h9ac5cfea_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTOP__ConstPool__TABLE_h701b3078_0;
extern const VlUnpacked<CData/*2:0*/, 128> VTOP__ConstPool__TABLE_ha3511935_0;

VL_ATTR_COLD void VTOP___024root___stl_sequent__TOP__0(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U != (IData)(vlSelf->TOP__DOT__InstRam__DOT__wstate))) {
        if ((4U != (IData)(vlSelf->TOP__DOT__InstRam__DOT__wstate))) {
            vlSelf->TOP__DOT__InstRam__DOT__nxt_wstate = 1U;
        }
    }
    vlSelf->io_commit_rd = vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd;
    vlSelf->io_commit_pc = vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_pc;
    vlSelf->io_commit_inst = vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_inst;
    vlSelf->io_commit_halt = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                              & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_halt));
    vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput 
        = ((0xcU & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                    << 2U)) | (3U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut));
    vlSelf->__Vtableidx3 = (0x10U | ((0x20U & ((IData)(vlSelf->TOP__DOT__DataRam__DOT__rstate) 
                                               << 3U)) 
                                     | (((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead) 
                                         << 3U) | (IData)(vlSelf->TOP__DOT__DataRam__DOT__rstate))));
    if (VTOP__ConstPool__TABLE_h56ddf635_0[vlSelf->__Vtableidx3]) {
        vlSelf->TOP__DOT__DataRam__DOT__nxt_rstate 
            = VTOP__ConstPool__TABLE_h9ac5cfea_0[vlSelf->__Vtableidx3];
    }
    vlSelf->__Vtableidx4 = (0x10U | ((0x20U & ((IData)(vlSelf->TOP__DOT__DataRam__DOT__wstate) 
                                               << 3U)) 
                                     | (((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite) 
                                         << 3U) | (IData)(vlSelf->TOP__DOT__DataRam__DOT__wstate))));
    if (VTOP__ConstPool__TABLE_h56ddf635_0[vlSelf->__Vtableidx4]) {
        vlSelf->TOP__DOT__DataRam__DOT__nxt_wstate 
            = VTOP__ConstPool__TABLE_h9ac5cfea_0[vlSelf->__Vtableidx4];
    }
    vlSelf->io_commit_wen = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                             & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite));
    vlSelf->TOP__DOT__InstRam_arvalid = (1U & ((~ (IData)(vlSelf->TOP__DOT__arFireReg)) 
                                               & (~ (IData)(vlSelf->reset))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36 = (
                                                   (8U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 2U)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 2U)) 
                                                      | ((2U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xbU)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xdU))))));
    vlSelf->TOP__DOT__IF__DOT___rFireReg_T_1 = ((~ (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)) 
                                                & ((IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate) 
                                                   >> 2U));
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_45 = (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10
                                                       : 
                                                      ((9U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0xfU)))
                                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0xfU)))
                                                               ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0xfU)))
                                                                ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1
                                                                : vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0)))))))))))));
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_77 = (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10
                                                       : 
                                                      ((9U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0x14U)))
                                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0x14U)))
                                                               ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0x14U)))
                                                                ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1
                                                                : vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0)))))))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0 
        = ((0x20U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                         >> 0x19U)) << 5U)) | ((0x10U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x1aU)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x1bU)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x1cU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x1dU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x1fU))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hc297c6cf__0 
        = ((2U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 5U)) | (1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0xdU)));
    vlSelf->TOP__DOT__MEM_io_MEM2WB_valid = (1U & (
                                                   ((IData)(vlSelf->TOP__DOT__EX2MEMValid) 
                                                    & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead))
                                                    ? 
                                                   ((IData)(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg) 
                                                    | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead))
                                                    : 
                                                   ((~ 
                                                     ((IData)(vlSelf->TOP__DOT__EX2MEMValid) 
                                                      & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite))) 
                                                    | (((IData)(vlSelf->TOP__DOT__MEM__DOT__awFireReg) 
                                                        & (IData)(vlSelf->TOP__DOT__MEM__DOT__wFireReg)) 
                                                       | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite)))));
    vlSelf->TOP__DOT__WB_io_WBout_valid = (1U & (((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                                  & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead))
                                                  ? 
                                                 ((IData)(vlSelf->TOP__DOT__WB__DOT__rDataFireReg) 
                                                  | ((IData)(vlSelf->TOP__DOT__DataRam__DOT__rstate) 
                                                     >> 2U))
                                                  : 
                                                 ((~ 
                                                   ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                                    & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite))) 
                                                  | ((IData)(vlSelf->TOP__DOT__WB__DOT__bFireReg) 
                                                     | ((IData)(vlSelf->TOP__DOT__DataRam__DOT__wstate) 
                                                        >> 2U)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_2 = ((0x80U 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      << 7U)) 
                                                  | ((0x40U 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         << 5U)) 
                                                     | ((0x20U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 2U)) 
                                                            << 5U)) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 3U)) 
                                                               << 4U)) 
                                                           | ((8U 
                                                               & ((~ 
                                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 4U)) 
                                                                  << 3U)) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                       >> 5U)) 
                                                                     << 2U)) 
                                                                 | ((2U 
                                                                     & ((~ 
                                                                         (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                          >> 6U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (~ 
                                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                           >> 0xdU))))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_32 = (
                                                   (0x40U 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             << 2U)) 
                                                         | ((8U 
                                                             & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                            | ((4U 
                                                                & ((~ 
                                                                    (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                     >> 4U)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      >> 4U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                        >> 6U))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h89094836__0 
        = ((2U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 0xcU)) | (1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                        >> 0xeU))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T = ((2U 
                                                 & ((~ 
                                                     (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 5U))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_19 = (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 4U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 4U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 6U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6 
        = ((2U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                  << 1U)) | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 1U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8 
        = ((4U & ((~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                        >> 1U)) << 1U)) 
                             | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 2U))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10 
        = ((2U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                  << 1U)) | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 2U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12 
        = ((2U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
           | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                    >> 2U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16 
        = ((2U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                  << 1U)) | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 3U)));
    vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9 = 
        ((0x80U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                       >> 8U)) << 7U)) | ((0x40U & 
                                           ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 9U)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0xaU)) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((~ 
                                                     (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0xbU)) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xcU)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((~ 
                                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0xdU)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & ((~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0xeU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xfU))))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6 = ((4U 
                                                   & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                  | ((2U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 3U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 4U)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25 = (
                                                   (4U 
                                                    & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                   | ((2U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 5U))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6398cd2a__0 
        = ((2U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 0xcU)) | (1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                     >> 0xeU)));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h20af328f__0 
        = ((4U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 6U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0xcU)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0xeU)))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h1fa5bf6d__0 
        = ((2U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0xeU))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8 = ((2U 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 5U))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_52 = (
                                                   (8U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 2U)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((~ 
                                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 4U)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 4U)) 
                                                         | (1U 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0xeU)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_28 = (
                                                   (8U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 2U)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((~ 
                                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 4U)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xeU))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0 
        = ((2U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x1fU))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_h61253848__0 
        = ((2U & ((~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                      >> 2U)) << 1U)) | (1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                                  >> 3U))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18 
        = ((2U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
           | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                    >> 3U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14 
        = ((4U & ((~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                        >> 1U)) << 1U)) 
                             | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 3U))));
    vlSelf->TOP__DOT__WBRegWrite = ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite) 
                                    & ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                       & (0U != (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd))));
    vlSelf->TOP__DOT__MEMRegWrite = ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite) 
                                     & ((IData)(vlSelf->TOP__DOT__EX2MEMValid) 
                                        & (0U != (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd))));
    vlSelf->TOP__DOT__WB__DOT__rdataShift0 = ((1U & vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut)
                                               ? VL_SHIFTR_III(32,32,32, vlSelf->TOP__DOT__DataRam__DOT__ReadDataReg, 8U)
                                               : vlSelf->TOP__DOT__DataRam__DOT__ReadDataReg);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen = ((IData)(vlSelf->io_commit_wen) 
                                               & (0U 
                                                  != (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)));
    vlSelf->__Vtableidx2 = (0x10U | ((0x40U & ((~ (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)) 
                                               << 6U)) 
                                     | ((0x20U & ((IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate) 
                                                  << 3U)) 
                                        | (((IData)(vlSelf->TOP__DOT__InstRam_arvalid) 
                                            << 3U) 
                                           | (IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate)))));
    if (VTOP__ConstPool__TABLE_h701b3078_0[vlSelf->__Vtableidx2]) {
        vlSelf->TOP__DOT__InstRam__DOT__nxt_rstate 
            = VTOP__ConstPool__TABLE_ha3511935_0[vlSelf->__Vtableidx2];
    }
    vlSelf->TOP__DOT__IF_io_Pre2IF_valid = ((IData)(vlSelf->TOP__DOT__InstRam_arvalid) 
                                            | (IData)(vlSelf->TOP__DOT__arFireReg));
    vlSelf->TOP__DOT__IF_io_IF2ID_valid = ((IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T_1) 
                                           | (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg));
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_58 = (
                                                   (0x1aU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23
                                                       : 
                                                      ((0x16U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21
                                                         : 
                                                        ((0x14U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19
                                                           : 
                                                          ((0x12U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18
                                                            : 
                                                           ((0x11U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17
                                                             : 
                                                            ((0x10U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0xfU)))
                                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16
                                                              : 
                                                             ((0xfU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0xfU)))
                                                               ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0xfU)))
                                                                ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14
                                                                : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_45)))))))))))));
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_90 = (
                                                   (0x1aU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23
                                                       : 
                                                      ((0x16U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21
                                                         : 
                                                        ((0x14U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19
                                                           : 
                                                          ((0x12U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18
                                                            : 
                                                           ((0x11U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17
                                                             : 
                                                            ((0x10U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0x14U)))
                                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16
                                                              : 
                                                             ((0xfU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0x14U)))
                                                               ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0x14U)))
                                                                ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14
                                                                : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_77)))))))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26 
        = (((IData)((0x1073U == (0x107fU & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
            << 1U) | (IData)(((0x33U == (0x3fU & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                              & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hc297c6cf__0)))));
    vlSelf->TOP__DOT__MEMoutValid = ((IData)(vlSelf->TOP__DOT__EX2MEMValid) 
                                     & (IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid));
    vlSelf->io_commit_commit = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                & (IData)(vlSelf->TOP__DOT__WB_io_WBout_valid));
    vlSelf->TOP__DOT__MEM_io_MEM2WB_ready = (1U & (
                                                   (~ (IData)(vlSelf->TOP__DOT__MEM2WBValid)) 
                                                   | (IData)(vlSelf->TOP__DOT__WB_io_WBout_valid)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32 
        = (((IData)((3U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T))) 
            << 1U) | (1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                            >> 6U)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_60 = (
                                                   (0x10U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 2U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 1U)) 
                                                      | ((4U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xaU)) 
                                                         | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6398cd2a__0))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_4 = ((0x100U 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      << 8U)) 
                                                  | ((0x80U 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         << 6U)) 
                                                     | ((0x40U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 2U)) 
                                                            << 6U)) 
                                                        | ((0x20U 
                                                            & ((~ 
                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 3U)) 
                                                               << 5U)) 
                                                           | ((0x10U 
                                                               & ((~ 
                                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 4U)) 
                                                                  << 4U)) 
                                                              | ((8U 
                                                                  & ((~ 
                                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                       >> 5U)) 
                                                                     << 3U)) 
                                                                 | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h20af328f__0)))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1 
        = (((IData)(((0x23U == (0x3fU & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                     & (7U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h20af328f__0)))) 
            << 1U) | (IData)(((0x23U == (0x7fU & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                              & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h1fa5bf6d__0)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_30 = (
                                                   (0x100U 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 6U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             << 4U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 4U)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 1U)) 
                                                               | ((8U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      >> 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                           >> 0xcU)) 
                                                                         << 2U)) 
                                                                     | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h1fa5bf6d__0))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23 
        = (((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6))) 
            << 2U) | (((IData)((3U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8))) 
                       << 1U) | (1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 3U))));
    vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2 = ((2U 
                                                   & (((7U 
                                                        == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6)) 
                                                       | (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 3U)) 
                                                      << 1U)) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T)) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8)) 
                                                        | ((7U 
                                                            == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_19)) 
                                                           | (7U 
                                                              == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36 
        = (((IData)((3U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8))) 
            << 2U) | ((2U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                             >> 2U)) | (7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12 
        = (((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_28))) 
            << 5U) | ((((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                            >> 2U)) & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hc297c6cf__0))) 
                       << 4U) | (((IData)(((0x1000U 
                                            == (0x1004U 
                                                & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                           & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h89094836__0)))) 
                                  << 3U) | (((IData)(
                                                     (0x5010U 
                                                      == 
                                                      (0x40007014U 
                                                       & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
                                             << 2U) 
                                            | (((IData)(
                                                        ((0U 
                                                          == 
                                                          (0x1004U 
                                                           & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                         & (3U 
                                                            == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6398cd2a__0)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0x40000030U 
                                                          == 
                                                          (0x40001034U 
                                                           & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hf773fe7b__0 
        = (((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_28))) 
            << 1U) | (0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_52)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_64 = (
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    << 0x1fU) 
                                                   | ((0x40000000U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 0x1dU)) 
                                                      | ((0x20000000U 
                                                          & ((~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 2U)) 
                                                             << 0x1dU)) 
                                                         | ((0x10000000U 
                                                             & ((~ 
                                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 3U)) 
                                                                << 0x1cU)) 
                                                            | ((0x8000000U 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   << 0x17U)) 
                                                               | ((0x4000000U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      << 0x15U)) 
                                                                  | ((0x2000000U 
                                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                         << 0x13U)) 
                                                                     | ((0x1000000U 
                                                                         & ((~ 
                                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                              >> 7U)) 
                                                                            << 0x18U)) 
                                                                        | (((IData)(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9) 
                                                                            << 0x10U) 
                                                                           | ((0x8000U 
                                                                               & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                              | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x1bU)) 
                                                                                | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0))))))))))))))))))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0 
        = ((0x40U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                         >> 0x19U)) << 6U)) | ((0x20U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x1aU)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x1bU)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x1cU)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x1dU)) 
                                                            << 2U)) 
                                                        | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0))))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4 
        = ((8U & ((~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 3U)) | ((4U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                    << 1U)) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_h61253848__0)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 
        = ((4U & ((~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                      >> 1U)) << 2U)) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_h61253848__0));
    vlSelf->TOP__DOT__hazard1_1 = (((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1) 
                                    == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                   & (IData)(vlSelf->TOP__DOT__WBRegWrite));
    vlSelf->TOP__DOT__hazard2_1 = (((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2) 
                                    == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                   & (IData)(vlSelf->TOP__DOT__WBRegWrite));
    vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0 
        = (((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1) 
            == (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd)) 
           & (IData)(vlSelf->TOP__DOT__MEMRegWrite));
    vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0 
        = (((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2) 
            == (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd)) 
           & (IData)(vlSelf->TOP__DOT__MEMRegWrite));
    vlSelf->TOP__DOT__WB__DOT__rdataShift1 = ((2U & vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut)
                                               ? VL_SHIFTR_III(32,32,32, vlSelf->TOP__DOT__WB__DOT__rdataShift0, 0x10U)
                                               : vlSelf->TOP__DOT__WB__DOT__rdataShift0);
    vlSelf->TOP__DOT___EX2MEMValid_T_2 = ((IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid) 
                                          & (IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_ready));
    vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T = 
        ((IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_ready) 
         & (IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16 
        = (((IData)((0x4010U == (0x5014U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
            << 1U) | (0x1fU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_60)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14 
        = (((IData)(((0x10U == (0x14U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                     & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h89094836__0)))) 
            << 3U) | (((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_52))) 
                       << 2U) | (((IData)((0x1fU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_60))) 
                                  << 1U) | (IData)(
                                                   (0x40001010U 
                                                    == 
                                                    (0x40001014U 
                                                     & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3 
        = (((IData)((0xffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_2))) 
            << 1U) | (0x1ffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_4)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10 
        = (((IData)((0x1ffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_30))) 
            << 1U) | (0x7fU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_32)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7 
        = ((4U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 1U)) | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hf773fe7b__0));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34 
        = (((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_19))) 
            << 2U) | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hf773fe7b__0));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5 
        = (((IData)((0xffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_2))) 
            << 9U) | (((IData)((0x1ffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_4))) 
                       << 8U) | (((IData)((0x13U == 
                                           (0x107bU 
                                            & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
                                  << 7U) | (((IData)(
                                                     ((0x13U 
                                                       == 
                                                       (0x705bU 
                                                        & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                      & (0x3fU 
                                                         == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0)))) 
                                             << 6U) 
                                            | (((IData)(
                                                        ((0x13U 
                                                          == 
                                                          (0x5bU 
                                                           & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                         & (0x7fU 
                                                            == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0)))) 
                                                << 5U) 
                                               | (((IData)(
                                                           (0x17U 
                                                            == 
                                                            (0x5fU 
                                                             & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0x1ffU 
                                                               == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_30))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0x7fU 
                                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_32))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0x2013U 
                                                                     == 
                                                                     (0x207bU 
                                                                      & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     ((0x5013U 
                                                                       == 
                                                                       (0x705bU 
                                                                        & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                                      & (0x3fU 
                                                                         == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0)))))))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0 
        = ((0x400U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                          >> 0x15U)) << 0xaU)) | ((0x200U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x16U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x17U)) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x18U)) 
                                                            << 7U)) 
                                                        | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2 
        = ((8U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                  << 3U)) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T 
        = ((8U & ((~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 3U)) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->TOP__DOT__EX_io_hazard1 = (((IData)(vlSelf->TOP__DOT__hazard1_1) 
                                        << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0));
    vlSelf->TOP__DOT__EX_io_hazard2 = (((IData)(vlSelf->TOP__DOT__hazard2_1) 
                                        << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0));
    vlSelf->TOP__DOT__EX_io_stall = (((IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0) 
                                      | (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)) 
                                     & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead));
    vlSelf->TOP__DOT__WB__DOT__rdataSignal = (1U & 
                                              ((~ ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3) 
                                                   >> 2U)) 
                                               & ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                                   ? 
                                                  (vlSelf->TOP__DOT__WB__DOT__rdataShift1 
                                                   >> 0xfU)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                                    ? 
                                                   (vlSelf->TOP__DOT__WB__DOT__rdataShift1 
                                                    >> 7U)
                                                    : 
                                                   (vlSelf->TOP__DOT__WB__DOT__rdataShift1 
                                                    >> 0x1fU)))));
    vlSelf->TOP__DOT___WB_io_MEM2WB_bits_T_1 = ((IData)(vlSelf->TOP__DOT___EX2MEMValid_T_2) 
                                                & (IData)(vlSelf->TOP__DOT__MEMoutValid));
    vlSelf->TOP__DOT__ID__DOT__Type = (((IData)((0U 
                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36))) 
                                        << 2U) | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62 = (
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    << 0x1fU) 
                                                   | ((0x40000000U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 0x1dU)) 
                                                      | ((0x20000000U 
                                                          & ((~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 2U)) 
                                                             << 0x1dU)) 
                                                         | ((0x10000000U 
                                                             & ((~ 
                                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 3U)) 
                                                                << 0x1cU)) 
                                                            | ((0x8000000U 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   << 0x17U)) 
                                                               | ((0x4000000U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      << 0x15U)) 
                                                                  | ((0x2000000U 
                                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                         << 0x13U)) 
                                                                     | ((0x1000000U 
                                                                         & ((~ 
                                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                              >> 7U)) 
                                                                            << 0x18U)) 
                                                                        | (((IData)(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9) 
                                                                            << 0x10U) 
                                                                           | ((0x8000U 
                                                                               & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                              | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 9U)) 
                                                                                | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0)))))))))))))));
    vlSelf->TOP__DOT__EX__DOT___bypassReg_T = (1U & 
                                               ((~ (IData)(vlSelf->TOP__DOT__EX_io_stall)) 
                                                & ((~ (IData)(vlSelf->TOP__DOT__EX2MEMValid)) 
                                                   | (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T))));
    vlSelf->TOP__DOT__EXoutValid = ((~ (IData)(vlSelf->TOP__DOT__EX_io_stall)) 
                                    & (IData)(vlSelf->TOP__DOT__ID2EXValid));
    vlSelf->io_commit_wdata = ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead)
                                ? ((1U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                    ? ((((IData)(vlSelf->TOP__DOT__WB__DOT__rdataSignal)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                    : ((0U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                        ? ((((IData)(vlSelf->TOP__DOT__WB__DOT__rdataSignal)
                                              ? 0xffffffU
                                              : 0U) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                        : vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                : vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut);
    vlSelf->TOP__DOT__ID__DOT__DecoderOut_orMatrixOutputs 
        = (((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36))) 
            << 0x15U) | (((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34))) 
                          << 0x14U) | (((IData)((0U 
                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32))) 
                                        << 0x13U) | 
                                       (((IData)(((
                                                   (0x73U 
                                                    == 
                                                    (0x1f00ffU 
                                                     & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                   & (0xffU 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9))) 
                                                  & (0x7ffU 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0)))) 
                                         << 0x12U) 
                                        | (((IData)(
                                                    (0xffffffffU 
                                                     == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_64)) 
                                            << 0x11U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                               << 0x10U) 
                                              | (((((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                                    << 4U) 
                                                   | (((IData)(
                                                               (7U 
                                                                == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))) 
                                                       << 3U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23))) 
                                                          << 2U) 
                                                         | (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2)))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0xfU 
                                                              == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12))) 
                                                              << 7U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                                                 << 6U) 
                                                                | (((IData)(
                                                                            (7U 
                                                                             == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6))) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7))) 
                                                                       << 4U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5))) 
                                                                          << 3U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))) 
                                                                             << 2U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                                                                << 1U) 
                                                                               | (0xffffffffU 
                                                                                == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62))))))))))))))))));
    vlSelf->TOP__DOT__ID_io_ID2EX_ready = (1U & ((~ (IData)(vlSelf->TOP__DOT__ID2EXValid)) 
                                                 | (IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T)));
    vlSelf->TOP__DOT___MEM_io_EX2MEM_bits_T_1 = ((IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T) 
                                                 & (IData)(vlSelf->TOP__DOT__EXoutValid));
    vlSelf->TOP__DOT__EX__DOT__data1 = ((IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0)
                                         ? vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut
                                         : (((~ (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0)) 
                                             & (IData)(vlSelf->TOP__DOT__hazard1_1))
                                             ? vlSelf->io_commit_wdata
                                             : ((IData)(vlSelf->TOP__DOT__EX__DOT__hazard1Reg)
                                                 ? vlSelf->TOP__DOT__EX__DOT__bypassReg
                                                 : vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata1)));
    vlSelf->TOP__DOT__EX__DOT__data2 = ((IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)
                                         ? vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut
                                         : (((~ (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)) 
                                             & (IData)(vlSelf->TOP__DOT__hazard2_1))
                                             ? vlSelf->io_commit_wdata
                                             : ((IData)(vlSelf->TOP__DOT__EX__DOT__hazard2Reg)
                                                 ? vlSelf->TOP__DOT__EX__DOT__bypassReg
                                                 : vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata2)));
    vlSelf->TOP__DOT__IF_io_IF2ID_ready = (1U & ((~ (IData)(vlSelf->TOP__DOT__IF2IDValid)) 
                                                 | (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_ready)));
    vlSelf->TOP__DOT__IF_io_pcBr = (((1U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                      ? (vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm 
                                         + vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc)
                                      : 0U) | ((2U 
                                                & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                                ? vlSelf->TOP__DOT__EX__DOT__data1
                                                : 0U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
        = ((1U == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1))
            ? vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc
            : ((0U == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1))
                ? vlSelf->TOP__DOT__EX__DOT__data1 : 0U));
    vlSelf->TOP__DOT__EX__DOT__Alu_io_B = (((((0U == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                               ? vlSelf->TOP__DOT__EX__DOT__data2
                                               : 0U) 
                                             | ((1U 
                                                 == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                                 ? vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm
                                                 : 0U)) 
                                            | ((2U 
                                                == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                                ? 4U
                                                : 0U)) 
                                           | ((3U == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                               ? (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2)
                                               : 0U));
    vlSelf->TOP__DOT__IF__DOT___pcBrRecordReg_T = ((IData)(vlSelf->TOP__DOT__IF_io_IF2ID_ready) 
                                                   & (IData)(vlSelf->TOP__DOT__IF_io_IF2ID_valid));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit 
        = ((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18)) 
           & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
              & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                 >> 0x1fU)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B >> 4U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB = (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   ^ 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T))
                                                     ? 0U
                                                     : 0xffffffffU));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                    >> 4U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B >> 3U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                    >> 3U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B >> 2U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                    >> 2U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B >> 1U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                    >> 1U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & vlSelf->TOP__DOT__EX__DOT__Alu_io_B);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & vlSelf->TOP__DOT__EX__DOT__Alu_io_B));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
        = (0x3ffffffffULL & ((0x1ffffffffULL & ((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)) 
                                                + (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB)))) 
                             + (QData)((IData)((1U 
                                                & (~ (IData)(
                                                             (0xfU 
                                                              == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))))))));
    vlSelf->__VdfgTmp_h4824211d__0 = ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->__VdfgTmp_h44a07bf5__0 = ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->__VdfgTmp_h5634abfd__0 = ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->__VdfgTmp_h599285c1__0 = ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                       >> 1U))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 1U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 2U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1eU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1fU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1dU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1fU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit)) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                      & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1eU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 2U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 3U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 1U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 3U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 4U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 2U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1cU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1dU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1bU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1dU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1eU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1cU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 4U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 5U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 3U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 5U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 6U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 4U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1aU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1bU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x19U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1bU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1cU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1aU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 6U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 7U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 5U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 7U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 8U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 6U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x18U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x19U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x17U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x19U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x18U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 8U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 9U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 7U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 9U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 0xaU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 8U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x16U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x17U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x15U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x17U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x18U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x16U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xaU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xbU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 9U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xbU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xcU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xaU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x14U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x15U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x13U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x15U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x16U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x14U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xcU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xdU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xbU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xdU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xcU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x12U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x13U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x11U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x13U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x14U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x12U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xeU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xfU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xdU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xfU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x10U)) | 
                                  ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x10U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x11U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0xfU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x11U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x12U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x10U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30)) 
           | ((IData)(vlSelf->__VdfgTmp_h599285c1__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31)) 
           | ((IData)(vlSelf->__VdfgTmp_h599285c1__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30)) 
           | ((IData)(vlSelf->__VdfgTmp_h5634abfd__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31)) 
           | ((IData)(vlSelf->__VdfgTmp_h5634abfd__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28)) 
           | ((IData)(vlSelf->__VdfgTmp_h5634abfd__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29)) 
           | ((IData)(vlSelf->__VdfgTmp_h5634abfd__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24)) 
           | ((IData)(vlSelf->__VdfgTmp_h44a07bf5__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28)) 
           | ((IData)(vlSelf->__VdfgTmp_h44a07bf5__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26)) 
           | ((IData)(vlSelf->__VdfgTmp_h44a07bf5__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30)) 
           | ((IData)(vlSelf->__VdfgTmp_h44a07bf5__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25)) 
           | ((IData)(vlSelf->__VdfgTmp_h44a07bf5__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29)) 
           | ((IData)(vlSelf->__VdfgTmp_h44a07bf5__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27)) 
           | ((IData)(vlSelf->__VdfgTmp_h44a07bf5__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31)) 
           | ((IData)(vlSelf->__VdfgTmp_h44a07bf5__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout 
        = ((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                   >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
              | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))) 
             << 0x1fU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                 >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                            | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))) 
                           << 0x1eU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                               >> 4U)) 
                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                          | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))) 
                                         << 0x1dU) 
                                        | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                  >> 4U)) 
                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))) 
                                            << 0x1cU) 
                                           | (((((~ 
                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))) 
                                               << 0x1bU) 
                                              | (((((~ 
                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                      >> 4U)) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                                   | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))) 
                                                  << 0x1aU) 
                                                 | (((((~ 
                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                                      | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))) 
                                                     << 0x19U) 
                                                    | (((((~ 
                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                            >> 4U)) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                                         | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))) 
                                                        << 0x18U) 
                                                       | (((((~ 
                                                              (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                               >> 4U)) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                                            | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                                           << 0x17U) 
                                                          | (((((~ 
                                                                 (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                  >> 4U)) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                                               | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                  | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                                              << 0x16U) 
                                                             | (((((~ 
                                                                    (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                     >> 4U)) 
                                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                     | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                                 << 0x15U) 
                                                                | (((((~ 
                                                                       (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                        >> 4U)) 
                                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                                     | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                        | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                                    << 0x14U) 
                                                                   | (((((~ 
                                                                          (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                           >> 4U)) 
                                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                                        | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                                       << 0x13U) 
                                                                      | (((((~ 
                                                                             (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                              >> 4U)) 
                                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                                           | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                                          << 0x12U) 
                                                                         | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                                              | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                                             << 0x11U) 
                                                                            | ((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))) 
                                                                               << 0x10U)))))))))))))))) 
           | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))) 
               << 0xfU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))) 
                            << 0xeU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                               >> 4U)) 
                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))) 
                                         << 0xdU) | 
                                        (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                >> 4U)) 
                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                                           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))) 
                                          << 0xcU) 
                                         | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)) 
                                              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))) 
                                             << 0xbU) 
                                            | (((((~ 
                                                   (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)) 
                                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))) 
                                                << 0xaU) 
                                               | (((((~ 
                                                      (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)) 
                                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))) 
                                                   << 9U) 
                                                  | (((((~ 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)) 
                                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))) 
                                                      << 8U) 
                                                     | (((((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                             >> 4U)) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))) 
                                                         << 7U) 
                                                        | (((((~ 
                                                               (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                >> 4U)) 
                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))) 
                                                            << 6U) 
                                                           | (((((~ 
                                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                   >> 4U)) 
                                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))) 
                                                               << 5U) 
                                                              | (((((~ 
                                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                      >> 4U)) 
                                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))) 
                                                                  << 4U) 
                                                                 | (((((~ 
                                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                         >> 4U)) 
                                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))) 
                                                                     << 3U) 
                                                                    | (((((~ 
                                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                            >> 4U)) 
                                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))) 
                                                                        << 2U) 
                                                                       | (((((~ 
                                                                              (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                               >> 4U)) 
                                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))) 
                                                                           << 1U) 
                                                                          | (((~ 
                                                                               (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))))))))))))))))));
    vlSelf->TOP__DOT__EX__DOT__Alu_io_Result = ((((
                                                   (((((((0xfU 
                                                          == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T))
                                                          ? (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)
                                                          : 0U) 
                                                        | ((0xfU 
                                                            == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2))
                                                            ? (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)
                                                            : 0U)) 
                                                       | ((3U 
                                                           == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12))
                                                           ? 
                                                          (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                           & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)
                                                           : 0U)) 
                                                      | ((3U 
                                                          == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10))
                                                          ? 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                          | vlSelf->TOP__DOT__EX__DOT__Alu_io_B)
                                                          : 0U)) 
                                                     | ((7U 
                                                         == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8))
                                                         ? 
                                                        (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                         ^ vlSelf->TOP__DOT__EX__DOT__Alu_io_B)
                                                         : 0U)) 
                                                    | ((0xfU 
                                                        == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4))
                                                        ? 
                                                       (1U 
                                                        & (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                             & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                                            >> 0x1fU) 
                                                           | (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                                ^ vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                                               >> 0x1fU) 
                                                              & (IData)(
                                                                        (vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                                         >> 0x1fU)))))
                                                        : 0U)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6))
                                                       ? 
                                                      (1U 
                                                       & ((~ (IData)(
                                                                     (0xfU 
                                                                      == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                                          ^ (IData)(
                                                                    (vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                                     >> 0x20U))))
                                                       : 0U)) 
                                                  | ((7U 
                                                      == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14))
                                                      ? vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout
                                                      : 0U)) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16))
                                                     ? vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout
                                                     : 0U)) 
                                                | ((3U 
                                                    == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18))
                                                    ? vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout
                                                    : 0U));
    vlSelf->TOP__DOT__EX__DOT__brTaken = ((((IData)(
                                                    ((0U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3))) 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->TOP__DOT__EX__DOT__Alu_io_Result))) 
                                                        ^ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3)))) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3) 
                                                     >> 1U))) 
                                                | (3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3) 
                                                       >> 1U)))) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu_io_Result 
                                                  ^ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3)))) 
                                           | (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_jump)) 
                                          & ((0U != (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc)) 
                                             & (IData)(vlSelf->TOP__DOT__EXoutValid)));
    vlSelf->TOP__DOT__IF_io_brTaken = ((IData)(vlSelf->TOP__DOT__EX__DOT__brTaken) 
                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__brEnable));
    vlSelf->TOP__DOT__IDoutValid = ((~ (IData)(vlSelf->TOP__DOT__IF_io_brTaken)) 
                                    & (IData)(vlSelf->TOP__DOT__IF2IDValid));
    vlSelf->TOP__DOT__IFoutValid = ((IData)(vlSelf->TOP__DOT__IF_io_IF2ID_valid) 
                                    & ((~ (IData)(vlSelf->TOP__DOT__IF_io_brTaken)) 
                                       & (IData)(vlSelf->TOP__DOT__Pre2IFValid)));
    vlSelf->TOP__DOT__IF_io_pcBrRecord = ((IData)(vlSelf->TOP__DOT__IF_io_brTaken) 
                                          | (IData)(vlSelf->TOP__DOT__IF__DOT__pcBrRecordReg));
    vlSelf->TOP__DOT__IF_io_pcBrEnable = ((IData)(vlSelf->TOP__DOT__IF__DOT__pcBrEnableReg) 
                                          | ((~ (IData)(vlSelf->TOP__DOT__arFireReg)) 
                                             & (IData)(vlSelf->TOP__DOT__IF_io_brTaken)));
    vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1 = ((IData)(vlSelf->TOP__DOT__ID_io_ID2EX_ready) 
                                               & (IData)(vlSelf->TOP__DOT__IDoutValid));
    vlSelf->TOP__DOT___ID_io_IF2ID_bits_T_1 = ((IData)(vlSelf->TOP__DOT__IF__DOT___pcBrRecordReg_T) 
                                               & (IData)(vlSelf->TOP__DOT__IFoutValid));
    vlSelf->TOP__DOT__IF_io_pcNext = ((IData)(vlSelf->TOP__DOT__IF__DOT__brBufferValid)
                                       ? vlSelf->TOP__DOT__IF__DOT__brBuffer
                                       : ((IData)(vlSelf->TOP__DOT__IF_io_pcBrEnable)
                                           ? vlSelf->TOP__DOT__IF_io_pcBr
                                           : ((IData)(4U) 
                                              + vlSelf->TOP__DOT__IF__DOT__pcReg)));
    vlSelf->TOP__DOT___Pre2IFValid_T_2 = (1U & ((~ (IData)(vlSelf->TOP__DOT__IF_io_pcBrRecord)) 
                                                | (IData)(vlSelf->TOP__DOT__IF_io_pcBrEnable)));
    vlSelf->TOP__DOT__IF__DOT___pcReg_T = (((~ ((IData)(vlSelf->TOP__DOT__Pre2IFValid) 
                                                & (IData)(vlSelf->TOP__DOT___Pre2IFValid_T_2))) 
                                            | (IData)(vlSelf->TOP__DOT__IF__DOT___pcBrRecordReg_T)) 
                                           & (IData)(vlSelf->TOP__DOT__IF_io_Pre2IF_valid));
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
VL_ATTR_COLD void VTOP___024root___dump_triggers__ico(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__ico\n"); );
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
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_commit_pc = VL_RAND_RESET_I(32);
    vlSelf->io_commit_inst = VL_RAND_RESET_I(32);
    vlSelf->io_commit_rd = VL_RAND_RESET_I(5);
    vlSelf->io_commit_wen = VL_RAND_RESET_I(1);
    vlSelf->io_commit_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_commit_commit = VL_RAND_RESET_I(1);
    vlSelf->io_commit_halt = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_Pre2IF_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_IF2ID_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_IF2ID_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_brTaken = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_pcBr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF_io_pcNext = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF_io_pcBrEnable = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_pcBrRecord = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_ID2EX_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_hazard1 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_hazard2 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_stall = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_MEM2WB_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_MEM2WB_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_WBout_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__InstRam_arvalid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__Pre2IFValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF2IDValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID2EXValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX2MEMValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM2WBValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___Pre2IFValid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IFoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___ID_io_IF2ID_bits_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IDoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_regWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_jump = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_halt = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEMRegWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WBRegWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__hazard1_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__hazard2_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EXoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___MEM_io_EX2MEM_bits_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_halt = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___EX2MEMValid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEMoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___WB_io_MEM2WB_bits_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_halt = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__pcReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT__pcBrEnableReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__pcBrRecordReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__brBuffer = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT__brBufferValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT___pcBrRecordReg_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT___pcReg_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__rFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__rdataReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT___rFireReg_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_2 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_4 = VL_RAND_RESET_I(9);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_19 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_28 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_30 = VL_RAND_RESET_I(9);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_32 = VL_RAND_RESET_I(7);
    vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_52 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_60 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_64 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5 = VL_RAND_RESET_I(10);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12 = VL_RAND_RESET_I(6);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT__DecoderOut_orMatrixOutputs = VL_RAND_RESET_I(22);
    vlSelf->TOP__DOT__ID__DOT__Type = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h20af328f__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h1fa5bf6d__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h89094836__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hc297c6cf__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6398cd2a__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hf773fe7b__0 = 0;
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_45 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_58 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_77 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_90 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu_io_B = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu_io_Result = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__bypassReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__hazard1Reg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__hazard2Reg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT___bypassReg_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__data2 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__brEnable = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__brTaken = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0 = 0;
    vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0 = 0;
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 = VL_RAND_RESET_Q(34);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 = 0;
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_h61253848__0 = 0;
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__MEM__DOT__arDataFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__awFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__wFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT__rdataShift0 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__rdataShift1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__rdataSignal = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT__rDataFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT__bFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__InstRam__DOT__rstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__InstRam__DOT__awstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__InstRam__DOT__wstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__InstRam__DOT__nxt_rstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__InstRam__DOT__nxt_awstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__InstRam__DOT__nxt_wstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__InstRam__DOT__ReadDataReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__DataRam__DOT__rstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__DataRam__DOT__awstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__DataRam__DOT__wstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__DataRam__DOT__nxt_rstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__DataRam__DOT__nxt_awstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__DataRam__DOT__nxt_wstate = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__DataRam__DOT__ReadDataReg = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h599285c1__0 = 0;
    vlSelf->__VdfgTmp_h5634abfd__0 = 0;
    vlSelf->__VdfgTmp_h44a07bf5__0 = 0;
    vlSelf->__VdfgTmp_h4824211d__0 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
