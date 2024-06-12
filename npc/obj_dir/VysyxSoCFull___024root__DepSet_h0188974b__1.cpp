// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel = 
        (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                   >> 0xdU) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT___GEN) 
                               >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                         ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en)
                                           ? 0xffffffffU
                                           : 0U) & 
                                         (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en)
                                            ? ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT___GEN) 
                                                   >> 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hc62f52e0__0)
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr))))
                                                ? (
                                                   (((((((IData)(vlSelf->__VdfgTmp_h55fde8aa__0)
                                                          ? 
                                                         (0xffU 
                                                          & ((IData)(vlSelf->__VdfgTmp_h16e3b90e__0) 
                                                             >> 8U))
                                                          : 0U) 
                                                        << 0x18U) 
                                                       | ((((IData)(vlSelf->__VdfgTmp_hdea91f5a__0)
                                                             ? 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->__VdfgTmp_h55c39861__0) 
                                                                >> 8U))
                                                             : 0U) 
                                                           << 0x10U) 
                                                          | ((((IData)(vlSelf->__VdfgTmp_h9bc1fe6a__0)
                                                                ? 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__VdfgTmp_h26348201__0) 
                                                                   >> 8U))
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((IData)(vlSelf->__VdfgTmp_hd361cf40__0)
                                                                 ? 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__VdfgTmp_ha8478868__0) 
                                                                    >> 8U))
                                                                 : 0U)))) 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_bkAddr), 3U))) 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & ((((((IData)(vlSelf->__VdfgTmp_h55fde8aa__0)
                                                               ? 
                                                              (0xffU 
                                                               & (IData)(vlSelf->__VdfgTmp_h16e3b90e__0))
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_hdea91f5a__0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->__VdfgTmp_h55c39861__0))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h9bc1fe6a__0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->__VdfgTmp_h26348201__0))
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hd361cf40__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__VdfgTmp_ha8478868__0))
                                                                      : 0U)))) 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_bkAddr), 3U))) 
                                                          << 0x10U))) 
                                                   | ((0xff00U 
                                                       & ((((((IData)(vlSelf->__VdfgTmp_h6815901f__0)
                                                               ? 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->__VdfgTmp_h60be65a1__0) 
                                                                  >> 8U))
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_ha16805a6__0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h9d2483b6__0) 
                                                                     >> 8U))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h2e3dd07e__0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h485e8561__0) 
                                                                        >> 8U))
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hf536dcbc__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h83c7b5ef__0) 
                                                                         >> 8U))
                                                                      : 0U)))) 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr), 3U))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (((((IData)(vlSelf->__VdfgTmp_h6815901f__0)
                                                                ? 
                                                               (0xffU 
                                                                & (IData)(vlSelf->__VdfgTmp_h60be65a1__0))
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((IData)(vlSelf->__VdfgTmp_ha16805a6__0)
                                                                   ? 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->__VdfgTmp_h9d2483b6__0))
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((IData)(vlSelf->__VdfgTmp_h2e3dd07e__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__VdfgTmp_h485e8561__0))
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((IData)(vlSelf->__VdfgTmp_hf536dcbc__0)
                                                                       ? 
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->__VdfgTmp_h83c7b5ef__0))
                                                                       : 0U)))) 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr), 3U))))))
                                                : (
                                                   (((((((IData)(vlSelf->__VdfgTmp_h2921a7cb__0)
                                                          ? 
                                                         (0xffU 
                                                          & ((IData)(vlSelf->__VdfgTmp_hf6f6ec31__0) 
                                                             >> 8U))
                                                          : 0U) 
                                                        << 0x18U) 
                                                       | ((((IData)(vlSelf->__VdfgTmp_h59445149__0)
                                                             ? 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->__VdfgTmp_h2b4e487a__0) 
                                                                >> 8U))
                                                             : 0U) 
                                                           << 0x10U) 
                                                          | ((((IData)(vlSelf->__VdfgTmp_hc883fe42__0)
                                                                ? 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__VdfgTmp_h68d14f3a__0) 
                                                                   >> 8U))
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((IData)(vlSelf->__VdfgTmp_hc27a8002__0)
                                                                 ? 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__VdfgTmp_hfd9e4dd0__0) 
                                                                    >> 8U))
                                                                 : 0U)))) 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_bkAddr), 3U))) 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & ((((((IData)(vlSelf->__VdfgTmp_h2921a7cb__0)
                                                               ? 
                                                              (0xffU 
                                                               & (IData)(vlSelf->__VdfgTmp_hf6f6ec31__0))
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h59445149__0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->__VdfgTmp_h2b4e487a__0))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_hc883fe42__0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->__VdfgTmp_h68d14f3a__0))
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hc27a8002__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__VdfgTmp_hfd9e4dd0__0))
                                                                      : 0U)))) 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_bkAddr), 3U))) 
                                                          << 0x10U))) 
                                                   | ((0xff00U 
                                                       & ((((((IData)(vlSelf->__VdfgTmp_had71432b__0)
                                                               ? 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->__VdfgTmp_h2c89421b__0) 
                                                                  >> 8U))
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h7730dfc7__0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h201fd3b9__0) 
                                                                     >> 8U))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h2170c127__0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h2b9ae16f__0) 
                                                                        >> 8U))
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hbdec8fa1__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->__VdfgTmp_hfdbd0105__0) 
                                                                         >> 8U))
                                                                      : 0U)))) 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr), 3U))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (((((IData)(vlSelf->__VdfgTmp_had71432b__0)
                                                                ? 
                                                               (0xffU 
                                                                & (IData)(vlSelf->__VdfgTmp_h2c89421b__0))
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((IData)(vlSelf->__VdfgTmp_h7730dfc7__0)
                                                                   ? 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->__VdfgTmp_h201fd3b9__0))
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((IData)(vlSelf->__VdfgTmp_h2170c127__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__VdfgTmp_h2b9ae16f__0))
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((IData)(vlSelf->__VdfgTmp_hbdec8fa1__0)
                                                                       ? 
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->__VdfgTmp_hfdbd0105__0))
                                                                       : 0U)))) 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr), 3U)))))))
                                            : 0U) & 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en)
                                            ? 0xffffffffU
                                            : 0U))) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en)
                                            ? 0xffffffffU
                                            : 0U)));
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_he52184fd__0;
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_he52184fd__0;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__write));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__write));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN 
        = ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0)) 
            << 1U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN 
        = ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0)) 
            << 1U) | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                          >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0)));
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_3;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_3;
        vlSelf->__VdfgTmp_h9ccac383__0 = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        vlSelf->__VdfgTmp_h47b3ba35__0 = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                   >> 1U));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2 
            = (((IData)(vlSelf->__VdfgTmp_h47b3ba35__0) 
                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__wbBurstSel));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2 
            = (((IData)(vlSelf->__VdfgTmp_h47b3ba35__0) 
                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__wbBurstSel));
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0 = 0U;
        vlSelf->__VdfgTmp_h9ccac383__0 = 0U;
        vlSelf->__VdfgTmp_h47b3ba35__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2 
            = ((0x1feU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_rdColAddr)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2 
            = ((0x1feU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_rdColAddr)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN 
        = ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0)) 
            << 1U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN 
        = ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0)) 
            << 1U) | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                          >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0)));
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_3;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_3;
        vlSelf->__VdfgTmp_h6b6fc3e3__0 = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        vlSelf->__VdfgTmp_h7e6df614__0 = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                   >> 1U));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2 
            = (((IData)(vlSelf->__VdfgTmp_h7e6df614__0) 
                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__wbBurstSel));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2 
            = (((IData)(vlSelf->__VdfgTmp_h7e6df614__0) 
                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__wbBurstSel));
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0 = 0U;
        vlSelf->__VdfgTmp_h6b6fc3e3__0 = 0U;
        vlSelf->__VdfgTmp_h7e6df614__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2 
            = ((0x1feU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_rdColAddr)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2 
            = ((0x1feU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_rdColAddr)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h9ccac383__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h9ccac383__0));
    vlSelf->__VdfgTmp_hdb514151__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr)));
    vlSelf->__VdfgTmp_hdbfd317c__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr)));
    vlSelf->__VdfgTmp_hda093f5b__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0) 
                                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h6b6fc3e3__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h6b6fc3e3__0));
    vlSelf->__VdfgTmp_h88391828__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr)));
    vlSelf->__VdfgTmp_h880de9f5__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr)));
    vlSelf->__VdfgTmp_h8811f8ae__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0) 
                                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_1) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_2) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_3) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_1) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_2) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_3) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_hdb514151__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_hdb514151__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_hdbfd317c__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_hdbfd317c__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_hda093f5b__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_hda093f5b__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_1) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_2) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_3) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_1) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_2) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_3) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h88391828__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h88391828__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h880de9f5__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h880de9f5__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h8811f8ae__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(vlSelf->__VdfgTmp_h8811f8ae__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0));
}

extern const VlUnpacked<CData/*2:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_hc5070fcc_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_arvalid) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_awvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_awvalid) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_arvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h75460ee5__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                        ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & (vlSelf->__VdfgTmp_h26a921c3__0 
                         >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & (vlSelf->__VdfgTmp_h26a921c3__0 
                             >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & (vlSelf->__VdfgTmp_h26a921c3__0 
                                 >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & (vlSelf->__VdfgTmp_h26a921c3__0 
                                     >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & (vlSelf->__VdfgTmp_h26a921c3__0 
                                         >> 2U))) ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelf->__VdfgTmp_h26a921c3__0 
                                             >> 2U)))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelf->__VdfgTmp_h26a921c3__0 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622edac__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_wvalid))
            ? (0xfU & ((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb) 
                                       >> 4U))) ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb) 
                                                   >> 4U)
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622edac__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622edac__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h75460ee5__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h75460ee5__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__nodeIn_arready 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_arready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h4940e08b__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
            | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAWOI_in_0_awready_T_2 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_awready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits)) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_wready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_valid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits) 
            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rCount)) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isEmpty)))) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__bFire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_b_ready_0) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___awFifo_io_deq_bits)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                               >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)))) 
                    & (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                               << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__nodeIn_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_ar_ready_T_5 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isFull)) 
               & (0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                             >> 0x10U))) | ((0x200U 
                                             != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                                                 >> 0x10U)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__nodeIn_arready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w))) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x3fffU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(3U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 2U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x3fffU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(3U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 0xaU))))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__nodeIn_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAWOI_in_0_awready_T_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1457f715__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___wFireReg_T_1 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___wSel_T)) 
            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_w_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT___deqPtr_T 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__deqPtr) 
                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__enqPtr)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__bFire));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT___enqPtr_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_ar_ready_T_5) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_ar_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___arDataFireReg_T_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_ar_ready_T_5) 
            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_ar_valid_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__assertId) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__assert_0)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_ar_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_ar_ready_T_5) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0)) 
              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__assertId)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__assert_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__nodeIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___awFireReg_T_1 
        = (((0x200U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                        >> 0x10U)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__nodeIn_awready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_aw_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5 
        = (0xfU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                     : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                               : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___cacheMissCnt_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_ar_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_ar_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_in_ar_ready_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bypassReady)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_ar_ready)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT___enqPtr_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___awFireReg_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_MEM2WB_valid_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T)
                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__arDataFireReg) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___arDataFireReg_T_1))
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T_1)) 
                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__awFireReg) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___awFireReg_T_1)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wFireReg) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___wFireReg_T_1))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                  << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                               << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                            << 0xdU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits)
             ? (QData)((IData)(((0x2000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT___arFifo_io_deq_bits_addr)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                            >> 0x20U))
                                 : ((0x2000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT___arFifo_io_deq_bits_addr)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)
                                     : 0U)))) : 0ULL) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits)
               ? 0ULL : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                           ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                ? (((QData)((IData)(
                                                    ((1U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdataReg
                                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((1U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdataReg
                                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))
                                : 0ULL) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                             : 0ULL) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                        ? 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                         ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x38U))
                                                                         : 0U)
                                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                           ? 
                                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                            ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x30U))
                                                                            : 0U)
                                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6))))) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                              ? 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                               ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x28U))
                                                                               : 0U)
                                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5))))) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x20U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x18U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                               << 0x18U) 
                                                                              | ((0xff0000U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x10U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(vlSelf->__VdfgTmp_hf134a362__0)
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))
                                               : 0ULL)))
                           : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                       ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__converter__DOT__head)
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__converter__DOT__arHiFifo_1)
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__converter__DOT__arHiFifo_0))
                                           ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rdata)) 
                                              << 0x20U)
                                           : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rdata)))
                                       : 0ULL))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)
                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                               : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8dfa5a0c__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hb122031a__0 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___cacheMissCnt_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___Pre2IF_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_in_ar_ready_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEMoutValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_MEM2WB_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_bits_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_r_bits_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufValid)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufRdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_DataAxiLite_r_bits_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufValid)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufRdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits)
             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr)
                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_1_id)
                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_0_id))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits)
                       ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8dfa5a0c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8dfa5a0c__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___tagvRdata_0_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hfe177532__0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hb122031a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IF_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___Pre2IF_valid_T) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arFireReg)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____Vcellinp__retFifo__io_enq_bits 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state))
            ? (((QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bufBankIdx)
                                  ? (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_1_ext__DOT___RW0_ren_d0))
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_1_ext__DOT__Memory
                                     [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_1_ext__DOT___RW0_raddr_d0]
                                      : 0U) : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_0_ext__DOT___RW0_rmode_d0)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_0_ext__DOT___RW0_ren_d0))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_0_ext__DOT__Memory
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_0_ext__DOT___RW0_raddr_d0]
                                                : 0U)))) 
                << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bufBankIdx)
                                              ? (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_1_ext__DOT___RW0_rmode_d0)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_1_ext__DOT___RW0_ren_d0))
                                                  ? 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_1_ext__DOT__Memory
                                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_1_ext__DOT___RW0_raddr_d0]
                                                  : 0U)
                                              : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_0_ext__DOT___RW0_rmode_d0)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_0_ext__DOT___RW0_ren_d0))
                                                  ? 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_0_ext__DOT__Memory
                                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__cache_0_0_ext__DOT___RW0_raddr_d0]
                                                  : 0U)))))
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_r_bits_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift0 
        = ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut)
            ? VL_SHIFTR_QQI(64,64,32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_DataAxiLite_r_bits_rdata, 8U)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_DataAxiLite_r_bits_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_DataAxiLite_r_valid_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rid) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_valid_T_3)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufValid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_InstAxiLite_r_valid_0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rid)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_valid_T_3)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufValid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_r_ready_0 
        = (1U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rid))
                  ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufValid)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_r_ready_0))
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufValid)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_r_ready_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAWOI_in_0_awready_T_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____Vcellinp__tagv_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___tagvRdata_0_T_10) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hb122031a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift1 
        = ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut)
            ? VL_SHIFTR_QQI(64,64,32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift0, 0x10U)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rDataFire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_r_ready_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_DataAxiLite_r_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT___enqPtr_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__isFull)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hdb2503a3__0) 
              | (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
                  & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bufBankIdx) 
                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__refillCout)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_InstAxiLite_r_valid_0))) 
                 | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_InstAxiLite_r_valid_0)))));
    vlSelf->__Vtableidx1 = (((5U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext 
                                     >> 0x1dU)) << 0xaU) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid) 
                                << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__waySel_0) 
                                           << 8U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_ar_valid_0) 
                                            << 7U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_ar_ready) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufValid)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufRlast)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_bits_T_6)) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_InstAxiLite_r_valid_0) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_r_ready_0) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__casez_tmp 
        = VysyxSoCFull__ConstPool__TABLE_hc5070fcc_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_h15818a20__0 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_InstAxiLite_r_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT___deqPtr_T 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__deqPtr) 
                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__enqPtr)))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_r_ready_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_valid_T_3) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_bits_T_6))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_r_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_r_ready_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___dataNeedBuf_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_r_ready_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_valid_T_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_r_ready_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_hc764a469__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAWOI_in_0_awready_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___nodeIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2 
        = ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift1 
                       >> 0x20U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_valid_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_bits_memRead_0)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rDataFire)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_bits_memWrite_0)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__bFire))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___cacheWayRdata_0_0_T_14 
        = (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__ready)) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__refillCout)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_h15818a20__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___cacheWayRdata_0_1_T_14 
        = (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext 
             >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__ready)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__refillCout) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_h15818a20__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rCount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_r_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instNeedBuf 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rid)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_r_ready_0)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___dataNeedBuf_T_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataNeedBuf 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_r_ready_0)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___dataNeedBuf_T_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h24ceb8b7__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_wvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac9__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataSignal 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3) 
                     >> 2U)) & ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2 
                                    >> 0xfU) : ((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2 
                                                 >> 0x1fU)
                                                 : 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2 
                                                 >> 7U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_MEM2WB_ready 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arwDataValid))) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____Vcellinp__cache_0_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___cacheWayRdata_0_0_T_14) 
           & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__refillCout)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_InstAxiLite_r_valid_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____Vcellinp__cache_0_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___cacheWayRdata_0_1_T_14) 
           & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_InstAxiLite_r_valid_0) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__refillCout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT___deqPtr_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isEmpty)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_rready)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                         >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_hf985a723__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memRead)
            ? ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataSignal))) 
                    << 0x10U) | (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2))
                : ((0U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2
                    : (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataSignal))) 
                        << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrRead)
                ? ((0xf12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                    ? 0x15fdf02U : ((0xf11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                     ? 0x79737978U : 
                                    ((0x343U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvalReg
                                      : ((0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mcauseReg
                                          : ((0x341U 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mepcReg
                                              : ((0x305U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvecReg
                                                  : 
                                                 ((0x300U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mstatusReg
                                                   : 0U)))))))
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arwDataValid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_MEM2WB_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_MEM2WB_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_EX2MEM_ready_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_MEM2WB_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_MEM2WB_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h9a1e8016__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___bypass2Reg_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_EX2MEM_ready_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_EX2MEM_ready_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_awvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___io_ID2EX_ready_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_EX2MEM_ready_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa163a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__io_ID2EX_ready_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID2EXValid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___io_ID2EX_ready_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_IF2ID_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF2IDValid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__io_ID2EX_ready_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_arvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___io_Pre2IF_ready_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_IF2ID_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__io_IF2ID_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brFail_io_reset 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IFValid) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arInstValid))) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___io_Pre2IF_ready_T)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IF_valid));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__sel = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__sel;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state;
    vlSelf->ysyxSoCFull__DOT__psram__DOT___cmd_T = 
        (0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___addr_T = 
        (1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___data_7_T 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
           & (IData)((0U != (0x55U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel)))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte)) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__14\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                 >> 7U));
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel = vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__sel;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(0xdU) 
                                       + VL_SHIFTL_III(8,8,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
    vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n = ((~ 
                                                   ((~ (IData)(vlSelf->reset)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt))) 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n)));
    vlSelf->__VdfgTmp_hd6bf536c__0 = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                               ? (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))))
                                               : (- (IData)(
                                                            (0xeU 
                                                             > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                    ? (0x38U >> (7U & (((IData)(7U) 
                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)) 
                                       - (IData)(3U))))
                    : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                           >> 0x14U) : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                            >> 0x10U)
                                         : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0xcU)
                                             : ((0xbU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 4U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                    >> 4U)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                      >> 4U)
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x13U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                         >> 0x10U)
                                                         : 
                                                        ((0x14U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                          >> 0x1cU)
                                                          : 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                          >> 0x18U))))))))))))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt) {
        vlSelf->ysyxSoCFull__DOT___asic_psram_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck_swt;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten = 0xfU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__en0 = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & (1U & (0x35U >> (7U & ((IData)(7U) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter))))));
    } else {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
            vlSelf->ysyxSoCFull__DOT___asic_psram_sck 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
                = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout));
        } else {
            vlSelf->ysyxSoCFull__DOT___asic_psram_sck 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
                = (0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                            ? (0xebU >> (7U & (((IData)(7U) 
                                                - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                               - (IData)(3U))))
                            : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                   >> 0x14U) : ((9U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x10U)
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                     : 0U))))))));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = vlSelf->__VdfgTmp_hd6bf536c__0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__en0 
            = (3U & (IData)(vlSelf->__VdfgTmp_hd6bf536c__0));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__en0) 
           | (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt))) 
                     | (IData)(vlSelf->__VdfgTmp_hd6bf536c__0)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt))) 
                        << 2U) | (0xfffffffcU & (IData)(vlSelf->__VdfgTmp_hd6bf536c__0))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    // Body
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (0x1cU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                            | ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel;
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en) 
           & ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1))))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din 
        = (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__en0)) 
               | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
           | ((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))
                 ? 0xfU : 0U) & (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))
                                   ? (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_6)
                                        : 0U) | (((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_7)
                                                   : 0U) 
                                                 | (((4U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_4)
                                                      : 0U) 
                                                    | (((8U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_5)
                                                         : 0U) 
                                                       | (((0x10U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_2)
                                                            : 0U) 
                                                          | (((0x20U 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_3)
                                                               : 0U) 
                                                             | (((0x40U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_0)
                                                                  : 0U) 
                                                                | ((0x80U 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_1)
                                                                    : 0U))))))))
                                   : 0U) & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))
                                             ? 0xfU
                                             : 0U))) 
              & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))
                  ? 0xfU : 0U)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__isSwitch 
        = (0x35U == ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                               << 1U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_0) 
            << 0x1cU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din) 
                          << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_0) 
                                        << 0x14U) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_0) 
                                            << 0xcU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din) 
                                               << 8U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_0) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))))))));
}

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x202ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x180ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x185ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__5(vlSelf);
    }
}

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__act(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<10> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VysyxSoCFull___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VysyxSoCFull___024root___eval_phase__nba(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VysyxSoCFull___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
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
            VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 7343, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VysyxSoCFull___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 7343, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 7343, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VysyxSoCFull___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VysyxSoCFull___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->externalPins_ps2_clk & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_clk");}
    if (VL_UNLIKELY((vlSelf->externalPins_ps2_data 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_data");}
    if (VL_UNLIKELY((vlSelf->externalPins_uart_rx & 0xfeU))) {
        Verilated::overWidthError("externalPins_uart_rx");}
}
#endif  // VL_DEBUG
