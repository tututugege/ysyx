// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VysyxSoCFull___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
        bufp->chgCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
        bufp->chgIData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
        bufp->chgQData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
        bufp->chgCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
        bufp->chgBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_ar_valid));
        bufp->chgBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+14,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr_reset));
        bufp->chgBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_Pre2IF_valid));
        bufp->chgBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_InstAxiLite_ar_valid));
        bufp->chgBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_ar_valid));
        bufp->chgBit(oldp+19,(((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_enq_bits_addr 
                                           >> 0x10U)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_hff5c6ba8__0))));
        bufp->chgBit(oldp+20,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_ar_ready) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_ar_valid))));
        bufp->chgBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
        bufp->chgCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+24,((0xffU & ((IData)(0xdU) 
                                          + VL_SHIFTL_III(8,8,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+25,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+26,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                               & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+27,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+28,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                               & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+29,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+30,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                               & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+31,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+32,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgIData(oldp+33,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h6a47b861__0) 
                                  & (0U == (0xcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led)
                                  : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h6a47b861__0) 
                                      & (4U == (0xcU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__sw)
                                      : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h6a47b861__0) 
                                          & (8U == 
                                             (0xcU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg
                                          : 0U)))),32);
        bufp->chgBit(oldp+34,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                               & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+35,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+36,(((IData)(vlSelf->__VdfgTmp_h3458f574__0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0))));
        bufp->chgBit(oldp+37,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0))));
        bufp->chgBit(oldp+38,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0))));
        bufp->chgBit(oldp+39,(((IData)(vlSelf->__VdfgTmp_h3beb647b__0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgCData(oldp+40,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                       | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                        << 0x16U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                              << 0x12U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                 << 0x10U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                    << 0xeU) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9), 1U)))))),2);
        bufp->chgCData(oldp+41,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                   ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                       ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                   : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                 ? 0U
                                                 : 3U)
                                             : 0U))),2);
        bufp->chgBit(oldp+42,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                  << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
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
                                >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
        bufp->chgBit(oldp+43,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
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
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)))));
        bufp->chgBit(oldp+44,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8dfa5a0c__0))));
        bufp->chgBit(oldp+45,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_ready) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                   ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                      >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+46,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+47,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+48,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+49,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+50,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+51,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+52,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+53,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+54,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+56,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+57,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+58,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+59,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+60,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+61,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+62,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+63,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+64,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+66,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+67,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+68,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+69,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+70,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+71,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+72,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+73,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+74,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+75,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+76,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+78,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_WBoutValid))));
        bufp->chgBit(oldp+79,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IFValid) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arInstValid))) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___rFireReg_T)))));
        bufp->chgIData(oldp+80,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rFireReg)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rdataReg
                                  : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__pcReg)
                                      ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_r_bits_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_r_bits_rdata)))),32);
        bufp->chgBit(oldp+81,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_r_bits_rid)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_r_valid)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufValid))));
        bufp->chgIData(oldp+82,(((0U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0xfU)))
                                  ? 0U : ((((0x1fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf_io_wen))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT___io_WBout_bits_regWdata_T_1)
                                           : ((0x1fU 
                                               == (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0xfU)))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_31
                                               : ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_27
                                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT___GEN_58)))))))),32);
        bufp->chgIData(oldp+83,(((0U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x14U)))
                                  ? 0U : ((((0x1fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf_io_wen))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT___io_WBout_bits_regWdata_T_1)
                                           : ((0x1fU 
                                               == (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0x14U)))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_31
                                               : ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_27
                                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT___GEN_90)))))))),32);
        bufp->chgBit(oldp+84,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___arDataFireReg_T)))));
        bufp->chgBit(oldp+85,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_r_bits_rid) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_r_valid)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufValid))));
        bufp->chgBit(oldp+86,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo_io_deq_bits)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
        bufp->chgIData(oldp+87,(((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__pcReg)
                                  ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_r_bits_rdata 
                                             >> 0x20U))
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_r_bits_rdata))),32);
        bufp->chgQData(oldp+88,(((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                                  ? (QData)((IData)(
                                                    ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataSignal)
                                                        ? 0xffffU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2)))))
                                  : ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                                      ? (QData)((IData)(
                                                        ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataSignal)
                                                            ? 0xffffffU
                                                            : 0U) 
                                                          << 8U) 
                                                         | (0xffU 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2)))))
                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2))),64);
        bufp->chgBit(oldp+90,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_clint_r_ready) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rCount)))));
        bufp->chgBit(oldp+91,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT___isFullNext_T) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1)) 
                                   & ((1U & ((IData)(1U) 
                                             + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__enqPtr))) 
                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr)))) 
                               | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isFull))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+92,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT___isFullNext_T) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1)) 
                                   & ((1U & ((IData)(1U) 
                                             + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__enqPtr))) 
                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__deqPtr)))) 
                               | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+93,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT___isFullNext_T) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1)) 
                                   & ((1U & ((IData)(1U) 
                                             + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__enqPtr))) 
                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__deqPtr)))) 
                               | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
        bufp->chgIData(oldp+96,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
        bufp->chgIData(oldp+97,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
        bufp->chgBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
        bufp->chgBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
        bufp->chgBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
        bufp->chgBit(oldp+101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
        bufp->chgBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
        bufp->chgBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
        bufp->chgBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
        bufp->chgBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
        bufp->chgIData(oldp+110,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
        bufp->chgBit(oldp+111,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 2U)))));
        bufp->chgBit(oldp+112,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 2U)))));
        bufp->chgBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__fire));
        bufp->chgBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fire));
        bufp->chgBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+119,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+120,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+121,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                      << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n));
        bufp->chgIData(oldp+123,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
        bufp->chgIData(oldp+124,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
        bufp->chgBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
        bufp->chgBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
        bufp->chgCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
        bufp->chgBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
        bufp->chgSData(oldp+129,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 1U))),14);
        bufp->chgSData(oldp+130,((0x3fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 0xcU))),14);
        bufp->chgCData(oldp+131,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                        >> 0xaU))),2);
        bufp->chgBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable));
        bufp->chgIData(oldp+133,(vlSelf->__VdfgTmp_h9667f0db__0),32);
        bufp->chgBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite));
        bufp->chgIData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata),32);
        bufp->chgCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb),4);
        bufp->chgCData(oldp+137,((0x1fU & vlSelf->__VdfgTmp_h9667f0db__0)),5);
        bufp->chgBit(oldp+138,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                & (0x14U == (0x1cU 
                                             & vlSelf->__VdfgTmp_h9667f0db__0)))));
        bufp->chgBit(oldp+139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                & (0x10U == (0x1cU 
                                             & vlSelf->__VdfgTmp_h9667f0db__0)))));
        bufp->chgCData(oldp+140,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                    & (0xcU == (0x1cU 
                                                & vlSelf->__VdfgTmp_h9667f0db__0))) 
                                   << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                               & (8U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->__VdfgTmp_h9667f0db__0))) 
                                              << 2U) 
                                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                                  & (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSelf->__VdfgTmp_h9667f0db__0))) 
                                                 << 1U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                                   & (0U 
                                                      == 
                                                      (0x1cU 
                                                       & vlSelf->__VdfgTmp_h9667f0db__0))))))),4);
        bufp->chgBit(oldp+141,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                & (0x18U == (0x1cU 
                                             & vlSelf->__VdfgTmp_h9667f0db__0)))));
        bufp->chgCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
        bufp->chgBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
        bufp->chgCData(oldp+145,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
        bufp->chgCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
        bufp->chgIData(oldp+148,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
        bufp->chgIData(oldp+149,((0x7ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                              >> 2U))),19);
        bufp->chgCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__ram_ext__W0_mask),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgIData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
        bufp->chgBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
        bufp->chgCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
        bufp->chgCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
        bufp->chgIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
        bufp->chgCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
        bufp->chgBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
        bufp->chgBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+165,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
        bufp->chgBit(oldp+166,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
        bufp->chgCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
        bufp->chgBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
        bufp->chgBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
        bufp->chgBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgBit(oldp+175,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
        bufp->chgCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
        bufp->chgBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_ready));
        bufp->chgBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_valid));
        bufp->chgCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid),4);
        bufp->chgBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
        bufp->chgCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
        bufp->chgBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
        bufp->chgBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
        bufp->chgBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
        bufp->chgBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
        bufp->chgBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
        bufp->chgBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
        bufp->chgBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
        bufp->chgBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+223,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+224,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+225,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+226,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+227,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+228,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+231,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+233,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+234,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+244,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+245,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+247,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+248,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+249,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+250,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+251,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+252,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_r_bits_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_IF2ID_ready));
        bufp->chgBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_IF2ID_valid));
        bufp->chgQData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_r_bits_rdata),64);
        bufp->chgBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_ID2EX_ready));
        bufp->chgIData(oldp+259,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT___io_WBout_bits_regWdata_T_1)),32);
        bufp->chgBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_WBoutValid));
        bufp->chgBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_MEM2WB_ready));
        bufp->chgQData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_r_bits_rdata),64);
        bufp->chgBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_r_ready));
        bufp->chgBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_r_valid));
        bufp->chgQData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_r_bits_rdata),64);
        bufp->chgCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_r_bits_rid),4);
        bufp->chgBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_clint_r_ready));
        bufp->chgBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFoutValid));
        bufp->chgBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brFail_io_reset));
        bufp->chgQData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift0),64);
        bufp->chgQData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift1),64);
        bufp->chgQData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2),64);
        bufp->chgBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataSignal));
        bufp->chgBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rDataFire));
        bufp->chgBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__bFire));
        bufp->chgBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instNeedBuf));
        bufp->chgBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataNeedBuf));
        bufp->chgBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___instNeedBuf_T_4));
        bufp->chgBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
        bufp->chgBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
        bufp->chgBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+287,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
        __Vtemp_8[0U] = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7)) 
                                  << 0x38U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6)) 
                                                << 0x30U) 
                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2) 
                                                                            << 0x10U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1) 
                                                                               << 8U) 
                                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0)))))))))));
        __Vtemp_8[1U] = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7)) 
                                   << 0x38U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6)) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5)) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1) 
                                                                                << 8U) 
                                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0)))))))))) 
                                 >> 0x20U));
        __Vtemp_8[2U] = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_11) 
                          << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_10) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9) 
                                         << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8))));
        __Vtemp_8[3U] = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_15) 
                          << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13) 
                                         << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12))));
        bufp->chgIData(oldp+288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready)
                                   ? (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__head), 3U)))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_8[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x7fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__head), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__head), 3U))))) 
                                               | (__Vtemp_8[
                                                  (3U 
                                                   & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__head), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__head), 3U)))))
                                   : 0U)),32);
        bufp->chgIData(oldp+289,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [3U] << 0x18U) | 
                                  ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [2U] << 0x10U) 
                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [1U] << 8U) 
                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [0U])))),32);
        bufp->chgBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
        bufp->chgCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
        bufp->chgIData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
        bufp->chgQData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
        bufp->chgCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
        bufp->chgCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgCData(oldp+299,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                   ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
        bufp->chgCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
        bufp->chgIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgQData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
        bufp->chgCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
        bufp->chgCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_aw_valid));
        bufp->chgIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut),32);
        bufp->chgCData(oldp+316,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3))),3);
        bufp->chgBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar_io_other_w_valid));
        bufp->chgQData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_w_bits_wdata),64);
        bufp->chgCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_w_bits_wstrb),8);
        bufp->chgBit(oldp+322,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo_io_deq_bits)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_b_ready))));
        bufp->chgBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgCData(oldp+324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_ar_valid)
                                   ? 1U : 0U)),4);
        bufp->chgIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_enq_bits_addr),32);
        bufp->chgCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_master_ar_bits_arsize),3);
        bufp->chgBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+328,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
        bufp->chgBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+330,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+331,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
        bufp->chgBit(oldp+332,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgSData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgQData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
        bufp->chgQData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+377,(((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))) 
                                || (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                          >> 8U)))));
        bufp->chgWData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
        bufp->chgBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
        bufp->chgIData(oldp+383,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+384,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 2U))));
        bufp->chgBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+387,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgIData(oldp+388,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
        bufp->chgBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgQData(oldp+391,((((QData)((IData)(
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? (IData)(
                                                                   (vlSelf->__VdfgTmp_hf134a362__0 
                                                                    >> 0x38U))
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                   << 0x38U) | (((QData)((IData)(
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
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))),64);
        bufp->chgCData(oldp+393,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+394,((0x7800U == (0x7fffU 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
        bufp->chgCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
        bufp->chgCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
        bufp->chgCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
        bufp->chgSData(oldp+406,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                            >> 3U))),10);
        bufp->chgQData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
        bufp->chgSData(oldp+409,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 3U))),10);
        bufp->chgBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+411,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (0U == ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)) 
                                          | ((0xcU 
                                              & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                             | ((2U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x17U)) 
                                                | (1U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0xcU)))))))));
        bufp->chgBit(oldp+412,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 1U))));
        bufp->chgBit(oldp+413,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
        bufp->chgIData(oldp+414,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
        bufp->chgCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgQData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
        bufp->chgBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+423,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
        bufp->chgBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
        bufp->chgCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+483,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+487,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+491,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+495,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+499,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+503,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+507,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+511,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+515,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+519,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+523,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+527,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+535,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+539,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+543,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+547,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+555,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+559,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+563,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+567,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+575,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+579,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+583,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+587,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+591,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+595,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+599,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+603,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+607,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_pc),32);
        bufp->chgIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut),32);
        bufp->chgBit(oldp+613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT___io_WBout_valid_T) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memWrite)))));
        bufp->chgBit(oldp+614,((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_10)));
        bufp->chgBit(oldp+615,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_halt))));
        bufp->chgBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IFValid));
        bufp->chgBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arInstValid));
        bufp->chgIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__pcReg),32);
        bufp->chgBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_r_ready));
        bufp->chgBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arAssert));
        bufp->chgBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_brTaken));
        bufp->chgIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_pcBr),32);
        bufp->chgIData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_pcNext),32);
        bufp->chgBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brFail_io_out));
        bufp->chgBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF2IDValid));
        bufp->chgIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_pc),32);
        bufp->chgIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst),32);
        bufp->chgCData(oldp+628,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+629,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))));
        bufp->chgBit(oldp+630,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))));
        bufp->chgCData(oldp+631,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+632,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+633,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_ID2EX_bits_regWrite));
        bufp->chgIData(oldp+635,(((((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                       ? (((- (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x1fU))) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x13U)) 
                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x14U)))
                                       : 0U) | ((2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x1fU))) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x13U)) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 7U)))))
                                                 : 0U)) 
                                    | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                        ? (((- (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x1fU))) 
                                            << 0xdU) 
                                           | ((0x1000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 7U))))))
                                        : 0U)) | ((5U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst) 
                                                         | ((0x800U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0x14U))))))
                                                   : 0U)) 
                                  | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                      ? (0xfffff000U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                      : 0U))),32);
        bufp->chgCData(oldp+636,((((IData)((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_36))) 
                                   << 3U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14))) 
                                                 << 1U) 
                                                | (0U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12)))))),4);
        bufp->chgCData(oldp+637,((((IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_25))) 
                                   << 1U) | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23)))),2);
        bufp->chgCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_ID2EX_bits_aluSrc2),2);
        bufp->chgCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_ID2EX_bits_pcSrc),2);
        bufp->chgBit(oldp+640,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10))));
        bufp->chgBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_ID2EX_bits_csrWrite));
        bufp->chgBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_ID2EX_bits_csrRead));
        bufp->chgBit(oldp+643,((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_34)));
        bufp->chgBit(oldp+644,((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_64)));
        bufp->chgBit(oldp+645,((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_62)));
        bufp->chgBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf_io_wen));
        bufp->chgCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd),5);
        bufp->chgBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID2EXValid));
        bufp->chgIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pc),32);
        bufp->chgCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3),3);
        bufp->chgBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_memWrite));
        bufp->chgBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_memRead));
        bufp->chgCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs1),5);
        bufp->chgCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs2),5);
        bufp->chgCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rd),5);
        bufp->chgIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rdata1),32);
        bufp->chgIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rdata2),32);
        bufp->chgBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_regWrite));
        bufp->chgIData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_imm),32);
        bufp->chgCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp),4);
        bufp->chgCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc1),2);
        bufp->chgCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2),2);
        bufp->chgCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc),2);
        bufp->chgBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_jump));
        bufp->chgBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_csrWrite));
        bufp->chgBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_csrRead));
        bufp->chgBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_syscall));
        bufp->chgBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_mret));
        bufp->chgBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_halt));
        bufp->chgBit(oldp+670,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_stall)))));
        bufp->chgIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2),32);
        bufp->chgIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_Result),32);
        bufp->chgSData(oldp+673,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_imm)),12);
        bufp->chgIData(oldp+674,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs1)
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)),32);
        bufp->chgIData(oldp+675,((((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__pcBrImm
                                    : 0U) | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                              ? (0xfffffffeU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__pcBrImm)
                                              : 0U))),32);
        bufp->chgBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_brTaken));
        bufp->chgCData(oldp+677,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc33a15ef__0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0))),2);
        bufp->chgCData(oldp+678,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09b8096a__0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0))),2);
        bufp->chgBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_stall));
        bufp->chgBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid));
        bufp->chgBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_flush));
        bufp->chgBit(oldp+682,(((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut 
                                   >> 3U) == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                              >> 3U)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_memRead) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memWrite))) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid)))));
        bufp->chgIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_pc),32);
        bufp->chgCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3),3);
        bufp->chgBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_memWrite));
        bufp->chgBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_memRead));
        bufp->chgCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rd),5);
        bufp->chgIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rdata2),32);
        bufp->chgBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_regWrite));
        bufp->chgSData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_csrAddr),12);
        bufp->chgBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_csrWrite));
        bufp->chgIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_csrWdata),32);
        bufp->chgBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_csrRead));
        bufp->chgBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_syscall));
        bufp->chgBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_mret));
        bufp->chgBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_halt));
        bufp->chgBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_MEM2WB_valid));
        bufp->chgBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_ar_ready));
        bufp->chgBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_ar_valid));
        bufp->chgBit(oldp+700,(((0x200U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                            >> 0x10U)) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
        bufp->chgBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_aw_valid));
        bufp->chgBit(oldp+702,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__wSel)) 
                                      & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
        bufp->chgBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_w_valid));
        bufp->chgBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid));
        bufp->chgBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arwDataValid));
        bufp->chgCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3),3);
        bufp->chgBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memRead));
        bufp->chgBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memWrite));
        bufp->chgBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_regWrite));
        bufp->chgSData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr),12);
        bufp->chgBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWrite));
        bufp->chgIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWdata),32);
        bufp->chgBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrRead));
        bufp->chgBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_syscall));
        bufp->chgBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_mret));
        bufp->chgBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_halt));
        bufp->chgBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT___io_WBout_valid_T));
        bufp->chgBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memWrite))));
        bufp->chgBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_WBout_bits_syscall));
        bufp->chgIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvecReg),32);
        bufp->chgBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_WBout_bits_mret));
        bufp->chgIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mepcReg),32);
        bufp->chgBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_r_ready));
        bufp->chgBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_b_ready));
        bufp->chgBit(oldp+725,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_ar_valid)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_ar_ready))));
        bufp->chgBit(oldp+726,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+727,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isEmpty)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rCount)))));
        bufp->chgQData(oldp+728,((QData)((IData)(((0x2000004U 
                                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_deq_bits_addr)
                                                   ? (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                                              >> 0x20U))
                                                   : 
                                                  ((0x2000000U 
                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_deq_bits_addr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)
                                                    : 0U))))),64);
        bufp->chgCData(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_1_id)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_0_id))),4);
        bufp->chgBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arFireReg));
        bufp->chgBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDoutValid));
        bufp->chgBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEMRegWrite));
        bufp->chgBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBRegWrite));
        bufp->chgBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0));
        bufp->chgBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0));
        bufp->chgBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc33a15ef__0));
        bufp->chgBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09b8096a__0));
        bufp->chgBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXoutValid));
        bufp->chgBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEMoutValid));
        bufp->chgIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instFetchCnt),32);
        bufp->chgIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__brCnt),32);
        bufp->chgIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__brTkCnt),32);
        bufp->chgIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__calCnt),32);
        bufp->chgIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrCnt),32);
        bufp->chgIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ldCnt),32);
        bufp->chgIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stCnt),32);
        bufp->chgIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din),32);
        bufp->chgIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B),32);
        bufp->chgBit(oldp+750,((1U & (~ (IData)((0U 
                                                 != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_Result))))));
        bufp->chgBit(oldp+751,((1U & ((~ (IData)((0xfU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                      ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                 >> 0x20U))))));
        bufp->chgIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__bypass1Reg),32);
        bufp->chgIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__bypass2Reg),32);
        bufp->chgBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__hazard1Reg));
        bufp->chgBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__hazard2Reg));
        bufp->chgIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1),32);
        bufp->chgIData(oldp+757,((((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pc
                                    : 0U) | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1
                                              : 0U))),32);
        bufp->chgIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__pcBrImm),32);
        bufp->chgIData(oldp+759,((0xfffffffeU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__pcBrImm)),32);
        bufp->chgBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__brEnable));
        bufp->chgBit(oldp+761,(((IData)(((0U == (6U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3))) 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_Result))) 
                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))) 
                                | (((2U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3) 
                                                  >> 1U))) 
                                    | (3U == (3U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3) 
                                               >> 1U)))) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_Result 
                                      ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3))))));
        bufp->chgBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__brTaken));
        bufp->chgBit(oldp+763,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_14))));
        bufp->chgBit(oldp+764,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_18))));
        bufp->chgCData(oldp+765,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B)),5);
        bufp->chgIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout),32);
        bufp->chgCData(oldp+767,((0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp)))),4);
        bufp->chgBit(oldp+768,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp)))));
        bufp->chgBit(oldp+769,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 1U)))));
        bufp->chgBit(oldp+770,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 2U)))));
        bufp->chgBit(oldp+771,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 3U)))));
        bufp->chgBit(oldp+772,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))));
        bufp->chgBit(oldp+773,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 1U))));
        bufp->chgBit(oldp+774,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 2U))));
        bufp->chgBit(oldp+775,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 3U))));
        bufp->chgSData(oldp+776,((((IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_18))) 
                                   << 9U) | (((IData)(
                                                      (3U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_16))) 
                                              << 8U) 
                                             | (((IData)(
                                                         (7U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_14))) 
                                                 << 7U) 
                                                | (((IData)(
                                                            (3U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_12))) 
                                                    << 6U) 
                                                   | (((IData)(
                                                               (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_10))) 
                                                       << 5U) 
                                                      | (((IData)(
                                                                  (7U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_8))) 
                                                          << 4U) 
                                                         | (((IData)(
                                                                     (3U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_6))) 
                                                             << 3U) 
                                                            | (((IData)(
                                                                        (0xfU 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_4))) 
                                                                << 2U) 
                                                               | (((IData)(
                                                                           (0xfU 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_2))) 
                                                                   << 1U) 
                                                                  | (0xfU 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T)))))))))))),10);
        bufp->chgBit(oldp+777,((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T))));
        bufp->chgBit(oldp+778,((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_2))));
        bufp->chgBit(oldp+779,((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_4))));
        bufp->chgBit(oldp+780,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_6))));
        bufp->chgBit(oldp+781,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_8))));
        bufp->chgBit(oldp+782,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_10))));
        bufp->chgBit(oldp+783,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_12))));
        bufp->chgBit(oldp+784,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T_16))));
        bufp->chgBit(oldp+785,((1U & (~ (IData)((0xfU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T)))))));
        bufp->chgIData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB),32);
        bufp->chgQData(oldp+787,((0x1ffffffffULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)),33);
        bufp->chgIData(oldp+789,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)),32);
        bufp->chgBit(oldp+790,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+791,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+792,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+793,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+794,((1U & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB) 
                                         >> 0x1fU) 
                                        | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB) 
                                            >> 0x1fU) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                      >> 0x1fU)))))),32);
        bufp->chgIData(oldp+795,((1U & ((~ (IData)(
                                                   (0xfU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                   >> 0x20U))))),32);
        bufp->chgBit(oldp+796,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B)));
        bufp->chgCData(oldp+797,(((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 2U)) | 
                                  (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din))),4);
        bufp->chgCData(oldp+798,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 3U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          << 1U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 1U))))),4);
        bufp->chgCData(oldp+799,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 2U)) | 
                                  ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                   | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 2U))))),4);
        bufp->chgCData(oldp+800,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 1U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 1U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 3U))))),4);
        bufp->chgCData(oldp+801,(((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 2U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 4U))))),4);
        bufp->chgCData(oldp+802,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 1U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 3U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 5U))))),4);
        bufp->chgCData(oldp+803,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 2U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 4U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 6U))))),4);
        bufp->chgCData(oldp+804,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 3U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 5U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 7U))))),4);
        bufp->chgCData(oldp+805,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 6U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 8U))))),4);
        bufp->chgCData(oldp+806,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 5U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 7U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 9U))))),4);
        bufp->chgCData(oldp+807,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 6U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 8U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xaU))))),4);
        bufp->chgCData(oldp+808,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 7U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 9U)) | 
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xbU))))),4);
        bufp->chgCData(oldp+809,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 8U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xaU)) 
                                   | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xcU))))),4);
        bufp->chgCData(oldp+810,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 9U)) | 
                                  ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xbU)) 
                                   | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xdU))))),4);
        bufp->chgCData(oldp+811,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xaU)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xcU)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0xeU))))),4);
        bufp->chgCData(oldp+812,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xbU)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xdU)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0xfU))))),4);
        bufp->chgCData(oldp+813,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xcU)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xeU)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x10U))))),4);
        bufp->chgCData(oldp+814,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xdU)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xfU)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x11U))))),4);
        bufp->chgCData(oldp+815,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xeU)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x10U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x12U))))),4);
        bufp->chgCData(oldp+816,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xfU)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x11U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x13U))))),4);
        bufp->chgCData(oldp+817,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x10U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x12U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x14U))))),4);
        bufp->chgCData(oldp+818,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x11U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x13U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x15U))))),4);
        bufp->chgCData(oldp+819,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x12U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x14U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x16U))))),4);
        bufp->chgCData(oldp+820,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x13U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x15U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x17U))))),4);
        bufp->chgCData(oldp+821,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x14U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x16U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x18U))))),4);
        bufp->chgCData(oldp+822,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x15U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x17U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x19U))))),4);
        bufp->chgCData(oldp+823,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x16U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x18U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1aU))))),4);
        bufp->chgCData(oldp+824,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x17U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x19U)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1bU))))),4);
        bufp->chgCData(oldp+825,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x18U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1aU)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1cU))))),4);
        bufp->chgCData(oldp+826,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x19U)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1bU)) 
                                     | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1dU))))),4);
        bufp->chgCData(oldp+827,(((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1aU)) 
                                  | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1cU)) 
                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1eU)))),4);
        bufp->chgCData(oldp+828,((((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x1bU)) 
                                   | (4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1dU))) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                >> 0x1fU)))),4);
        bufp->chgIData(oldp+829,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                    << 0x1fU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                      << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)))))))))))))))))),32);
        bufp->chgBit(oldp+830,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 1U))));
        bufp->chgCData(oldp+831,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)))),4);
        bufp->chgCData(oldp+832,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1)))),4);
        bufp->chgCData(oldp+833,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2)))),4);
        bufp->chgCData(oldp+834,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3)))),4);
        bufp->chgCData(oldp+835,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4)))),4);
        bufp->chgCData(oldp+836,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5)))),4);
        bufp->chgCData(oldp+837,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6)))),4);
        bufp->chgCData(oldp+838,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7)))),4);
        bufp->chgCData(oldp+839,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8)))),4);
        bufp->chgCData(oldp+840,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9)))),4);
        bufp->chgCData(oldp+841,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10)))),4);
        bufp->chgCData(oldp+842,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11)))),4);
        bufp->chgCData(oldp+843,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12)))),4);
        bufp->chgCData(oldp+844,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13)))),4);
        bufp->chgCData(oldp+845,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14)))),4);
        bufp->chgCData(oldp+846,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15)))),4);
        bufp->chgCData(oldp+847,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16)))),4);
        bufp->chgCData(oldp+848,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17)))),4);
        bufp->chgCData(oldp+849,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18)))),4);
        bufp->chgCData(oldp+850,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19)))),4);
        bufp->chgCData(oldp+851,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20)))),4);
        bufp->chgCData(oldp+852,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21)))),4);
        bufp->chgCData(oldp+853,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22)))),4);
        bufp->chgCData(oldp+854,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23)))),4);
        bufp->chgCData(oldp+855,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24)))),4);
        bufp->chgCData(oldp+856,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25)))),4);
        bufp->chgCData(oldp+857,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26)))),4);
        bufp->chgCData(oldp+858,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27)))),4);
        bufp->chgCData(oldp+859,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28)))),4);
        bufp->chgCData(oldp+860,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29)))),4);
        bufp->chgCData(oldp+861,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30)))),4);
        bufp->chgCData(oldp+862,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31)))),4);
        bufp->chgIData(oldp+863,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                    << 0x1fU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                      << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)))))))))))))))))),32);
        bufp->chgBit(oldp+864,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 2U))));
        bufp->chgCData(oldp+865,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)))),4);
        bufp->chgCData(oldp+866,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1)))),4);
        bufp->chgCData(oldp+867,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2)))),4);
        bufp->chgCData(oldp+868,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3)))),4);
        bufp->chgCData(oldp+869,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4)))),4);
        bufp->chgCData(oldp+870,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5)))),4);
        bufp->chgCData(oldp+871,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6)))),4);
        bufp->chgCData(oldp+872,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7)))),4);
        bufp->chgCData(oldp+873,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8)))),4);
        bufp->chgCData(oldp+874,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9)))),4);
        bufp->chgCData(oldp+875,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10)))),4);
        bufp->chgCData(oldp+876,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11)))),4);
        bufp->chgCData(oldp+877,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12)))),4);
        bufp->chgCData(oldp+878,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13)))),4);
        bufp->chgCData(oldp+879,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14)))),4);
        bufp->chgCData(oldp+880,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15)))),4);
        bufp->chgCData(oldp+881,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16)))),4);
        bufp->chgCData(oldp+882,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17)))),4);
        bufp->chgCData(oldp+883,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18)))),4);
        bufp->chgCData(oldp+884,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19)))),4);
        bufp->chgCData(oldp+885,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20)))),4);
        bufp->chgCData(oldp+886,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21)))),4);
        bufp->chgCData(oldp+887,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22)))),4);
        bufp->chgCData(oldp+888,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23)))),4);
        bufp->chgCData(oldp+889,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24)))),4);
        bufp->chgCData(oldp+890,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25)))),4);
        bufp->chgCData(oldp+891,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26)))),4);
        bufp->chgCData(oldp+892,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27)))),4);
        bufp->chgCData(oldp+893,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28)))),4);
        bufp->chgCData(oldp+894,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29)))),4);
        bufp->chgCData(oldp+895,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30)))),4);
        bufp->chgCData(oldp+896,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31)))),4);
        bufp->chgIData(oldp+897,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                    << 0x1fU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                      << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)))))))))))))))))),32);
        bufp->chgBit(oldp+898,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 3U))));
        bufp->chgCData(oldp+899,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)))),4);
        bufp->chgCData(oldp+900,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1)))),4);
        bufp->chgCData(oldp+901,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2)))),4);
        bufp->chgCData(oldp+902,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3)))),4);
        bufp->chgCData(oldp+903,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4)))),4);
        bufp->chgCData(oldp+904,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5)))),4);
        bufp->chgCData(oldp+905,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6)))),4);
        bufp->chgCData(oldp+906,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7)))),4);
        bufp->chgCData(oldp+907,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8)))),4);
        bufp->chgCData(oldp+908,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9)))),4);
        bufp->chgCData(oldp+909,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10)))),4);
        bufp->chgCData(oldp+910,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11)))),4);
        bufp->chgCData(oldp+911,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12)))),4);
        bufp->chgCData(oldp+912,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13)))),4);
        bufp->chgCData(oldp+913,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14)))),4);
        bufp->chgCData(oldp+914,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15)))),4);
        bufp->chgCData(oldp+915,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16)))),4);
        bufp->chgCData(oldp+916,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17)))),4);
        bufp->chgCData(oldp+917,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18)))),4);
        bufp->chgCData(oldp+918,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19)))),4);
        bufp->chgCData(oldp+919,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20)))),4);
        bufp->chgCData(oldp+920,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21)))),4);
        bufp->chgCData(oldp+921,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22)))),4);
        bufp->chgCData(oldp+922,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23)))),4);
        bufp->chgCData(oldp+923,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24)))),4);
        bufp->chgCData(oldp+924,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25)))),4);
        bufp->chgCData(oldp+925,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26)))),4);
        bufp->chgCData(oldp+926,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27)))),4);
        bufp->chgCData(oldp+927,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28)))),4);
        bufp->chgCData(oldp+928,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29)))),4);
        bufp->chgCData(oldp+929,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30)))),4);
        bufp->chgCData(oldp+930,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31)))),4);
        bufp->chgIData(oldp+931,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                    << 0x1fU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                      << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))))))))),32);
        bufp->chgBit(oldp+932,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U))));
        bufp->chgCData(oldp+933,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))),4);
        bufp->chgCData(oldp+934,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))),4);
        bufp->chgCData(oldp+935,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))),4);
        bufp->chgCData(oldp+936,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))),4);
        bufp->chgCData(oldp+937,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))),4);
        bufp->chgCData(oldp+938,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))),4);
        bufp->chgCData(oldp+939,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))),4);
        bufp->chgCData(oldp+940,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))),4);
        bufp->chgCData(oldp+941,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))),4);
        bufp->chgCData(oldp+942,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))),4);
        bufp->chgCData(oldp+943,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))),4);
        bufp->chgCData(oldp+944,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))),4);
        bufp->chgCData(oldp+945,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))),4);
        bufp->chgCData(oldp+946,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))),4);
        bufp->chgCData(oldp+947,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))),4);
        bufp->chgCData(oldp+948,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                   << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))),4);
        bufp->chgCData(oldp+949,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))),4);
        bufp->chgCData(oldp+950,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)))),4);
        bufp->chgCData(oldp+951,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)))),4);
        bufp->chgCData(oldp+952,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)))),4);
        bufp->chgCData(oldp+953,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)))),4);
        bufp->chgCData(oldp+954,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)))),4);
        bufp->chgCData(oldp+955,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)))),4);
        bufp->chgCData(oldp+956,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)))),4);
        bufp->chgCData(oldp+957,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)))),4);
        bufp->chgCData(oldp+958,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)))),4);
        bufp->chgCData(oldp+959,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)))),4);
        bufp->chgCData(oldp+960,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)))),4);
        bufp->chgCData(oldp+961,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)))),4);
        bufp->chgCData(oldp+962,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)))),4);
        bufp->chgCData(oldp+963,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)))),4);
        bufp->chgCData(oldp+964,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)))),4);
        bufp->chgBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
        bufp->chgBit(oldp+966,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din)));
        bufp->chgBit(oldp+967,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 1U))));
        bufp->chgBit(oldp+968,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 2U))));
        bufp->chgBit(oldp+969,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 3U))));
        bufp->chgBit(oldp+970,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 4U))));
        bufp->chgBit(oldp+971,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 5U))));
        bufp->chgBit(oldp+972,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 6U))));
        bufp->chgBit(oldp+973,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 7U))));
        bufp->chgBit(oldp+974,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 8U))));
        bufp->chgBit(oldp+975,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 9U))));
        bufp->chgBit(oldp+976,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xaU))));
        bufp->chgBit(oldp+977,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xbU))));
        bufp->chgBit(oldp+978,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xcU))));
        bufp->chgBit(oldp+979,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xdU))));
        bufp->chgBit(oldp+980,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU))));
        bufp->chgBit(oldp+981,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xfU))));
        bufp->chgBit(oldp+982,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x10U))));
        bufp->chgBit(oldp+983,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x11U))));
        bufp->chgBit(oldp+984,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x12U))));
        bufp->chgBit(oldp+985,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x13U))));
        bufp->chgBit(oldp+986,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x14U))));
        bufp->chgBit(oldp+987,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x15U))));
        bufp->chgBit(oldp+988,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x16U))));
        bufp->chgBit(oldp+989,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x17U))));
        bufp->chgBit(oldp+990,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x18U))));
        bufp->chgBit(oldp+991,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x19U))));
        bufp->chgBit(oldp+992,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+993,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+994,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+995,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+996,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+997,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din)),2);
        bufp->chgCData(oldp+998,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din)),2);
        bufp->chgCData(oldp+999,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 1U))),2);
        bufp->chgCData(oldp+1000,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          << 1U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+1001,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1002,(((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 2U)))),2);
        bufp->chgCData(oldp+1003,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 3U))),2);
        bufp->chgCData(oldp+1004,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 1U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 3U)))),2);
        bufp->chgCData(oldp+1005,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1006,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 2U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 4U)))),2);
        bufp->chgCData(oldp+1007,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 5U))),2);
        bufp->chgCData(oldp+1008,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 3U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 5U)))),2);
        bufp->chgCData(oldp+1009,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1010,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 4U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 6U)))),2);
        bufp->chgCData(oldp+1011,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1012,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 5U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 7U)))),2);
        bufp->chgCData(oldp+1013,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1014,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 6U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 8U)))),2);
        bufp->chgCData(oldp+1015,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 9U))),2);
        bufp->chgCData(oldp+1016,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 7U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 9U)))),2);
        bufp->chgCData(oldp+1017,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xaU))),2);
        bufp->chgCData(oldp+1018,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 8U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xaU)))),2);
        bufp->chgCData(oldp+1019,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xbU))),2);
        bufp->chgCData(oldp+1020,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 9U)) | 
                                   (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xbU)))),2);
        bufp->chgCData(oldp+1021,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xcU))),2);
        bufp->chgCData(oldp+1022,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xaU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xcU)))),2);
        bufp->chgCData(oldp+1023,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xdU))),2);
        bufp->chgCData(oldp+1024,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xbU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xdU)))),2);
        bufp->chgCData(oldp+1025,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xeU))),2);
        bufp->chgCData(oldp+1026,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xcU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xeU)))),2);
        bufp->chgCData(oldp+1027,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xfU))),2);
        bufp->chgCData(oldp+1028,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xfU)))),2);
        bufp->chgCData(oldp+1029,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+1030,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x10U)))),2);
        bufp->chgCData(oldp+1031,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x11U))),2);
        bufp->chgCData(oldp+1032,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x11U)))),2);
        bufp->chgCData(oldp+1033,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x12U))),2);
        bufp->chgCData(oldp+1034,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x12U)))),2);
        bufp->chgCData(oldp+1035,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x13U))),2);
        bufp->chgCData(oldp+1036,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x13U)))),2);
        bufp->chgCData(oldp+1037,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x14U))),2);
        bufp->chgCData(oldp+1038,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x14U)))),2);
        bufp->chgCData(oldp+1039,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x15U))),2);
        bufp->chgCData(oldp+1040,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x15U)))),2);
        bufp->chgCData(oldp+1041,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+1042,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x16U)))),2);
        bufp->chgCData(oldp+1043,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x17U))),2);
        bufp->chgCData(oldp+1044,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x17U)))),2);
        bufp->chgCData(oldp+1045,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x18U))),2);
        bufp->chgCData(oldp+1046,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x18U)))),2);
        bufp->chgCData(oldp+1047,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x19U))),2);
        bufp->chgCData(oldp+1048,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x19U)))),2);
        bufp->chgCData(oldp+1049,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1aU))),2);
        bufp->chgCData(oldp+1050,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1aU)))),2);
        bufp->chgCData(oldp+1051,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1bU))),2);
        bufp->chgCData(oldp+1052,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1bU)))),2);
        bufp->chgCData(oldp+1053,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1cU))),2);
        bufp->chgCData(oldp+1054,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1cU)))),2);
        bufp->chgCData(oldp+1055,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1dU))),2);
        bufp->chgCData(oldp+1056,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1dU)))),2);
        bufp->chgCData(oldp+1057,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x1eU)),2);
        bufp->chgCData(oldp+1058,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1eU)))),2);
        bufp->chgCData(oldp+1059,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1fU))),2);
        bufp->chgCData(oldp+1060,(((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x1dU)) 
                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1fU))),2);
        bufp->chgBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0));
        bufp->chgBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2));
        bufp->chgBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1));
        bufp->chgBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3));
        bufp->chgBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4));
        bufp->chgBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5));
        bufp->chgBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6));
        bufp->chgBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7));
        bufp->chgBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8));
        bufp->chgBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9));
        bufp->chgBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10));
        bufp->chgBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11));
        bufp->chgBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12));
        bufp->chgBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13));
        bufp->chgBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14));
        bufp->chgBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15));
        bufp->chgBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16));
        bufp->chgBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17));
        bufp->chgBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18));
        bufp->chgBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19));
        bufp->chgBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20));
        bufp->chgBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21));
        bufp->chgBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22));
        bufp->chgBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23));
        bufp->chgBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24));
        bufp->chgBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25));
        bufp->chgBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26));
        bufp->chgBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27));
        bufp->chgBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28));
        bufp->chgBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29));
        bufp->chgBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30));
        bufp->chgBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31));
        bufp->chgCData(oldp+1093,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))),2);
        bufp->chgCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0),2);
        bufp->chgCData(oldp+1095,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1))),2);
        bufp->chgCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1),2);
        bufp->chgCData(oldp+1097,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))),2);
        bufp->chgCData(oldp+1098,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))),2);
        bufp->chgCData(oldp+1099,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))),2);
        bufp->chgCData(oldp+1100,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))),2);
        bufp->chgCData(oldp+1101,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))),2);
        bufp->chgCData(oldp+1102,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))),2);
        bufp->chgCData(oldp+1103,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))),2);
        bufp->chgCData(oldp+1104,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))),2);
        bufp->chgCData(oldp+1105,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))),2);
        bufp->chgCData(oldp+1106,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))),2);
        bufp->chgCData(oldp+1107,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))),2);
        bufp->chgCData(oldp+1108,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))),2);
        bufp->chgCData(oldp+1109,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))),2);
        bufp->chgCData(oldp+1110,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))),2);
        bufp->chgCData(oldp+1111,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))),2);
        bufp->chgCData(oldp+1112,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))),2);
        bufp->chgCData(oldp+1113,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))),2);
        bufp->chgCData(oldp+1114,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))),2);
        bufp->chgCData(oldp+1115,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))),2);
        bufp->chgCData(oldp+1116,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))),2);
        bufp->chgCData(oldp+1117,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))),2);
        bufp->chgCData(oldp+1118,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))),2);
        bufp->chgCData(oldp+1119,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))),2);
        bufp->chgCData(oldp+1120,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))),2);
        bufp->chgCData(oldp+1121,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))),2);
        bufp->chgCData(oldp+1122,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))),2);
        bufp->chgCData(oldp+1123,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))),2);
        bufp->chgCData(oldp+1124,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))),2);
        bufp->chgCData(oldp+1125,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))),2);
        bufp->chgCData(oldp+1126,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))),2);
        bufp->chgCData(oldp+1127,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))),2);
        bufp->chgCData(oldp+1128,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))),2);
        bufp->chgCData(oldp+1129,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))),2);
        bufp->chgCData(oldp+1130,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))),2);
        bufp->chgCData(oldp+1131,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))),2);
        bufp->chgCData(oldp+1132,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))),2);
        bufp->chgCData(oldp+1133,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))),2);
        bufp->chgCData(oldp+1134,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))),2);
        bufp->chgCData(oldp+1135,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))),2);
        bufp->chgCData(oldp+1136,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))),2);
        bufp->chgCData(oldp+1137,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))),2);
        bufp->chgCData(oldp+1138,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))),2);
        bufp->chgCData(oldp+1139,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))),2);
        bufp->chgCData(oldp+1140,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))),2);
        bufp->chgCData(oldp+1141,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))),2);
        bufp->chgCData(oldp+1142,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))),2);
        bufp->chgCData(oldp+1143,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))),2);
        bufp->chgCData(oldp+1144,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))),2);
        bufp->chgCData(oldp+1145,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))),2);
        bufp->chgCData(oldp+1146,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))),2);
        bufp->chgCData(oldp+1147,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))),2);
        bufp->chgCData(oldp+1148,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))),2);
        bufp->chgCData(oldp+1149,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))),2);
        bufp->chgCData(oldp+1150,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))),2);
        bufp->chgCData(oldp+1151,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))),2);
        bufp->chgCData(oldp+1152,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))),2);
        bufp->chgCData(oldp+1153,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30))),2);
        bufp->chgCData(oldp+1154,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30))),2);
        bufp->chgCData(oldp+1155,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31))),2);
        bufp->chgCData(oldp+1156,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31))),2);
        bufp->chgBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0));
        bufp->chgBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4));
        bufp->chgBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1));
        bufp->chgBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5));
        bufp->chgBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2));
        bufp->chgBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6));
        bufp->chgBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3));
        bufp->chgBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7));
        bufp->chgBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8));
        bufp->chgBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9));
        bufp->chgBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10));
        bufp->chgBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11));
        bufp->chgBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12));
        bufp->chgBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13));
        bufp->chgBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14));
        bufp->chgBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15));
        bufp->chgBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16));
        bufp->chgBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17));
        bufp->chgBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18));
        bufp->chgBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19));
        bufp->chgBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20));
        bufp->chgBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21));
        bufp->chgBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22));
        bufp->chgBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23));
        bufp->chgBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24));
        bufp->chgBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25));
        bufp->chgBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26));
        bufp->chgBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27));
        bufp->chgBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28));
        bufp->chgBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29));
        bufp->chgBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30));
        bufp->chgBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31));
        bufp->chgCData(oldp+1189,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))),2);
        bufp->chgCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0),2);
        bufp->chgCData(oldp+1191,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1))),2);
        bufp->chgCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1),2);
        bufp->chgCData(oldp+1193,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2))),2);
        bufp->chgCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2),2);
        bufp->chgCData(oldp+1195,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3))),2);
        bufp->chgCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3),2);
        bufp->chgCData(oldp+1197,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))),2);
        bufp->chgCData(oldp+1198,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))),2);
        bufp->chgCData(oldp+1199,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))),2);
        bufp->chgCData(oldp+1200,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))),2);
        bufp->chgCData(oldp+1201,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))),2);
        bufp->chgCData(oldp+1202,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))),2);
        bufp->chgCData(oldp+1203,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))),2);
        bufp->chgCData(oldp+1204,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))),2);
        bufp->chgCData(oldp+1205,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))),2);
        bufp->chgCData(oldp+1206,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))),2);
        bufp->chgCData(oldp+1207,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))),2);
        bufp->chgCData(oldp+1208,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))),2);
        bufp->chgCData(oldp+1209,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))),2);
        bufp->chgCData(oldp+1210,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))),2);
        bufp->chgCData(oldp+1211,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))),2);
        bufp->chgCData(oldp+1212,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))),2);
        bufp->chgCData(oldp+1213,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))),2);
        bufp->chgCData(oldp+1214,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))),2);
        bufp->chgCData(oldp+1215,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))),2);
        bufp->chgCData(oldp+1216,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))),2);
        bufp->chgCData(oldp+1217,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))),2);
        bufp->chgCData(oldp+1218,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))),2);
        bufp->chgCData(oldp+1219,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))),2);
        bufp->chgCData(oldp+1220,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))),2);
        bufp->chgCData(oldp+1221,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))),2);
        bufp->chgCData(oldp+1222,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))),2);
        bufp->chgCData(oldp+1223,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))),2);
        bufp->chgCData(oldp+1224,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))),2);
        bufp->chgCData(oldp+1225,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))),2);
        bufp->chgCData(oldp+1226,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))),2);
        bufp->chgCData(oldp+1227,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))),2);
        bufp->chgCData(oldp+1228,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))),2);
        bufp->chgCData(oldp+1229,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))),2);
        bufp->chgCData(oldp+1230,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))),2);
        bufp->chgCData(oldp+1231,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))),2);
        bufp->chgCData(oldp+1232,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))),2);
        bufp->chgCData(oldp+1233,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))),2);
        bufp->chgCData(oldp+1234,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))),2);
        bufp->chgCData(oldp+1235,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))),2);
        bufp->chgCData(oldp+1236,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))),2);
        bufp->chgCData(oldp+1237,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))),2);
        bufp->chgCData(oldp+1238,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))),2);
        bufp->chgCData(oldp+1239,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))),2);
        bufp->chgCData(oldp+1240,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))),2);
        bufp->chgCData(oldp+1241,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))),2);
        bufp->chgCData(oldp+1242,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))),2);
        bufp->chgCData(oldp+1243,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))),2);
        bufp->chgCData(oldp+1244,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))),2);
        bufp->chgCData(oldp+1245,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28))),2);
        bufp->chgCData(oldp+1246,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28))),2);
        bufp->chgCData(oldp+1247,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29))),2);
        bufp->chgCData(oldp+1248,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29))),2);
        bufp->chgCData(oldp+1249,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30))),2);
        bufp->chgCData(oldp+1250,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30))),2);
        bufp->chgCData(oldp+1251,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31))),2);
        bufp->chgCData(oldp+1252,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31))),2);
        bufp->chgBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0));
        bufp->chgBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8));
        bufp->chgBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1));
        bufp->chgBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9));
        bufp->chgBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2));
        bufp->chgBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10));
        bufp->chgBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3));
        bufp->chgBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11));
        bufp->chgBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4));
        bufp->chgBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12));
        bufp->chgBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5));
        bufp->chgBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13));
        bufp->chgBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6));
        bufp->chgBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14));
        bufp->chgBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7));
        bufp->chgBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15));
        bufp->chgBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16));
        bufp->chgBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17));
        bufp->chgBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18));
        bufp->chgBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19));
        bufp->chgBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20));
        bufp->chgBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21));
        bufp->chgBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22));
        bufp->chgBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23));
        bufp->chgBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24));
        bufp->chgBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25));
        bufp->chgBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26));
        bufp->chgBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27));
        bufp->chgBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28));
        bufp->chgBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29));
        bufp->chgBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30));
        bufp->chgBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31));
        bufp->chgCData(oldp+1285,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))),2);
        bufp->chgCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0),2);
        bufp->chgCData(oldp+1287,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1))),2);
        bufp->chgCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1),2);
        bufp->chgCData(oldp+1289,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2))),2);
        bufp->chgCData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2),2);
        bufp->chgCData(oldp+1291,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3))),2);
        bufp->chgCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3),2);
        bufp->chgCData(oldp+1293,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4))),2);
        bufp->chgCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4),2);
        bufp->chgCData(oldp+1295,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5))),2);
        bufp->chgCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5),2);
        bufp->chgCData(oldp+1297,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6))),2);
        bufp->chgCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6),2);
        bufp->chgCData(oldp+1299,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7))),2);
        bufp->chgCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7),2);
        bufp->chgCData(oldp+1301,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))),2);
        bufp->chgCData(oldp+1302,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))),2);
        bufp->chgCData(oldp+1303,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))),2);
        bufp->chgCData(oldp+1304,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))),2);
        bufp->chgCData(oldp+1305,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))),2);
        bufp->chgCData(oldp+1306,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))),2);
        bufp->chgCData(oldp+1307,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))),2);
        bufp->chgCData(oldp+1308,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))),2);
        bufp->chgCData(oldp+1309,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))),2);
        bufp->chgCData(oldp+1310,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))),2);
        bufp->chgCData(oldp+1311,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))),2);
        bufp->chgCData(oldp+1312,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))),2);
        bufp->chgCData(oldp+1313,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))),2);
        bufp->chgCData(oldp+1314,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))),2);
        bufp->chgCData(oldp+1315,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))),2);
        bufp->chgCData(oldp+1316,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))),2);
        bufp->chgCData(oldp+1317,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))),2);
        bufp->chgCData(oldp+1318,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))),2);
        bufp->chgCData(oldp+1319,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))),2);
        bufp->chgCData(oldp+1320,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))),2);
        bufp->chgCData(oldp+1321,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))),2);
        bufp->chgCData(oldp+1322,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))),2);
        bufp->chgCData(oldp+1323,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))),2);
        bufp->chgCData(oldp+1324,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))),2);
        bufp->chgCData(oldp+1325,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))),2);
        bufp->chgCData(oldp+1326,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))),2);
        bufp->chgCData(oldp+1327,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))),2);
        bufp->chgCData(oldp+1328,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))),2);
        bufp->chgCData(oldp+1329,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))),2);
        bufp->chgCData(oldp+1330,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))),2);
        bufp->chgCData(oldp+1331,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))),2);
        bufp->chgCData(oldp+1332,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))),2);
        bufp->chgCData(oldp+1333,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24))),2);
        bufp->chgCData(oldp+1334,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24))),2);
        bufp->chgCData(oldp+1335,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25))),2);
        bufp->chgCData(oldp+1336,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25))),2);
        bufp->chgCData(oldp+1337,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26))),2);
        bufp->chgCData(oldp+1338,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26))),2);
        bufp->chgCData(oldp+1339,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27))),2);
        bufp->chgCData(oldp+1340,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27))),2);
        bufp->chgCData(oldp+1341,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28))),2);
        bufp->chgCData(oldp+1342,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28))),2);
        bufp->chgCData(oldp+1343,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29))),2);
        bufp->chgCData(oldp+1344,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29))),2);
        bufp->chgCData(oldp+1345,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30))),2);
        bufp->chgCData(oldp+1346,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30))),2);
        bufp->chgCData(oldp+1347,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31))),2);
        bufp->chgCData(oldp+1348,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31))),2);
        bufp->chgBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0));
        bufp->chgBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16));
        bufp->chgBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1));
        bufp->chgBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17));
        bufp->chgBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2));
        bufp->chgBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18));
        bufp->chgBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3));
        bufp->chgBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19));
        bufp->chgBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4));
        bufp->chgBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20));
        bufp->chgBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5));
        bufp->chgBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21));
        bufp->chgBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6));
        bufp->chgBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22));
        bufp->chgBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7));
        bufp->chgBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23));
        bufp->chgBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8));
        bufp->chgBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24));
        bufp->chgBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9));
        bufp->chgBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25));
        bufp->chgBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10));
        bufp->chgBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26));
        bufp->chgBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11));
        bufp->chgBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27));
        bufp->chgBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12));
        bufp->chgBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28));
        bufp->chgBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13));
        bufp->chgBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29));
        bufp->chgBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14));
        bufp->chgBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30));
        bufp->chgBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15));
        bufp->chgBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31));
        bufp->chgCData(oldp+1381,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))),2);
        bufp->chgCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0),2);
        bufp->chgCData(oldp+1383,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1))),2);
        bufp->chgCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1),2);
        bufp->chgCData(oldp+1385,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2))),2);
        bufp->chgCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2),2);
        bufp->chgCData(oldp+1387,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3))),2);
        bufp->chgCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3),2);
        bufp->chgCData(oldp+1389,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4))),2);
        bufp->chgCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4),2);
        bufp->chgCData(oldp+1391,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5))),2);
        bufp->chgCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5),2);
        bufp->chgCData(oldp+1393,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6))),2);
        bufp->chgCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6),2);
        bufp->chgCData(oldp+1395,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7))),2);
        bufp->chgCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7),2);
        bufp->chgCData(oldp+1397,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8))),2);
        bufp->chgCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8),2);
        bufp->chgCData(oldp+1399,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9))),2);
        bufp->chgCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9),2);
        bufp->chgCData(oldp+1401,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10))),2);
        bufp->chgCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10),2);
        bufp->chgCData(oldp+1403,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11))),2);
        bufp->chgCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11),2);
        bufp->chgCData(oldp+1405,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12))),2);
        bufp->chgCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12),2);
        bufp->chgCData(oldp+1407,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13))),2);
        bufp->chgCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13),2);
        bufp->chgCData(oldp+1409,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14))),2);
        bufp->chgCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14),2);
        bufp->chgCData(oldp+1411,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15))),2);
        bufp->chgCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15),2);
        bufp->chgCData(oldp+1413,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))),2);
        bufp->chgCData(oldp+1414,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))),2);
        bufp->chgCData(oldp+1415,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))),2);
        bufp->chgCData(oldp+1416,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))),2);
        bufp->chgCData(oldp+1417,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))),2);
        bufp->chgCData(oldp+1418,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))),2);
        bufp->chgCData(oldp+1419,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))),2);
        bufp->chgCData(oldp+1420,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))),2);
        bufp->chgCData(oldp+1421,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))),2);
        bufp->chgCData(oldp+1422,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))),2);
        bufp->chgCData(oldp+1423,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))),2);
        bufp->chgCData(oldp+1424,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))),2);
        bufp->chgCData(oldp+1425,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))),2);
        bufp->chgCData(oldp+1426,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))),2);
        bufp->chgCData(oldp+1427,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))),2);
        bufp->chgCData(oldp+1428,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))),2);
        bufp->chgCData(oldp+1429,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))),2);
        bufp->chgCData(oldp+1430,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))),2);
        bufp->chgCData(oldp+1431,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))),2);
        bufp->chgCData(oldp+1432,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))),2);
        bufp->chgCData(oldp+1433,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))),2);
        bufp->chgCData(oldp+1434,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))),2);
        bufp->chgCData(oldp+1435,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))),2);
        bufp->chgCData(oldp+1436,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))),2);
        bufp->chgCData(oldp+1437,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))),2);
        bufp->chgCData(oldp+1438,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))),2);
        bufp->chgCData(oldp+1439,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))),2);
        bufp->chgCData(oldp+1440,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))),2);
        bufp->chgCData(oldp+1441,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))),2);
        bufp->chgCData(oldp+1442,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))),2);
        bufp->chgCData(oldp+1443,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))),2);
        bufp->chgCData(oldp+1444,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))),2);
        bufp->chgBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL));
        bufp->chgBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR));
        bufp->chgBit(oldp+1447,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B))));
        bufp->chgCData(oldp+1448,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                    << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))))))))),8);
        bufp->chgSData(oldp+1449,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))))))))))))))))),16);
        bufp->chgCData(oldp+1450,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                    << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))))))))),8);
        bufp->chgSData(oldp+1451,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))))))))))))))))),16);
        bufp->chgBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL));
        bufp->chgBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR));
        bufp->chgBit(oldp+1454,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                          >> 1U)))));
        bufp->chgCData(oldp+1455,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                    << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))))))))),8);
        bufp->chgSData(oldp+1456,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))))))))))))))))),16);
        bufp->chgCData(oldp+1457,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                    << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))))))))),8);
        bufp->chgSData(oldp+1458,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))))))))))))))))),16);
        bufp->chgBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL));
        bufp->chgBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR));
        bufp->chgBit(oldp+1461,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                          >> 2U)))));
        bufp->chgCData(oldp+1462,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                    << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))))))))),8);
        bufp->chgSData(oldp+1463,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))))))))))))))))),16);
        bufp->chgCData(oldp+1464,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                    << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))))))))),8);
        bufp->chgSData(oldp+1465,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))))))))))))))))),16);
        bufp->chgBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL));
        bufp->chgBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR));
        bufp->chgBit(oldp+1468,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                          >> 3U)))));
        bufp->chgCData(oldp+1469,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                    << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))))))),8);
        bufp->chgSData(oldp+1470,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))))))))))))))),16);
        bufp->chgCData(oldp+1471,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                    << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))),8);
        bufp->chgSData(oldp+1472,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))))))))),16);
        bufp->chgBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL));
        bufp->chgBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR));
        bufp->chgBit(oldp+1475,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                          >> 4U)))));
        bufp->chgBit(oldp+1476,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))));
        bufp->chgBit(oldp+1477,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)))));
        bufp->chgBit(oldp+1478,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)))));
        bufp->chgBit(oldp+1479,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)))));
        bufp->chgBit(oldp+1480,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)))));
        bufp->chgBit(oldp+1481,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)))));
        bufp->chgBit(oldp+1482,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)))));
        bufp->chgBit(oldp+1483,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)))));
        bufp->chgBit(oldp+1484,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)))));
        bufp->chgBit(oldp+1485,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)))));
        bufp->chgBit(oldp+1486,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)))));
        bufp->chgBit(oldp+1487,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)))));
        bufp->chgBit(oldp+1488,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)))));
        bufp->chgBit(oldp+1489,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)))));
        bufp->chgBit(oldp+1490,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)))));
        bufp->chgBit(oldp+1491,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)))));
        bufp->chgBit(oldp+1492,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))));
        bufp->chgBit(oldp+1493,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1))))));
        bufp->chgBit(oldp+1494,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2))))));
        bufp->chgBit(oldp+1495,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3))))));
        bufp->chgBit(oldp+1496,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4))))));
        bufp->chgBit(oldp+1497,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5))))));
        bufp->chgBit(oldp+1498,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6))))));
        bufp->chgBit(oldp+1499,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7))))));
        bufp->chgBit(oldp+1500,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8))))));
        bufp->chgBit(oldp+1501,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9))))));
        bufp->chgBit(oldp+1502,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10))))));
        bufp->chgBit(oldp+1503,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11))))));
        bufp->chgBit(oldp+1504,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12))))));
        bufp->chgBit(oldp+1505,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13))))));
        bufp->chgBit(oldp+1506,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14))))));
        bufp->chgBit(oldp+1507,((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15))))));
        bufp->chgCData(oldp+1508,((((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                          >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))) 
                                    << 7U) | (((((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))) 
                                               << 6U) 
                                              | (((((~ 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                      >> 4U)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))) 
                                                  << 5U) 
                                                 | (((((~ 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))) 
                                                     << 4U) 
                                                    | (((((~ 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                            >> 4U)) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))) 
                                                        << 3U) 
                                                       | (((((~ 
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                               >> 4U)) 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))) 
                                                           << 2U) 
                                                          | (((((~ 
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                  >> 4U)) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))) 
                                                              << 1U) 
                                                             | (((~ 
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                   >> 4U)) 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))),8);
        bufp->chgSData(oldp+1509,((((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                          >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))) 
                                    << 0xfU) | ((((
                                                   (~ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                     >> 4U)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))) 
                                                 << 0xeU) 
                                                | (((((~ 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))) 
                                                    << 0xdU) 
                                                   | (((((~ 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                           >> 4U)) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))) 
                                                       << 0xcU) 
                                                      | (((((~ 
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                              >> 4U)) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))) 
                                                          << 0xbU) 
                                                         | (((((~ 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                 >> 4U)) 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))) 
                                                             << 0xaU) 
                                                            | (((((~ 
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                    >> 4U)) 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))) 
                                                                << 9U) 
                                                               | (((((~ 
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                       >> 4U)) 
                                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))) 
                                                                   << 8U) 
                                                                  | (((((~ 
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                          >> 4U)) 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))) 
                                                                      << 7U) 
                                                                     | (((((~ 
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                             >> 4U)) 
                                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))) 
                                                                         << 6U) 
                                                                        | (((((~ 
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))) 
                                                                            << 5U) 
                                                                           | (((((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))) 
                                                                               << 4U) 
                                                                              | (((((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))) 
                                                                                << 3U) 
                                                                                | (((((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))) 
                                                                                << 2U) 
                                                                                | (((((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))) 
                                                                                << 1U) 
                                                                                | (((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))))))))))),16);
        bufp->chgCData(oldp+1510,((((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                          >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                     | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                    << 7U) | (((((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                                | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                               << 6U) 
                                              | (((((~ 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                      >> 4U)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                   | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                  << 5U) 
                                                 | (((((~ 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                      | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                     << 4U) 
                                                    | (((((~ 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                            >> 4U)) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                         | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                        << 3U) 
                                                       | (((((~ 
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                               >> 4U)) 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                            | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                           << 2U) 
                                                          | (((((~ 
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                  >> 4U)) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                               | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                              << 1U) 
                                                             | (((~ 
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                   >> 4U)) 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                                | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))),8);
        bufp->chgSData(oldp+1511,((((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                          >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
                                     | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))) 
                                    << 0xfU) | ((((
                                                   (~ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                     >> 4U)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                                                  | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))) 
                                                 << 0xeU) 
                                                | (((((~ 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                                     | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))) 
                                                    << 0xdU) 
                                                   | (((((~ 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                           >> 4U)) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                                        | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))) 
                                                       << 0xcU) 
                                                      | (((((~ 
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                              >> 4U)) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                                           | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))) 
                                                          << 0xbU) 
                                                         | (((((~ 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                 >> 4U)) 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                                              | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))) 
                                                             << 0xaU) 
                                                            | (((((~ 
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                    >> 4U)) 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                                                 | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))) 
                                                                << 9U) 
                                                               | (((((~ 
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                       >> 4U)) 
                                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                                                    | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))) 
                                                                   << 8U) 
                                                                  | (((((~ 
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                          >> 4U)) 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                                                       | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                                                      << 7U) 
                                                                     | (((((~ 
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                             >> 4U)) 
                                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                                                          | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                                                         << 6U) 
                                                                        | (((((~ 
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                                             | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                                            << 5U) 
                                                                           | (((((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                                               << 4U) 
                                                                              | (((((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                                                << 3U) 
                                                                                | (((((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                                                << 2U) 
                                                                                | (((((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                                                << 1U) 
                                                                                | (((~ 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h51392a7c__0) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))))))))))),16);
        bufp->chgIData(oldp+1512,((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)),32);
        bufp->chgBit(oldp+1513,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 2U)))));
        bufp->chgBit(oldp+1514,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 5U)))));
        bufp->chgBit(oldp+1515,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)));
        bufp->chgBit(oldp+1516,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 1U))));
        bufp->chgBit(oldp+1517,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 3U)))));
        bufp->chgBit(oldp+1518,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 4U)))));
        bufp->chgBit(oldp+1519,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 6U)))));
        bufp->chgBit(oldp+1520,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1521,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1522,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1523,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 2U))));
        bufp->chgBit(oldp+1524,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 3U))));
        bufp->chgBit(oldp+1525,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 4U))));
        bufp->chgBit(oldp+1526,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1527,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1528,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1529,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1530,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1531,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x1fU)))));
        bufp->chgCData(oldp+1532,(((0x40U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0xeU)) 
                                             << 6U)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h77b1137a__0))),7);
        bufp->chgBit(oldp+1533,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x1eU)))));
        bufp->chgCData(oldp+1534,(((0x20U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x1bU)) 
                                                << 4U)) 
                                      | ((8U & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x1cU)) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x1dU)) 
                                                   << 2U)) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))),6);
        bufp->chgBit(oldp+1535,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 5U))));
        bufp->chgBit(oldp+1536,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 6U))));
        bufp->chgBit(oldp+1537,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 7U)))));
        bufp->chgBit(oldp+1538,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 8U)))));
        bufp->chgBit(oldp+1539,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 9U)))));
        bufp->chgBit(oldp+1540,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1541,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0xbU)))));
        bufp->chgBit(oldp+1542,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+1543,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+1544,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1545,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1546,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1547,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1548,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1549,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1550,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1551,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x18U)))));
        bufp->chgCData(oldp+1552,(((0x80U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x18U)) 
                                             << 7U)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h35f65dd2__0))),8);
        bufp->chgSData(oldp+1553,(((0x8000U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x10U)) 
                                               << 0xfU)) 
                                   | ((0x4000U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0x11U)) 
                                                  << 0xeU)) 
                                      | ((0x2000U & 
                                          ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x12U)) 
                                           << 0xdU)) 
                                         | ((0x1000U 
                                             & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x13U)) 
                                                << 0xcU)) 
                                            | ((0x800U 
                                                & ((~ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x14U)) 
                                                   << 0xbU)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h6adb00ff__0))))))),16);
        bufp->chgCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__DecoderOut_hi_lo_9),8);
        bufp->chgBit(oldp+1555,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1556,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1557,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0xeU))));
        bufp->chgCData(oldp+1558,(((0x40U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                             >> 8U)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h77b1137a__0))),7);
        bufp->chgBit(oldp+1559,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0x14U))));
        bufp->chgSData(oldp+1560,(((0x8000U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x10U)) 
                                               << 0xfU)) 
                                   | ((0x4000U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0x11U)) 
                                                  << 0xeU)) 
                                      | ((0x2000U & 
                                          ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x12U)) 
                                           << 0xdU)) 
                                         | ((0x1000U 
                                             & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x13U)) 
                                                << 0xcU)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 9U)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h6adb00ff__0))))))),16);
        bufp->chgBit(oldp+1561,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1562,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1563,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+1564,(((0x80U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x18U)) 
                                             << 7U)) 
                                   | ((0x40U & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x19U)) 
                                                << 6U)) 
                                      | ((0x20U & (
                                                   (~ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x1aU)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x1bU)) 
                                                << 4U)) 
                                            | ((8U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x19U)) 
                                               | ((4U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0x1bU)) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))))),8);
        bufp->chgSData(oldp+1565,(((0x8000U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x10U)) 
                                               << 0xfU)) 
                                   | ((0x4000U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0x11U)) 
                                                  << 0xeU)) 
                                      | ((0x2000U & 
                                          ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x12U)) 
                                           << 0xdU)) 
                                         | ((0x1000U 
                                             & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x13U)) 
                                                << 0xcU)) 
                                            | ((0x800U 
                                                & ((~ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x14U)) 
                                                   << 0xbU)) 
                                               | ((0x400U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0xbU)) 
                                                  | ((0x200U 
                                                      & ((~ 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x16U)) 
                                                         << 9U)) 
                                                     | ((0x100U 
                                                         & ((~ 
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x17U)) 
                                                            << 8U)) 
                                                        | ((0x80U 
                                                            & ((~ 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x18U)) 
                                                               << 7U)) 
                                                           | ((0x40U 
                                                               & ((~ 
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0x19U)) 
                                                                  << 6U)) 
                                                              | ((0x20U 
                                                                  & ((~ 
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                       >> 0x1aU)) 
                                                                     << 5U)) 
                                                                 | ((0x10U 
                                                                     & ((~ 
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                          >> 0x1bU)) 
                                                                        << 4U)) 
                                                                    | ((8U 
                                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                           >> 0x19U)) 
                                                                       | ((4U 
                                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                              >> 0x1bU)) 
                                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))))))))))))),16);
        bufp->chgBit(oldp+1566,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0x1eU))));
        bufp->chgCData(oldp+1567,((((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7))) 
                                    << 4U) | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                                     << 1U) 
                                                    | (0xffffffffU 
                                                       == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_62)))))),5);
        bufp->chgSData(oldp+1568,((((IData)((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_36))) 
                                    << 0xaU) | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16))) 
                                                 << 9U) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14))) 
                                                    << 8U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12))) 
                                                       << 7U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                                          << 6U) 
                                                         | (((IData)(
                                                                     (7U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_6))) 
                                                             << 5U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7))) 
                                                                << 4U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5))) 
                                                                   << 3U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))) 
                                                                      << 2U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                                                         << 1U) 
                                                                        | (0xffffffffU 
                                                                           == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_62)))))))))))),11);
        bufp->chgCData(oldp+1569,((((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                    << 4U) | (((IData)(
                                                       (7U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_25))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23))) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_ID2EX_bits_aluSrc2))))),5);
        bufp->chgIData(oldp+1570,((((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36))) 
                                    << 0x15U) | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34))) 
                                                  << 0x14U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32))) 
                                                     << 0x13U) 
                                                    | (((IData)(
                                                                (0xffffffffU 
                                                                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_34)) 
                                                        << 0x12U) 
                                                       | (((IData)(
                                                                   (0xffffffffU 
                                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_64)) 
                                                           << 0x11U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                                              << 0x10U) 
                                                             | (((((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                                                   << 4U) 
                                                                  | (((IData)(
                                                                              (7U 
                                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_25))) 
                                                                      << 3U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23))) 
                                                                         << 2U) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_ID2EX_bits_aluSrc2)))) 
                                                                 << 0xbU) 
                                                                | (((IData)(
                                                                            (0xfU 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_36))) 
                                                                    << 0xaU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16))) 
                                                                       << 9U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14))) 
                                                                          << 8U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12))) 
                                                                             << 7U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                                                                << 6U) 
                                                                               | (((IData)(
                                                                                (7U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_6))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                                                                << 1U) 
                                                                                | (0xffffffffU 
                                                                                == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_T_62))))))))))))))))))),22);
        bufp->chgCData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type),3);
        bufp->chgBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__Wen));
        bufp->chgIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_0),32);
        bufp->chgIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_1),32);
        bufp->chgIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_2),32);
        bufp->chgIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_3),32);
        bufp->chgIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_4),32);
        bufp->chgIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_5),32);
        bufp->chgIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_6),32);
        bufp->chgIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_7),32);
        bufp->chgIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_8),32);
        bufp->chgIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_9),32);
        bufp->chgIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_10),32);
        bufp->chgIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_11),32);
        bufp->chgIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_12),32);
        bufp->chgIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_13),32);
        bufp->chgIData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_14),32);
        bufp->chgIData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_15),32);
        bufp->chgIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_16),32);
        bufp->chgIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_17),32);
        bufp->chgIData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_18),32);
        bufp->chgIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_19),32);
        bufp->chgIData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_20),32);
        bufp->chgIData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_21),32);
        bufp->chgIData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_22),32);
        bufp->chgIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_23),32);
        bufp->chgIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_24),32);
        bufp->chgIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_25),32);
        bufp->chgIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_26),32);
        bufp->chgIData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_27),32);
        bufp->chgIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_28),32);
        bufp->chgIData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_29),32);
        bufp->chgIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_30),32);
        bufp->chgIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_31),32);
        bufp->chgBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brFail_io_cond));
        bufp->chgIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brBuffer),32);
        bufp->chgBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brBufferValid));
        bufp->chgBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brEnable));
        bufp->chgIData(oldp+1609,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__pcReg)),32);
        bufp->chgIData(oldp+1610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brEnable)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_io_pcBr
                                    : ((IData)(4U) 
                                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__pcReg))),32);
        bufp->chgBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rFireReg));
        bufp->chgIData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rdataReg),32);
        bufp->chgBit(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brFail__DOT__record));
        bufp->chgCData(oldp+1614,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3))),2);
        bufp->chgIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata0),32);
        bufp->chgIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata1),32);
        bufp->chgBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__arDataFireReg));
        bufp->chgBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__awFireReg));
        bufp->chgBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wFireReg));
        bufp->chgBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__arAssert));
        bufp->chgBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__awAssert));
        bufp->chgBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wAssert));
        bufp->chgBit(oldp+1623,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__arDataFireReg) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___arDataFire_T))));
        bufp->chgBit(oldp+1624,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__awFireReg) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___awFire_T))));
        bufp->chgBit(oldp+1625,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wFireReg) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___wFire_T))));
        bufp->chgCData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wordStrb_plaInput),4);
        bufp->chgCData(oldp+1627,((0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wordStrb_plaInput)))),4);
        bufp->chgBit(oldp+1628,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wordStrb_plaInput)))));
        bufp->chgBit(oldp+1629,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wordStrb_plaInput) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1630,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut)));
        bufp->chgBit(oldp+1631,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 1U))));
        bufp->chgBit(oldp+1632,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3))));
        bufp->chgBit(oldp+1633,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                       >> 1U))));
        bufp->chgCData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wordStrb_orMatrixOutputs),4);
        bufp->chgIData(oldp+1635,(((3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                                    ? 0U : ((2U == 
                                             (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                                             ? 0xffffffffU
                                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWdata))),32);
        bufp->chgIData(oldp+1636,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWdata
                                    : 0xffffffffU)),32);
        bufp->chgIData(oldp+1637,(((0xf12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                    ? 0x15fdf02U : 
                                   ((0xf11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))
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
                                                   : 0U)))))))),32);
        bufp->chgIData(oldp+1638,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_syscall)
                                    ? 0xbU : 0U)),32);
        bufp->chgBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rFireReg));
        bufp->chgBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__bFireReg));
        bufp->chgIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mstatusReg),32);
        bufp->chgIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mcauseReg),32);
        bufp->chgIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvalReg),32);
        bufp->chgIData(oldp+1644,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT___mstatusWdata_T 
                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT___mstatusWdata_T_1 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mstatusReg))),32);
        bufp->chgIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvecWdata),32);
        bufp->chgBit(oldp+1646,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                 & (0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr)))));
        bufp->chgBit(oldp+1647,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                 & (0x305U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr)))));
        bufp->chgBit(oldp+1648,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                  & (0x341U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_syscall))));
        bufp->chgBit(oldp+1649,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                  & (0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr))) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_syscall))));
        bufp->chgBit(oldp+1650,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                 & (0x343U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrAddr)))));
        bufp->chgBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufValid));
        bufp->chgQData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufRdata),64);
        bufp->chgBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufValid));
        bufp->chgQData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufRdata),64);
        bufp->chgCData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rLfsr__DOT__shiftReg),5);
        bufp->chgCData(oldp+1658,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_ar_valid)
                                    ? 1U : 0U)),3);
        bufp->chgBit(oldp+1659,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isEmpty)))));
        bufp->chgCData(oldp+1660,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_1_id)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_0_id))),3);
        bufp->chgIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_deq_bits_addr),32);
        bufp->chgQData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
        bufp->chgCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rCount),5);
        bufp->chgIData(oldp+1665,(((0x2000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_deq_bits_addr)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                               >> 0x20U))
                                    : ((0x2000000U 
                                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_deq_bits_addr)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)
                                        : 0U))),32);
        bufp->chgBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isFull));
        bufp->chgBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isEmpty));
        bufp->chgBit(oldp+1670,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1671,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__enqPtr)))));
        bufp->chgCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_0_id),3);
        bufp->chgIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_0_addr),32);
        bufp->chgCData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_1_id),3);
        bufp->chgIData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_1_addr),32);
        bufp->chgBit(oldp+1676,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1677,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1678,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+1679,((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo_io_enq_bits_addr 
                                            >> 0x10U))));
        bufp->chgBit(oldp+1680,((1U & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__deqPtr) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__enqPtr)))))));
        bufp->chgBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo_io_deq_bits));
        bufp->chgBit(oldp+1682,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)))));
        bufp->chgBit(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___awFire_T));
        bufp->chgBit(oldp+1684,((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                            >> 0x10U))));
        bufp->chgBit(oldp+1685,((1U & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__deqPtr) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__enqPtr)))))));
        bufp->chgBit(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo_io_deq_bits));
        bufp->chgBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFireReg));
        bufp->chgBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__wSel));
        bufp->chgBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull));
        bufp->chgBit(oldp+1692,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__deqPtr) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1693,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1694,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__queue_0));
        bufp->chgBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__queue_1));
        bufp->chgBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull));
        bufp->chgBit(oldp+1700,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__deqPtr) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1701,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1702,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__queue_0));
        bufp->chgBit(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__queue_1));
        bufp->chgBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgSData(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led),16);
        bufp->chgSData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__sw),16);
        bufp->chgIData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg),32);
        bufp->chgCData(oldp+1718,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg)),4);
        bufp->chgCData(oldp+1719,((0x7fU & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_0)))))))))),7);
        bufp->chgBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_0));
        bufp->chgBit(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_1));
        bufp->chgBit(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_2));
        bufp->chgBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_3));
        bufp->chgBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_4));
        bufp->chgBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_5));
        bufp->chgBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_6));
        bufp->chgCData(oldp+1727,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg 
                                           >> 4U))),4);
        bufp->chgCData(oldp+1728,((0x7fU & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_0)))))))))),7);
        bufp->chgBit(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_0));
        bufp->chgBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_1));
        bufp->chgBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_2));
        bufp->chgBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_3));
        bufp->chgBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_4));
        bufp->chgBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_5));
        bufp->chgBit(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_6));
        bufp->chgCData(oldp+1736,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg 
                                           >> 8U))),4);
        bufp->chgCData(oldp+1737,((0x7fU & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_0)))))))))),7);
        bufp->chgBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_0));
        bufp->chgBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_1));
        bufp->chgBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_2));
        bufp->chgBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_3));
        bufp->chgBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_4));
        bufp->chgBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_5));
        bufp->chgBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_6));
        bufp->chgCData(oldp+1745,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1746,((0x7fU & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_0)))))))))),7);
        bufp->chgBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_0));
        bufp->chgBit(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_1));
        bufp->chgBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_2));
        bufp->chgBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_3));
        bufp->chgBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_4));
        bufp->chgBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_5));
        bufp->chgBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_6));
        bufp->chgCData(oldp+1754,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1755,((0x7fU & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_0)))))))))),7);
        bufp->chgBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_0));
        bufp->chgBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_1));
        bufp->chgBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_2));
        bufp->chgBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_3));
        bufp->chgBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_4));
        bufp->chgBit(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_5));
        bufp->chgBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_6));
        bufp->chgCData(oldp+1763,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1764,((0x7fU & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_0)))))))))),7);
        bufp->chgBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_0));
        bufp->chgBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_1));
        bufp->chgBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_2));
        bufp->chgBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_3));
        bufp->chgBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_4));
        bufp->chgBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_5));
        bufp->chgBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_6));
        bufp->chgCData(oldp+1772,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1773,((0x7fU & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_0)))))))))),7);
        bufp->chgBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_0));
        bufp->chgBit(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_1));
        bufp->chgBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_2));
        bufp->chgBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_3));
        bufp->chgBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_4));
        bufp->chgBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_5));
        bufp->chgBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_6));
        bufp->chgCData(oldp+1781,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1782,((0x7fU & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_0)))))))))),7);
        bufp->chgBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_0));
        bufp->chgBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_1));
        bufp->chgBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_2));
        bufp->chgBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_3));
        bufp->chgBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_4));
        bufp->chgBit(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_5));
        bufp->chgBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_6));
        bufp->chgIData(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__unnamedblk1__DOT__unnamedblk3__DOT__wmask),32);
        bufp->chgCData(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2Clk),2);
        bufp->chgSData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__count),10);
        bufp->chgCData(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0),8);
        bufp->chgCData(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1),8);
        bufp->chgCData(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2),8);
        bufp->chgCData(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3),8);
        bufp->chgCData(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4),8);
        bufp->chgCData(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5),8);
        bufp->chgCData(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6),8);
        bufp->chgCData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7),8);
        bufp->chgCData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8),8);
        bufp->chgCData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9),8);
        bufp->chgCData(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_10),8);
        bufp->chgCData(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_11),8);
        bufp->chgCData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12),8);
        bufp->chgCData(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13),8);
        bufp->chgCData(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14),8);
        bufp->chgCData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_15),8);
        bufp->chgCData(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__head),4);
        bufp->chgCData(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__tail),4);
        bufp->chgSData(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
        bufp->chgBit(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
        bufp->chgBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__sampling));
        bufp->chgBit(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__done));
        bufp->chgIData(oldp+1815,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck_swt));
        bufp->chgCData(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
        bufp->chgCData(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState),3);
        bufp->chgBit(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__enbaleReg));
        bufp->chgBit(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__unnamedblk1__DOT__mspiValid));
        bufp->chgCData(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgSData(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__xCount),10);
        bufp->chgSData(oldp+1859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__yCount),10);
        bufp->chgBit(oldp+1860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__hValid));
        bufp->chgBit(oldp+1861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vValid));
        bufp->chgBit(oldp+1862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__hsync));
        bufp->chgBit(oldp+1863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vsync));
        bufp->chgBit(oldp+1864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__valid));
        bufp->chgIData(oldp+1865,((0x7ffffU & (((IData)(0x280U) 
                                                * ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vValid)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__yCount) 
                                                       - (IData)(0x24U)))
                                                    : 0U)) 
                                               + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__hValid)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__xCount) 
                                                      - (IData)(0x91U)))
                                                   : 0U)))),19);
        bufp->chgIData(oldp+1866,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ram_ext__DOT___R0_en_d0)
                                    ? vlSelf->__VdfgTmp_hdd09a7b8__0
                                    : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+1867,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_0));
        bufp->chgBit(oldp+1868,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_1));
        bufp->chgBit(oldp+1869,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_2));
        bufp->chgBit(oldp+1870,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_3));
        bufp->chgIData(oldp+1871,(((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT___GEN) 
                                          >> ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hc62f52e0__0)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr)
                                               : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr))))
                                    ? ((((((((IData)(vlSelf->__VdfgTmp_h55fde8aa__0)
                                              ? (0xffU 
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
                                          >> (0x1fU 
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
                                               >> (0x1fU 
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
                                               >> (0x1fU 
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
                                    : ((((((((IData)(vlSelf->__VdfgTmp_h2921a7cb__0)
                                              ? (0xffU 
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
                                          >> (0x1fU 
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
                                               >> (0x1fU 
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
                                               >> (0x1fU 
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
                                                 & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr), 3U)))))))),32);
        bufp->chgBit(oldp+1872,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en));
        bufp->chgSData(oldp+1873,(((0xff00U & ((((((IData)(vlSelf->__VdfgTmp_h2921a7cb__0)
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
                                               << 8U)) 
                                   | (0xffU & (((((IData)(vlSelf->__VdfgTmp_h2921a7cb__0)
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
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_bkAddr), 3U)))))),16);
        bufp->chgBit(oldp+1874,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_valid));
        bufp->chgCData(oldp+1875,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_bkAddr),2);
        bufp->chgSData(oldp+1876,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_0),13);
        bufp->chgSData(oldp+1877,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_1),13);
        bufp->chgSData(oldp+1878,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_2),13);
        bufp->chgSData(oldp+1879,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_3),13);
        bufp->chgSData(oldp+1880,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_rdColAddr),9);
        bufp->chgCData(oldp+1881,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr),2);
        bufp->chgBit(oldp+1882,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid));
        bufp->chgBit(oldp+1883,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel));
        bufp->chgCData(oldp+1884,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount),4);
        bufp->chgBit(oldp+1885,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__wbBurstSel));
        bufp->chgSData(oldp+1886,(((IData)(vlSelf->__VdfgTmp_hc27a8002__0)
                                    ? (IData)(vlSelf->__VdfgTmp_hfd9e4dd0__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1887,(((IData)(vlSelf->__VdfgTmp_hc883fe42__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h68d14f3a__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1888,(((IData)(vlSelf->__VdfgTmp_h59445149__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h2b4e487a__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1889,(((IData)(vlSelf->__VdfgTmp_h2921a7cb__0)
                                    ? (IData)(vlSelf->__VdfgTmp_hf6f6ec31__0)
                                    : 0U)),16);
        bufp->chgBit(oldp+1890,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__unnamedblk1__DOT__ready));
        bufp->chgSData(oldp+1891,(((0xff00U & ((((((IData)(vlSelf->__VdfgTmp_had71432b__0)
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
                                   | (0xffU & (((((IData)(vlSelf->__VdfgTmp_had71432b__0)
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
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr), 3U)))))),16);
        bufp->chgBit(oldp+1892,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_valid));
        bufp->chgCData(oldp+1893,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr),2);
        bufp->chgSData(oldp+1894,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_0),13);
        bufp->chgSData(oldp+1895,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_1),13);
        bufp->chgSData(oldp+1896,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_2),13);
        bufp->chgSData(oldp+1897,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_3),13);
        bufp->chgSData(oldp+1898,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_rdColAddr),9);
        bufp->chgCData(oldp+1899,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr),2);
        bufp->chgBit(oldp+1900,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid));
        bufp->chgBit(oldp+1901,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel));
        bufp->chgCData(oldp+1902,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount),4);
        bufp->chgBit(oldp+1903,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__wbBurstSel));
        bufp->chgSData(oldp+1904,(((IData)(vlSelf->__VdfgTmp_hbdec8fa1__0)
                                    ? (IData)(vlSelf->__VdfgTmp_hfdbd0105__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1905,(((IData)(vlSelf->__VdfgTmp_h2170c127__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h2b9ae16f__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1906,(((IData)(vlSelf->__VdfgTmp_h7730dfc7__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h201fd3b9__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1907,(((IData)(vlSelf->__VdfgTmp_had71432b__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h2c89421b__0)
                                    : 0U)),16);
        bufp->chgBit(oldp+1908,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__unnamedblk1__DOT__ready));
        bufp->chgSData(oldp+1909,(((0xff00U & ((((((IData)(vlSelf->__VdfgTmp_h55fde8aa__0)
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
                                               << 8U)) 
                                   | (0xffU & (((((IData)(vlSelf->__VdfgTmp_h55fde8aa__0)
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
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_bkAddr), 3U)))))),16);
        bufp->chgBit(oldp+1910,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_valid));
        bufp->chgCData(oldp+1911,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_bkAddr),2);
        bufp->chgSData(oldp+1912,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_0),13);
        bufp->chgSData(oldp+1913,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_1),13);
        bufp->chgSData(oldp+1914,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_2),13);
        bufp->chgSData(oldp+1915,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_3),13);
        bufp->chgSData(oldp+1916,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_rdColAddr),9);
        bufp->chgCData(oldp+1917,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr),2);
        bufp->chgBit(oldp+1918,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid));
        bufp->chgBit(oldp+1919,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel));
        bufp->chgCData(oldp+1920,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount),4);
        bufp->chgBit(oldp+1921,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__wbBurstSel));
        bufp->chgSData(oldp+1922,(((IData)(vlSelf->__VdfgTmp_hd361cf40__0)
                                    ? (IData)(vlSelf->__VdfgTmp_ha8478868__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1923,(((IData)(vlSelf->__VdfgTmp_h9bc1fe6a__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h26348201__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1924,(((IData)(vlSelf->__VdfgTmp_hdea91f5a__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h55c39861__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1925,(((IData)(vlSelf->__VdfgTmp_h55fde8aa__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h16e3b90e__0)
                                    : 0U)),16);
        bufp->chgBit(oldp+1926,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__unnamedblk1__DOT__ready));
        bufp->chgSData(oldp+1927,(((0xff00U & ((((((IData)(vlSelf->__VdfgTmp_h6815901f__0)
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
                                   | (0xffU & (((((IData)(vlSelf->__VdfgTmp_h6815901f__0)
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
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr), 3U)))))),16);
        bufp->chgBit(oldp+1928,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_valid));
        bufp->chgCData(oldp+1929,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr),2);
        bufp->chgSData(oldp+1930,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_0),13);
        bufp->chgSData(oldp+1931,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_1),13);
        bufp->chgSData(oldp+1932,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_2),13);
        bufp->chgSData(oldp+1933,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_3),13);
        bufp->chgSData(oldp+1934,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_rdColAddr),9);
        bufp->chgCData(oldp+1935,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr),2);
        bufp->chgBit(oldp+1936,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid));
        bufp->chgBit(oldp+1937,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel));
        bufp->chgCData(oldp+1938,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount),4);
        bufp->chgBit(oldp+1939,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__wbBurstSel));
        bufp->chgSData(oldp+1940,(((IData)(vlSelf->__VdfgTmp_hf536dcbc__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h83c7b5ef__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1941,(((IData)(vlSelf->__VdfgTmp_h2e3dd07e__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h485e8561__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1942,(((IData)(vlSelf->__VdfgTmp_ha16805a6__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h9d2483b6__0)
                                    : 0U)),16);
        bufp->chgSData(oldp+1943,(((IData)(vlSelf->__VdfgTmp_h6815901f__0)
                                    ? (IData)(vlSelf->__VdfgTmp_h60be65a1__0)
                                    : 0U)),16);
        bufp->chgBit(oldp+1944,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__unnamedblk1__DOT__ready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+1945,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_0),4);
        bufp->chgIData(oldp+1946,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
        bufp->chgCData(oldp+1947,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_1),4);
        bufp->chgCData(oldp+1948,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_2),4);
        bufp->chgCData(oldp+1949,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_3),4);
        bufp->chgCData(oldp+1950,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_4),4);
        bufp->chgCData(oldp+1951,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_5),4);
        bufp->chgCData(oldp+1952,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_6),4);
        bufp->chgCData(oldp+1953,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_7),4);
        bufp->chgBit(oldp+1954,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0));
        bufp->chgBit(oldp+1955,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1));
        bufp->chgBit(oldp+1956,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2));
        bufp->chgBit(oldp+1957,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3));
        bufp->chgIData(oldp+1958,((0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 2U))),24);
        bufp->chgIData(oldp+1959,(vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+1960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+1961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+1962,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (0xebU 
                                               >> (7U 
                                                   & (((IData)(7U) 
                                                       - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                                      - (IData)(3U))))
                                            : ((8U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x14U)
                                                : (
                                                   (9U 
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
                                                        : 0U))))))))),4);
        bufp->chgBit(oldp+1963,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+1964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+1965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+1966,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+1967,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+1968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+1969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+1970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+1971,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - (IData)(2U)))),2);
        bufp->chgBit(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+1973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+1974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+1975,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgCData(oldp+1976,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
        bufp->chgBit(oldp+1977,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1978,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1979,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1980,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
        bufp->chgSData(oldp+1981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),14);
        bufp->chgCData(oldp+1982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
        bufp->chgCData(oldp+1983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
        bufp->chgBit(oldp+1984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
        bufp->chgIData(oldp+1985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
        bufp->chgBit(oldp+1986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
        bufp->chgBit(oldp+1987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
        bufp->chgBit(oldp+1988,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+1989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
        bufp->chgBit(oldp+1990,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                 | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
        bufp->chgCData(oldp+1991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
        bufp->chgBit(oldp+1992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
        bufp->chgBit(oldp+1993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
        bufp->chgCData(oldp+1994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
        bufp->chgSData(oldp+1995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),14);
        bufp->chgSData(oldp+1996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),14);
        bufp->chgSData(oldp+1997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),14);
        bufp->chgSData(oldp+1998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),14);
        bufp->chgCData(oldp+1999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
        bufp->chgCData(oldp+2000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
        bufp->chgCData(oldp+2001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
        bufp->chgCData(oldp+2002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
        bufp->chgIData(oldp+2003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
        bufp->chgIData(oldp+2004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+2005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
        bufp->chgCData(oldp+2006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
        bufp->chgWData(oldp+2007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
        bufp->chgBit(oldp+2010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready));
        bufp->chgIData(oldp+2011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata),32);
        bufp->chgBit(oldp+2012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
        bufp->chgSData(oldp+2013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+2014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+2015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+2016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+2020,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+2021,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xaU))));
        bufp->chgCData(oldp+2022,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+2023,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+2024,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2025,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2026,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+2027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+2028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+2029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+2030,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
        bufp->chgSData(oldp+2031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+2032,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+2033,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+2034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+2035,((0xffU & ((0x800U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h70f6fa58__0) 
                                                - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                - (IData)(1U))))),8);
        bufp->chgCData(oldp+2036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+2037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+2038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
        bufp->chgBit(oldp+2039,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)))));
        bufp->chgBit(oldp+2040,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+2041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+2042,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U))));
        bufp->chgBit(oldp+2043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+2044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+2045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+2046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+2047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+2048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+2049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+2050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+2051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+2052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+2053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+2054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+2055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+2056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+2057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+2058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+2059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+2060,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                       >> 7U))));
        bufp->chgBit(oldp+2061,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+2062,((IData)((0x10U != (0x12U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+2063,((IData)((0x11U == (0x11U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+2064,((IData)((0x14U == (0x14U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+2065,((IData)((0x18U == (0x18U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+2066,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
        bufp->chgBit(oldp+2067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+2068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+2069,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2070,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
        bufp->chgBit(oldp+2071,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                       >> 2U))));
        bufp->chgBit(oldp+2072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+2073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+2074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+2075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+2076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+2077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+2078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+2079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+2080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+2081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+2082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+2083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+2084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+2085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+2086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+2087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+2088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+2089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+2090,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [1U] 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xaU] 
                                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xbU] 
                                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
        bufp->chgBit(oldp+2091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+2092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+2093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+2094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+2095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+2096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+2097,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+2098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+2099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+2100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+2101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+2102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+2103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+2104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+2105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+2106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+2107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+2108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+2109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+2110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+2111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+2112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+2113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+2114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+2115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+2116,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+2117,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+2118,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+2119,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+2120,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+2121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+2122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+2123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+2124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+2125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+2126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+2127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+2128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+2129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+2130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+2131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+2132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+2133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+2134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+2135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+2136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+2137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+2138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+2139,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+2140,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+2141,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+2142,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+2143,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                           - (IData)(1U)))),4);
        bufp->chgSData(oldp+2144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+2145,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                            >> 2U))),8);
        bufp->chgCData(oldp+2146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+2147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+2148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+2149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+2150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+2151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+2152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+2153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+2154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+2155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+2156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+2157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+2158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+2159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+2160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+2161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+2162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+2163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+2164,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+2165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+2166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+2167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+2168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+2169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+2170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+2171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+2172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+2173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+2174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+2175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xaU]),3);
        bufp->chgCData(oldp+2176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xbU]),3);
        bufp->chgCData(oldp+2177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xcU]),3);
        bufp->chgCData(oldp+2178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xdU]),3);
        bufp->chgCData(oldp+2179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xeU]),3);
        bufp->chgCData(oldp+2180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xfU]),3);
        bufp->chgCData(oldp+2181,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                            >> 3U))),8);
        bufp->chgCData(oldp+2182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+2183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+2184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+2185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+2186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+2187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+2188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+2189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+2190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+2191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+2192,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgBit(oldp+2193,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
        bufp->chgBit(oldp+2194,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active));
        bufp->chgBit(oldp+2195,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hd268a2b4__0) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
        bufp->chgBit(oldp+2196,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__write));
        bufp->chgSData(oldp+2197,((0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),13);
        bufp->chgCData(oldp+2198,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+2199,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+2200,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0))));
        bufp->chgBit(oldp+2201,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0))));
        bufp->chgBit(oldp+2202,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0))));
        bufp->chgBit(oldp+2203,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0))));
        bufp->chgBit(oldp+2204,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0))));
        bufp->chgBit(oldp+2205,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0))));
        bufp->chgBit(oldp+2206,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0))));
        bufp->chgBit(oldp+2207,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+2208,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_0));
        bufp->chgBit(oldp+2209,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_1));
        bufp->chgBit(oldp+2210,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_2));
        bufp->chgBit(oldp+2211,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_3));
        bufp->chgBit(oldp+2212,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_4));
        bufp->chgBit(oldp+2213,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_5));
        bufp->chgBit(oldp+2214,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_6));
        bufp->chgBit(oldp+2215,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_7));
        bufp->chgIData(oldp+2216,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
        bufp->chgIData(oldp+2217,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgCData(oldp+2218,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
        bufp->chgBit(oldp+2219,((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))));
        bufp->chgCData(oldp+2220,(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmask),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+2221,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+2222,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+2223,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+2224,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+2225,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+2226,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+2227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt));
        bufp->chgCData(oldp+2228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter),4);
        bufp->chgCData(oldp+2229,((1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter)))))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+2230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
        bufp->chgBit(oldp+2231,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel));
        bufp->chgCData(oldp+2232,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd),3);
        bufp->chgSData(oldp+2233,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                   >> 0x10U)),16);
        bufp->chgCData(oldp+2234,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr),2);
        bufp->chgBit(oldp+2235,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en));
        bufp->chgBit(oldp+2236,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en));
        bufp->chgBit(oldp+2237,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en));
        bufp->chgBit(oldp+2238,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en));
        bufp->chgIData(oldp+2239,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_addr),22);
        bufp->chgBit(oldp+2240,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode));
        bufp->chgCData(oldp+2241,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN),2);
        bufp->chgIData(oldp+2242,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_addr),22);
        bufp->chgBit(oldp+2243,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode));
        bufp->chgIData(oldp+2244,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_addr),22);
        bufp->chgBit(oldp+2245,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode));
        bufp->chgIData(oldp+2246,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_addr),22);
        bufp->chgBit(oldp+2247,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode));
        bufp->chgSData(oldp+2248,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
        bufp->chgBit(oldp+2249,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en));
        bufp->chgBit(oldp+2250,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en));
        bufp->chgBit(oldp+2251,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en));
        bufp->chgBit(oldp+2252,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en));
        bufp->chgIData(oldp+2253,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_addr),22);
        bufp->chgBit(oldp+2254,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode));
        bufp->chgCData(oldp+2255,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN),2);
        bufp->chgIData(oldp+2256,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_addr),22);
        bufp->chgBit(oldp+2257,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode));
        bufp->chgIData(oldp+2258,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_addr),22);
        bufp->chgBit(oldp+2259,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode));
        bufp->chgIData(oldp+2260,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_addr),22);
        bufp->chgBit(oldp+2261,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode));
        bufp->chgCData(oldp+2262,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd),3);
        bufp->chgCData(oldp+2263,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr),2);
        bufp->chgBit(oldp+2264,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en));
        bufp->chgBit(oldp+2265,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en));
        bufp->chgBit(oldp+2266,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en));
        bufp->chgBit(oldp+2267,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en));
        bufp->chgIData(oldp+2268,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_addr),22);
        bufp->chgBit(oldp+2269,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode));
        bufp->chgCData(oldp+2270,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN),2);
        bufp->chgIData(oldp+2271,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_addr),22);
        bufp->chgBit(oldp+2272,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode));
        bufp->chgIData(oldp+2273,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_addr),22);
        bufp->chgBit(oldp+2274,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode));
        bufp->chgIData(oldp+2275,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_addr),22);
        bufp->chgBit(oldp+2276,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode));
        bufp->chgBit(oldp+2277,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en));
        bufp->chgBit(oldp+2278,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en));
        bufp->chgBit(oldp+2279,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en));
        bufp->chgBit(oldp+2280,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en));
        bufp->chgIData(oldp+2281,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_addr),22);
        bufp->chgBit(oldp+2282,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode));
        bufp->chgCData(oldp+2283,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN),2);
        bufp->chgIData(oldp+2284,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_addr),22);
        bufp->chgBit(oldp+2285,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode));
        bufp->chgIData(oldp+2286,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_addr),22);
        bufp->chgBit(oldp+2287,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode));
        bufp->chgIData(oldp+2288,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_addr),22);
        bufp->chgBit(oldp+2289,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+2290,(vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte));
        bufp->chgCData(oldp+2291,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
        bufp->chgCData(oldp+2292,(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel),8);
        bufp->chgBit(oldp+2293,(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en));
        bufp->chgBit(oldp+2294,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))));
    }
    bufp->chgBit(oldp+2295,(vlSelf->clock));
    bufp->chgBit(oldp+2296,(vlSelf->reset));
    bufp->chgSData(oldp+2297,(vlSelf->externalPins_gpio_out),16);
    bufp->chgSData(oldp+2298,(vlSelf->externalPins_gpio_in),16);
    bufp->chgCData(oldp+2299,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+2300,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+2301,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+2302,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+2303,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+2304,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+2305,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+2306,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+2307,(vlSelf->externalPins_ps2_clk));
    bufp->chgBit(oldp+2308,(vlSelf->externalPins_ps2_data));
    bufp->chgCData(oldp+2309,(vlSelf->externalPins_vga_r),8);
    bufp->chgCData(oldp+2310,(vlSelf->externalPins_vga_g),8);
    bufp->chgCData(oldp+2311,(vlSelf->externalPins_vga_b),8);
    bufp->chgBit(oldp+2312,(vlSelf->externalPins_vga_hsync));
    bufp->chgBit(oldp+2313,(vlSelf->externalPins_vga_vsync));
    bufp->chgBit(oldp+2314,(vlSelf->externalPins_vga_valid));
    bufp->chgBit(oldp+2315,(vlSelf->externalPins_uart_rx));
    bufp->chgBit(oldp+2316,(vlSelf->externalPins_uart_tx));
    bufp->chgBit(oldp+2317,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->chgBit(oldp+2318,((1U & (((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_7)
                                     : ((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_6)
                                         : ((0x400U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_5)
                                             : ((0x800U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_4)
                                                 : 
                                                ((0x1000U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_3)
                                                  : 
                                                 ((0x2000U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_2)
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_1)
                                                    : 
                                                   ((~ 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                                                      >> 0xfU)) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_0))))))))) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                      | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                           ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                           : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                         >> 0x1fU))))));
    bufp->chgCData(oldp+2319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->chgBit(oldp+2320,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->chgBit(oldp+2321,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->chgIData(oldp+2322,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->chgBit(oldp+2323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready) 
                             & ((0x10001U == (0x3ffffU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                 >> 0xcU))) 
                                | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))))));
    bufp->chgIData(oldp+2324,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                    << 0x18U) | ((0xff0000U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                     << 8U)) 
                                                 | ((0xff00U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                        >> 8U)) 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                       >> 0x18U))))
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata)),32);
    bufp->chgQData(oldp+2325,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->chgQData(oldp+2327,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))
                                 : 0ULL) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                              : 0ULL) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? (
                                                   ((QData)((IData)(
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
                                                : 0ULL)))),64);
    bufp->chgBit(oldp+2329,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgBit(oldp+2330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->chgSData(oldp+2331,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->chgCData(oldp+2332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgCData(oldp+2333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->chgBit(oldp+2334,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss));
    bufp->chgBit(oldp+2335,((1U & ((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_7)
                                    : ((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_6)
                                        : ((0x400U 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_5)
                                            : ((0x800U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_4)
                                                : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_3)
                                                    : 
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_2)
                                                     : 
                                                    ((0x4000U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_1)
                                                      : 
                                                     ((~ 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                                                        >> 0xfU)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_0))))))))))));
    bufp->chgSData(oldp+2336,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel),16);
    bufp->chgBit(oldp+2337,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgIData(oldp+2338,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgBit(oldp+2339,(((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3))));
    bufp->chgBit(oldp+2340,(((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2))));
    bufp->chgBit(oldp+2341,(((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1))));
    bufp->chgBit(oldp+2342,(((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0))));
    bufp->chgBit(oldp+2343,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI));
    bufp->chgBit(oldp+2344,(vlSelf->ysyxSoCFull__DOT__psram__DOT__isSwitch));
    bufp->chgCData(oldp+2345,((((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_6)
                                 : 0U) | (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_7)
                                            : 0U) | 
                                          (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
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
                                                           : 0U))))))))),4);
    bufp->chgBit(oldp+2346,(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode));
    bufp->chgIData(oldp+2347,(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wdata),32);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
}
