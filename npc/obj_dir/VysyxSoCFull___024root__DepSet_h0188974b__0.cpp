// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
extern const VlUnpacked<CData/*2:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_hc5070fcc_0;

VL_INLINE_OPT void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n 
        = (1U & (~ ((IData)(vlSelf->reset) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arFireReg)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hfe177532__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bypassReady 
        = (((5U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext 
                    >> 0x1dU)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__ready)) 
           | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_ar_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bypassReady)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid)
            : (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_ar_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_ar_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_h010f2138__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_ar_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT___enqPtr_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isFull)) 
           & ((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                          >> 0x10U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_h010f2138__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
        = ((0x200U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                       >> 0x10U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_h010f2138__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h4940e08b__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_arvalid));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa163a__0));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_in_ar_ready_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bypassReady)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_ar_ready)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__ready));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___cacheMissCnt_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_ar_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_ar_valid_0));
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hb122031a__0 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___cacheMissCnt_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___Pre2IF_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_in_ar_ready_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEMoutValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_MEM2WB_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_h8540bfd7__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                       >> 0x20U));
        vlSelf->__VdfgTmp_hcfff5500__0 = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg) 
                                                  >> 4U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg);
        vlSelf->__VdfgTmp_hcfff5500__0 = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415c1c__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415c1c__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___tagvRdata_0_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hfe177532__0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hb122031a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IF_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___Pre2IF_valid_T) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arFireReg)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hcfff5500__0) 
                     >> 2U));
        vlSelf->__VdfgTmp_h1b50dbb3__0 = ((IData)(vlSelf->__VdfgTmp_hcfff5500__0) 
                                          >> 3U);
        vlSelf->__VdfgTmp_h1ccfac88__0 = (1U & (IData)(vlSelf->__VdfgTmp_hcfff5500__0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hcfff5500__0) 
                     >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0 = 0U;
        vlSelf->__VdfgTmp_h1b50dbb3__0 = 0U;
        vlSelf->__VdfgTmp_h1ccfac88__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 0x18U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
            = vlSelf->__VdfgTmp_hcfff5500__0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x10U)) 
                                               << 2U)) 
                                             | (3U 
                                                & (1U 
                                                   ^ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___xpiWdata_T_15 
        = ((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))))) 
           | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
               ? (0x3000000U | (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h75460ee5__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)((((0x20000000U == (0x30000000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                             >> 0x19U)) | ((8U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                >> 0xeU)) 
                                              | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0xcU))))))) 
           | (3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                           >> 0x1cU))));
    if ((3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                      >> 0x1cU)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState)) 
               & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState)));
        vlSelf->__VdfgTmp_h26a921c3__0 = (0x3fffffffU 
                                          & (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                               ? 0U
                                               : 0x10001018U) 
                                             | (((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                                  ? 0x10001004U
                                                  : 0U) 
                                                | (((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                                     ? 0x10001010U
                                                     : 0U) 
                                                   | (((3U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                                        ? 0x10001010U
                                                        : 0U) 
                                                      | ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                                          ? 0x10001000U
                                                          : 0U))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb = 0xfU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
            = ((0x3ffc000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___xpiWdata_T_15) 
               | (0x3fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___xpiWdata_T_15 
                             | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                 ? 0x2540U : 0U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__enbaleReg;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write;
        vlSelf->__VdfgTmp_h26a921c3__0 = (0x3fffffffU 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel 
        = (IData)(((0U == (0x30000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____Vcellinp__tagv_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT___tagvRdata_0_T_10) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hb122031a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0)
                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                        >> 8U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                  >> 0x18U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fire 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__fire 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__ram_ext__W0_mask 
        = ((((IData)(vlSelf->__VdfgTmp_h1b50dbb3__0) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0)) 
                                  << 1U) | ((IData)(vlSelf->__VdfgTmp_h1ccfac88__0) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0)))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(0xdU) 
                                       + VL_SHIFTL_III(8,8,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & ((IData)(vlSelf->__VdfgTmp_h1ccfac88__0)
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata
                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0) 
                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0) 
                                       & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                          >> 0x10U)
                                       : (((IData)(vlSelf->__VdfgTmp_h1b50dbb3__0) 
                                           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                              >> 0x18U)
                                           : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                  >> 0x10U)
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h6a47b861__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__fire));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1a50434__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n = ((~ 
                                                   ((~ (IData)(vlSelf->reset)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt))) 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)));
        vlSelf->__VdfgTmp_hd6bf536c__0 = (0xfU & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr = 0U;
        vlSelf->__VdfgTmp_hd6bf536c__0 = (0xfU & (- (IData)(
                                                            (0xeU 
                                                             > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
              & (0xcU == (0x1cU & vlSelf->__VdfgTmp_h26a921c3__0))) 
             << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                         & (8U == (0x1cU & vlSelf->__VdfgTmp_h26a921c3__0))) 
                        << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                    & (4U == (0x1cU 
                                              & vlSelf->__VdfgTmp_h26a921c3__0))) 
                                   << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->__VdfgTmp_h26a921c3__0)))))) 
           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1a50434__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1a50434__0));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)))) 
                        | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                  >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1))))) 
                    & (((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                               << 2U)) | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                       | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)))) 
                        | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                  >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask))))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                       | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                          | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                   >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h75460ee5__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h75460ee5__0));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__en0) 
           | (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                ? 0U : 3U) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0)
              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                  : 0U)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                   << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)
                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                               : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_InstAxiLite_r_bits_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufValid)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__instBufRdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_DataAxiLite_r_bits_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufValid)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__dataBufRdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___io_master_r_bits_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_master_r_bits_rid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits)
             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr)
                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_1_id)
                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_0_id))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits)
                       ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift2 
        = ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift1 
                       >> 0x20U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rdataShift1));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT___deqPtr_T 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__deqPtr) 
                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__enqPtr)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__bFire));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_valid_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_bits_memRead_0)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rDataFire)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_bits_memWrite_0)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__bFire))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_MEM2WB_ready 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arwDataValid))) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_valid_0)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h9a1e8016__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arwDataValid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_MEM2WB_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_MEM2WB_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_EX2MEM_ready_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_MEM2WB_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_MEM2WB_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8dfa5a0c__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___bypass2Reg_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut);
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_EX2MEM_ready_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_EX2MEM_ready_T)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa163a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___io_ID2EX_ready_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_EX2MEM_ready_0));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__io_ID2EX_ready_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID2EXValid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___io_ID2EX_ready_T)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_arvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_IF2ID_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF2IDValid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__io_ID2EX_ready_0)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___io_Pre2IF_ready_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_IF2ID_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__io_IF2ID_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brFail_io_reset 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IFValid) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arInstValid))) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___io_Pre2IF_ready_T)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IF_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_awvalid)));
}

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VysyxSoCFull___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_act\n"); );
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__sel 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__sel = 1U;
    } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__sel 
            = ((0xfffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                           << 1U)) | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                                            >> 0xfU)));
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0;
    // Body
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 = 0U;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__wbBurstSel 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd) 
                    >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__wbBurstSel) 
                              - (IData)(1U))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__wbBurstSel 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd) 
                    >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__wbBurstSel) 
                              - (IData)(1U))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__wbBurstSel 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd) 
                    >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__wbBurstSel) 
                              - (IData)(1U))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__wbBurstSel 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd) 
                    >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__wbBurstSel) 
                              - (IData)(1U))));
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_addr;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_addr;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_raddr_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__unnamedblk1__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid)) 
                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount))));
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd) 
                  >> 1U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__unnamedblk1__DOT__ready)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_valid 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid;
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__unnamedblk1__DOT__ready) {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel) 
                     - (IData)(1U)));
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__unnamedblk1__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid)) 
                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount))));
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd) 
                  >> 1U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__unnamedblk1__DOT__ready)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_valid 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid;
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__unnamedblk1__DOT__ready) {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel) 
                     - (IData)(1U)));
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__unnamedblk1__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid)) 
                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount))));
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd) 
                  >> 1U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__unnamedblk1__DOT__ready)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_valid 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid;
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__unnamedblk1__DOT__ready) {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel) 
                     - (IData)(1U)));
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__unnamedblk1__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid)) 
                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount))));
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd) 
                  >> 1U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__unnamedblk1__DOT__ready)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_valid 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid;
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__unnamedblk1__DOT__ready) {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel) 
                     - (IData)(1U)));
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_bkAddr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr;
    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_rdColAddr 
            = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_rdColAddr 
            = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_bkAddr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr;
    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_rdColAddr 
            = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_rdColAddr 
            = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_0 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_0 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_3 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_3 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_1 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_1 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_2 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_2 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_0 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_0 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_3 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_3 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_1 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_1 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_2 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_2 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_2 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                     >> 0xdU));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_1 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                     >> 0xdU));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_3 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                     >> 0xdU));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                     >> 0xdU));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstCount;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstCount;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstCount;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstCount;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid;
    vlSelf->__VdfgTmp_h16e3b90e__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h55c39861__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h26348201__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_ha8478868__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h60be65a1__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h9d2483b6__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h485e8561__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h83c7b5ef__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hf6f6ec31__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h2b4e487a__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h68d14f3a__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hfd9e4dd0__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h2c89421b__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h201fd3b9__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h2b9ae16f__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hfdbd0105__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h55fde8aa__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hdea91f5a__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h9bc1fe6a__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hd361cf40__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h6815901f__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_ha16805a6__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h2e3dd07e__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hf536dcbc__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h2921a7cb__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h59445149__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hc883fe42__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hc27a8002__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_had71432b__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h7730dfc7__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h2170c127__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hbdec8fa1__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_ren_d0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hc62f52e0__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_valid));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT___GEN = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_0))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_valid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_valid) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hc62f52e0__0)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__4\n"); );
    // Init
    IData/*23:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__wmask_0;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__wmask_0 = 0;
    IData/*23:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 = 0;
    IData/*23:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 = 0;
    IData/*23:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2;
    __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2;
    __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2;
    __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 = 0;
    IData/*23:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3;
    __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3;
    __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3;
    __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__wmask_0 = vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 = 0U;
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
            = ((0xfffff0U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                             << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
    }
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI)
                ? ((0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                             << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))
                : ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                             << 1U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))));
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmask)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wdata);
        __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0 
            = (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 2U));
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmask) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wdata 
                        >> 8U));
        __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1 
            = (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 2U));
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmask) 
             >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wdata 
                        >> 0x10U));
        __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 = 0x10U;
        __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2 
            = (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 2U));
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmask) 
             >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode))) {
        __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 
            = (vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wdata 
               >> 0x18U);
        __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 = 0x18U;
        __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3 
            = (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 2U));
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_raddr_d0 
        = (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 2U));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_rmode_d0 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_ren_d0 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en;
    if (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
         & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
            >> 1U))) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_1 
            = (0xfU & (vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
                       >> 4U));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_4 
            = (0xfU & (vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
                       >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_2 
            = (0xfU & (vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
                       >> 8U));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_6 
            = (0xfU & (vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
                       >> 0x18U));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_3 
            = (0xfU & (vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
                       >> 0xcU));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_5 
            = (0xfU & (vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
                       >> 0x14U));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_7 
            = (vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
               >> 0x1cU);
    }
    if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte)))) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din;
    } else if (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
                   >> 1U))) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__data_0 
            = (0xfU & vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata);
    }
    if ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
          & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) 
         & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
            >> 2U))) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3 
            = (3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din)));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2 
            = (2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din)));
        __Vdly__ysyxSoCFull__DOT__psram__DOT__wmask_0 
            = (0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din)));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1 
            = (1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din)));
    } else {
        if (vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte) {
            vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3 
                = vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2;
            vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2 
                = vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1;
            vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1 
                = vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0;
        }
        __Vdly__ysyxSoCFull__DOT__psram__DOT__wmask_0 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0) 
                                   << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1) 
                                   << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2))) 
                & vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2) 
                                   << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v2))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3))) 
                & vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3) 
                                   << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory__v3))));
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__addr = __Vdly__ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_rmode_d0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_ren_d0))
            ? vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_raddr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0 = __Vdly__ysyxSoCFull__DOT__psram__DOT__wmask_0;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                    = (0xffU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                 ? ((IData)(4U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                 : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))));
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                             ? ((IData)(4U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                             : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        }
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__sel 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__sel;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__sel = 0x80U;
    } else {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN 
            = (((0xff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state) 
                               << 0x15U) | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state) 
                                             << 0x12U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state) 
                                               << 0xfU)))) 
                | ((0x4000U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel)) 
                               << 0xeU)) | (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                              ? 4U : 3U) 
                                            << 9U))) 
               | ((0x80U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel)) 
                            << 7U)) | ((((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                          ? (2U | (0x38U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))
                                          : 1U) << 3U) 
                                       | ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI) 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
                                                     >> 6U)) 
                                                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))))
                                           ? (1U & 
                                              (~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__isSwitch)))
                                           : 0U))));
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))))
                ? (7U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)))))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__sel 
            = (((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___cmd_T) 
                  & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
                         >> 6U)) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel)))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___addr_T) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
                       >> 2U))) | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___data_7_T) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
                                      >> 1U))) ? 0x80U
                : ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
                             << 7U)) | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel) 
                                                 >> 1U))));
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h694aea74_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hc76bdce3_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h58e8de91_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hfad4052b_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h8baa9fa4_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h9e057a56_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h071a2c84_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hc0dde5b8_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h13b579b2_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen = 0;
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready = 0;
    SData/*13:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    IData/*16:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    SData/*13:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel)) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready))));
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = (1U & 
                                               ((~ (IData)(vlSelf->reset)) 
                                                & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))));
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                                ? (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & (((0x800U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h70f6fa58__0) 
                                                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                         - (IData)(1U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h70f6fa58__0) 
                                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                        - (IData)(1U)))))
                                                : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    __Vtableidx4 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->reset)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_h694aea74_0
        [__Vtableidx4];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelf->reset) || (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                 | (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    __Vtableidx7 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w) 
                     << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) 
                                << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                           << 1U) | (IData)(vlSelf->reset))));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_hc76bdce3_0
         [__Vtableidx7])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q 
            = VysyxSoCFull__ConstPool__TABLE_h58e8de91_0
            [__Vtableidx7];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_hc76bdce3_0
         [__Vtableidx7])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q 
            = VysyxSoCFull__ConstPool__TABLE_hfad4052b_0
            [__Vtableidx7];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 4U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x2774U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
    } else {
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x185U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 1U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? (
                                                   ((0x100U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_7)
                                                     : 
                                                    ((0x200U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_6)
                                                      : 
                                                     ((0x400U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_5)
                                                       : 
                                                      ((0x800U 
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
                                                      | ((((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                                           & (0U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                                           ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                           : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                                         >> 0x1fU)))
                                                : (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
               & (0x10U == (0x1cU & vlSelf->__VdfgTmp_h26a921c3__0))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = (0x3fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 0xcU));
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                     >> 0xaU));
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((0x32U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q 
                            = (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                            = ((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb) 
                                               >> 4U)))
                                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata));
                    }
                } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
                }
            }
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                    & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
             & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w)) 
             & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
             & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_arready))
                    ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen)) 
                                 << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN)))
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_awvalid) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_awready))
                        ? 0x10U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                    << 5U) | (((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                               << 4U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr)));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
               & (0x18U == (0x1cU & vlSelf->__VdfgTmp_h26a921c3__0))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata);
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                         >> 6U));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
        if ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        }
        if (((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r;
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 1U : 2U);
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                 >> 0xaU)))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 4U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 5U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 3U : 7U);
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 2U : (((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))
                                 ? 1U : ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                          ? 0U : 7U)));
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                               >> 0xaU)))));
                    }
                }
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if ((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_awready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_wvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_wready))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0xffU;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut;
            }
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_arready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arburst;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen) 
                            - (IData)(1U)));
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
            if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr;
            } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                        ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                 ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                          ? 0xfU : 
                                         ((7U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                           ? 0x1fU : 0x3fU))));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr 
                        & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                       | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr) 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
            } else {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr);
            }
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF_NX("%c",0,8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF_NX("%c",0,8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
        Verilated::runFlushCallbacks();
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0x3bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r)) 
                          << 0xaU));
                if ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                 >> 0xaU));
                }
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & 0U);
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                     >> 1U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x3bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                 >> 0xaU));
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (3U & 0U);
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                 >> 1U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x3bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                             >> 0xaU));
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x3fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                  >> 0xcU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                             >> 0xaU));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x400U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            } else if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 0x20U : 0U);
            }
            if ((0x28U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                              | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                    if ((0xaU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx5 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h8baa9fa4_0
        [__Vtableidx5];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                        >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q 
        = ((1U & (~ (IData)(vlSelf->reset))) && (1U 
                                                 & ((6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                                                       >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->externalPins_uart_rx));
    vlSelf->__Vtableidx2 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h9e057a56_0
        [vlSelf->__Vtableidx2];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = ((1U & (~ (IData)(vlSelf->reset))) && (1U 
                                                 & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                                      & (1U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                                    | (((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                           >> 8U)) 
                                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_3 
        = (IData)((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_3 
        = (IData)((0xcU != (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__active = (IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hd268a2b4__0 
        = (IData)((4U == (0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                                        >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                                 && (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                         >> 7U)))));
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_hf985a723__0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 5U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__write = (
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hd268a2b4__0));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_awready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_arready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arburst;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U))) 
                                           && (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                        : ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U)) 
                                           || (1U & 
                                               (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_hf985a723__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h70f6fa58__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_he52184fd__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__write) 
            << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hd268a2b4__0) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r));
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
               & (0x14U == (0x1cU & vlSelf->__VdfgTmp_h26a921c3__0))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h70f6fa58__0) 
                        - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                                        >> 1U))));
    vlSelf->__Vtableidx8 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h071a2c84_0
        [vlSelf->__Vtableidx8][0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h071a2c84_0
        [vlSelf->__Vtableidx8][1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h071a2c84_0
        [vlSelf->__Vtableidx8][2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                  & ((- (IData)(
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                    >> 0xdU)))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                       >> 0xdU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622edac__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) 
           & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss));
    vlSelf->__Vtableidx3 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hc0dde5b8_0
        [vlSelf->__Vtableidx3];
    vlSelf->__Vtableidx6 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_h13b579b2_0
        [vlSelf->__Vtableidx6];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI = ((~ (IData)(vlSelf->reset)) 
                                                 & ((((0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__isSwitch)) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmask 
        = ((((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3)) 
            << 3U) | ((((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2)) 
                       << 2U) | ((((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1)) 
                                  << 1U) | ((0x38U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0)))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__12\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt = 1U;
    } else if ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt = 0U;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_EX2MEM_ready_0) 
          & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall))) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXoutValid))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___io_Result_T_18;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard1_1) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard2_1)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_bits_memRead_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n 
        = (1U & (~ ((IData)(vlSelf->reset) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata0 
        = ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut)
            ? VL_SHIFTL_III(32,32,32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rdata2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___wSel_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFireReg)) 
           & (0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                         >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                   >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                             >> 0x1fU)) << 2U)) | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 4U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__arDataFireReg) 
               | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__arAssert)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush)) 
                  | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut 
                       >> 3U) == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                  >> 3U)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memWrite) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_memRead) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid)))))))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
        = ((0x200U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                       >> 0x10U)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_aw_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut
            : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard1_1))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__hazard1Reg)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__bypass1Reg
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rdata1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut
            : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard2_1))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__hazard2Reg)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__bypass2Reg
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rdata2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXoutValid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID2EXValid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata1 
        = ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut)
            ? VL_SHIFTL_III(32,32,32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata0, 0x10U)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata0);
    if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut)) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb 
            = ((0x80U & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                           << 7U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                     << 6U)) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                  << 6U) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                   << 6U)))) 
               | ((0x40U & (((IData)((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                             << 6U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                        << 6U) | (0xffffffc0U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                     << 5U))))) 
                  | ((0x20U & (((IData)((1U == (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                                << 5U) | ((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                >> 1U)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                           << 5U) | 
                                          (0xffffffe0U 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                              << 4U))))) 
                     | ((IData)((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                        << 4U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata 
            = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata1)) 
               << 0x20U);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb 
            = ((8U & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                        << 3U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                  << 2U)) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                               << 2U) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                 << 3U)) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                << 2U)))) 
               | ((4U & (((IData)((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                          << 2U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                     << 2U) | (0xfffffffcU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                  << 1U))))) 
                  | ((2U & (((IData)((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                             << 1U) | ((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                             >> 1U)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                        << 1U) | (0xfffffffeU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3))))) 
                     | (IData)((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata 
            = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata1));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[0U])));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___wSel_T)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_w_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 
        = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last) 
                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
             & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))) 
            << 0xfU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last) 
                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                          & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))) 
                         << 0xeU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                       & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))) 
                                      << 0xdU) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                    & (7U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))) 
                                                   << 0xcU) 
                                                  | (((((0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                       & (7U 
                                                          != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))) 
                                                      << 0xbU) 
                                                     | (((((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                          & (7U 
                                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))) 
                                                         << 0xaU) 
                                                        | (((((0U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                             & (7U 
                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))) 
                                                            << 9U) 
                                                           | (((((0U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                & (7U 
                                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))) 
                                                               << 8U) 
                                                              | (((((0U 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                   & (7U 
                                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))) 
                                                                  << 7U) 
                                                                 | (((((0U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                      & (7U 
                                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))) 
                                                                     << 6U) 
                                                                    | (((((0U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                         & (7U 
                                                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))) 
                                                                        << 5U) 
                                                                       | (((((0U 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                            & (7U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))) 
                                                                           << 4U) 
                                                                          | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                               & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))) 
                                                                              << 3U) 
                                                                             | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__assert_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__assertId)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___pcBrImm_T 
        = ((((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pc
              : 0U) | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1
                        : 0U)) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_imm);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc1))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pc
            : ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc1))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1
                : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2))
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2
             : 0U) | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_imm
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1457f715__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 3U)) << 3U) | (7U & ((~ ((IData)(7U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arburst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arsize 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arburst 
            = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen 
            = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arsize = 2U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IF__io_pcBr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_syscall)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvecReg
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_mret)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mepcReg
                : (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___pcBrImm_T
                     : 0U) | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                               ? (0xfffffffeU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___pcBrImm_T)
                               : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_9)) 
           & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                 >> 0x1fU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt 
        = (((0x18U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8) 
            | (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8 
                     | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2)) 
                        << 2U)))) | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs2)
                                      : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1457f715__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                          >> 0x1cU)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram)
                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa163a__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
              >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                    >> 4U) & (~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_B 
        = ((0xffffffe0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                    >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
              >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((6U & (4U ^ (0x1eU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1bU)))) 
                               | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                        >> 0x18U)))) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2fU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 0x24U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arburst));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits));
    vlSelf->__VdfgTmp_h3669d4cb__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_B 
           ^ (- (IData)((1U & (~ (IData)((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T))))))));
    vlSelf->__VdfgTmp_hee0c871e__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->__VdfgTmp_hebe00b40__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->__VdfgTmp_hdad3e04f__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d32b97f__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d35e96a__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d86cae3__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1eU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1fU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1dU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d85b856__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1fU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit)) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                         >> 0x1eU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dce98d5__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 3U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dcac840__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 3U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 4U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e5949__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1cU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1dU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1bU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d82a9bc__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1dU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1eU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc62b98__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 4U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 5U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc2dbed__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 5U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 6U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 4U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d969b44__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1aU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1bU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x19U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9a4ad1__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1bU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1cU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1aU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dde8972__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 6U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 7U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 5U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd93ec7__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 7U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 8U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 6U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dae6bae__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x18U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x19U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x17U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd23abb__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x19U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd51efb__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 8U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 9U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 7U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd14f6e__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 9U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 0xaU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                    >> 8U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e56b6__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x16U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x17U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x15U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dabf29b__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x17U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x18U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x16U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0ded7f91__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xaU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xbU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 9U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de9ae84__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xbU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xcU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 0xaU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8677dc__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x14U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x15U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x13U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d825c81__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x15U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x16U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x14U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de50b1c__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xcU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xdU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 0xbU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de13be9__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xdU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xeU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 0xcU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8f5891__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x12U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x13U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x11U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8a919c__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x13U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x14U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x12U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dfd6cb6__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xeU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xfU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 0xdU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df99f83__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xfU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0x10U)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xeU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df6f83b__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x10U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x11U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0xfU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0db20f86__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x11U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x12U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x10U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A)) 
                             + ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB)) 
                                + (QData)((IData)((1U 
                                                   & (~ (IData)(
                                                                (0xfU 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e74d5e4__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d32b97f__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dce98d5__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e4f05f1__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d35e96a__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dcac840__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edcee68__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d86cae3__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hdad3e04f__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e5949__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec05cdd__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d85b856__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hdad3e04f__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d82a9bc__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0b755e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dce98d5__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc62b98__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d32b97f__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e00a4cb__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dcac840__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc2dbed__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d35e96a__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4bed2__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e5949__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d86cae3__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d969b44__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed88e27__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d82a9bc__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d85b856__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9a4ad1__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e1cc701__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc62b98__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dde8972__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dce98d5__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e18f674__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc2dbed__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd93ec7__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dcac840__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eacbfcd__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d969b44__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e5949__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dae6bae__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed07158__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9a4ad1__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d82a9bc__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd23abb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e14e6fb__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dde8972__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd51efb__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc62b98__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e17114e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd93ec7__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd14f6e__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc2dbed__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee44e37__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dae6bae__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d969b44__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e56b6__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee81f22__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd23abb__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9a4ad1__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dabf29b__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e133162__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd51efb__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0ded7f91__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dde8972__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eef63f7__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd14f6e__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de9ae84__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd93ec7__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4ba3d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e56b6__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dae6bae__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8677dc__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee1cd60__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dabf29b__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd23abb__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d825c81__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e2b5018__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0ded7f91__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de50b1c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd51efb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e27810d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de9ae84__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de13be9__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd14f6e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edc1b47__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8677dc__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e56b6__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8f5891__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed8430a__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d825c81__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dabf29b__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8a919c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e232087__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de50b1c__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dfd6cb6__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0ded7f91__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3ed072__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de13be9__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df99f83__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de9ae84__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3b403d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dfd6cb6__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df6f83b__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de50b1c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0c14a2__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df6f83b__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8f5891__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dfd6cb6__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec53518__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8f5891__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8677dc__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df6f83b__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e37f208__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df99f83__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0db20f86__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de13be9__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec8f20f__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0db20f86__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8a919c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df99f83__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec16c65__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8a919c__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d825c81__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0db20f86__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha5b4840f__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e74d5e4__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e1cc701__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha58fd61a__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e4f05f1__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e18f674__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c3d53__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edcee68__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hebe00b40__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eacbfcd__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa038d26__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec05cdd__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hebe00b40__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed07158__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa44aba5__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0b755e__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e14e6fb__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa40f530__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e00a4cb__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e17114e__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144df9__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4bed2__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hebe00b40__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee44e37__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa18bd4c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed88e27__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hebe00b40__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee81f22__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5c3428__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e1cc701__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e133162__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e74d5e4__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa58c49d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e18f674__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eef63f7__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e4f05f1__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haaec8e34__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eacbfcd__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edcee68__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4ba3d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa105fa1__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed07158__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec05cdd__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee1cd60__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5495c2__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e14e6fb__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e2b5018__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0b755e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5723b7__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e17114e__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e27810d__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e00a4cb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa249f5e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee44e37__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4bed2__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edc1b47__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa284e4b__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee81f22__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed88e27__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed8430a__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2ce38b__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e133162__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e232087__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e1cc701__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2f321e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eef63f7__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3ed072__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e18f674__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa6b8361__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e2b5018__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3b403d__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e14e6fb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa631fac__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e232087__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0c14a2__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e133162__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa4cc7cb__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0c14a2__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edc1b47__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e232087__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c686c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edc1b47__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee44e37__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0c14a2__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7b7f06__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3b403d__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec53518__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e2b5018__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa056461__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec53518__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4ba3d__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3b403d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144906__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4ba3d__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eacbfcd__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec53518__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa67d274__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e27810d__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e37f208__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e17114e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7f2e99__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3ed072__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec8f20f__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eef63f7__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa082376__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec8f20f__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed8430a__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3ed072__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa187071__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed8430a__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee81f22__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec8f20f__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa778373__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e37f208__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec16c65__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e27810d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa00bd0c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec16c65__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee1cd60__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e37f208__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa201e0b__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee1cd60__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed07158__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec16c65__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_hc764a469__0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac9__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57c4d317__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha5b4840f__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2ce38b__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57dfff02__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha58fd61a__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2f321e__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579b728d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa44aba5__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa6b8361__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h546cdd30__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5c3428__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa631fac__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54747446__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa249f5e__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hee0c871e__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa4cc7cb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579ceed3__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa4cc7cb__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa249f5e__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2ce38b__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54633493__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2ce38b__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa4cc7cb__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha5b4840f__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a4e1__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144df9__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hee0c871e__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c686c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542c0174__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c686c__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144df9__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa631fac__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b326b4__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa631fac__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c686c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5c3428__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5464e32a__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5495c2__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7b7f06__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h543ca51c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haaec8e34__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hee0c871e__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa056461__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54554f49__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa056461__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haaec8e34__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa6b8361__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57bb6a49__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa6b8361__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa056461__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa44aba5__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542cd4bb__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c3d53__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hee0c871e__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144906__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a06e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144906__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c3d53__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7b7f06__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578b466e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7b7f06__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144906__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5495c2__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5790a218__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa40f530__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa67d274__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5468ed85__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa58c49d__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7f2e99__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54782553__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa284e4b__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hee0c871e__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa082376__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5458f85e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa082376__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa284e4b__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2f321e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h547f6506__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2f321e__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa082376__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha58fd61a__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54289454__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa18bd4c__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hee0c871e__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa187071__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54284959__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa187071__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa18bd4c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7f2e99__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578ed581__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7f2e99__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa187071__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa58c49d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5467149f__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5723b7__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa778373__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54207489__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa105fa1__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hee0c871e__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa00bd0c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54516634__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa00bd0c__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa105fa1__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa67d274__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b7bb5c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa67d274__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa00bd0c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa40f530__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5453a60e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa038d26__0)) 
           | ((IData)(vlSelf->__VdfgTmp_hee0c871e__0) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa201e0b__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5471c733__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa201e0b__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa038d26__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa778373__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5787f45b__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa778373__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa201e0b__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5723b7__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_hc764a469__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___nodeIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Shifter_io_dout 
        = (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                  >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5453a60e__0)) 
             | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5787f45b__0)))) 
            << 0x1fU) | (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542cd4bb__0)) 
                           | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578b466e__0)))) 
                          << 0x1eU) | (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                              >> 4U)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54289454__0)) 
                                         | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578ed581__0)))) 
                                        << 0x1dU) | 
                                       (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                               >> 4U)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a4e1__0)) 
                                          | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b326b4__0)))) 
                                         << 0x1cU) 
                                        | (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                  >> 4U)) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54207489__0)) 
                                             | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b7bb5c__0)))) 
                                            << 0x1bU) 
                                           | (((((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h543ca51c__0)) 
                                                | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57bb6a49__0)))) 
                                               << 0x1aU) 
                                              | (((((~ 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                      >> 4U)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54782553__0)) 
                                                   | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h547f6506__0)))) 
                                                  << 0x19U) 
                                                 | (((((~ 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54747446__0)) 
                                                      | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54633493__0)))) 
                                                     << 0x18U) 
                                                    | (((((~ 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                            >> 4U)) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5471c733__0)) 
                                                         | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5467149f__0)))) 
                                                        << 0x17U) 
                                                       | (((((~ 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                               >> 4U)) 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a06e__0)) 
                                                            | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5464e32a__0)))) 
                                                           << 0x16U) 
                                                          | (((((~ 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                  >> 4U)) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54284959__0)) 
                                                               | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5468ed85__0)))) 
                                                              << 0x15U) 
                                                             | (((((~ 
                                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                     >> 4U)) 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542c0174__0)) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h546cdd30__0)))) 
                                                                 << 0x14U) 
                                                                | (((((~ 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                        >> 4U)) 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54516634__0)) 
                                                                     | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5790a218__0)))) 
                                                                    << 0x13U) 
                                                                   | (((((~ 
                                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                           >> 4U)) 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54554f49__0)) 
                                                                        | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579b728d__0)))) 
                                                                       << 0x12U) 
                                                                      | (((((~ 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                              >> 4U)) 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5458f85e__0)) 
                                                                           | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57dfff02__0)))) 
                                                                          << 0x11U) 
                                                                         | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579ceed3__0)) 
                                                                              | ((IData)(vlSelf->__VdfgTmp_h3669d4cb__0) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57c4d317__0)))) 
                                                                             << 0x10U) 
                                                                            | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5787f45b__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5453a60e__0))) 
                                                                                << 0xfU) 
                                                                               | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578b466e__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542cd4bb__0))) 
                                                                                << 0xeU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578ed581__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54289454__0))) 
                                                                                << 0xdU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b326b4__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a4e1__0))) 
                                                                                << 0xcU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b7bb5c__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54207489__0))) 
                                                                                << 0xbU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57bb6a49__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h543ca51c__0))) 
                                                                                << 0xaU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h547f6506__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54782553__0))) 
                                                                                << 9U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54633493__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54747446__0))) 
                                                                                << 8U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5467149f__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5471c733__0))) 
                                                                                << 7U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5464e32a__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a06e__0))) 
                                                                                << 6U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5468ed85__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54284959__0))) 
                                                                                << 5U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h546cdd30__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542c0174__0))) 
                                                                                << 4U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5790a218__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54516634__0))) 
                                                                                << 3U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579b728d__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54554f49__0))) 
                                                                                << 2U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57dfff02__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5458f85e__0))) 
                                                                                << 1U) 
                                                                                | (((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57c4d317__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579ceed3__0))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___io_Result_T_18 
        = ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T)) 
             | (IData)(((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____VdfgTmp_h5fa0db49__0))))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)
             : 0U) | (((IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))))
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_B)
                        : 0U) | (((IData)((5U == (5U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))))
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_B)
                                   : 0U) | (((IData)(
                                                     (4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_B)
                                              : 0U) 
                                            | (((IData)(
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____VdfgTmp_h5fa0db49__0)))
                                                 ? 
                                                (1U 
                                                 & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB) 
                                                     >> 0x1fU) 
                                                    | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB) 
                                                        >> 0x1fU) 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                                  >> 0x1fU)))))
                                                 : 0U) 
                                               | (((IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))))
                                                    ? 
                                                   (1U 
                                                    & ((~ (IData)(
                                                                  (0xfU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T)))) 
                                                       ^ (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                                  >> 0x20U))))
                                                    : 0U) 
                                                  | (((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Shifter_io_dout
                                                       : 0U) 
                                                     | (((IData)(
                                                                 (9U 
                                                                  == 
                                                                  (9U 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))))
                                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Shifter_io_dout
                                                          : 0U) 
                                                        | ((3U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_9))
                                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Shifter_io_dout
                                                            : 0U)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h0fff2149__0 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___io_Result_T_18 
                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__brTaken 
        = (((IData)(((0U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3))) 
                     & ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___io_Result_T_18) 
                        ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))) 
            | ((IData)(((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h0fff2149__0))) 
               | ((IData)(((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h0fff2149__0))) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_jump)))) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXoutValid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___EX_io_brTaken 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__brTaken) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__brEnable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDoutValid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___EX_io_brTaken)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF2IDValid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___brTkCnt_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID2EXValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___EX_io_brTaken));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFoutValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__io_IF2ID_valid_0) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___EX_io_brTaken)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pre2IFValid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IF__io_brTaken 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___EX_io_brTaken) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT____Vcellinp__brFail__io_cond 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arAssert) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IF__io_brTaken));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brEnable 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arAssert)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IF__io_brTaken));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___brFail_io_out 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT____Vcellinp__brFail__io_cond) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brFail__DOT__record));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brBufferValid)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brBuffer
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brEnable)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IF__io_pcBr
                : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__pcReg)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut
            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state))
                ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bufTag 
                    << 6U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bufIndex) 
                              << 3U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2cU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 4U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arsize));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__indexAddr 
        = (7U & (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
                  | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)))
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bufIndex)
                  : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bypassReady 
        = (((5U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext 
                    >> 0x1dU)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__ready)) 
           | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_ar_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bypassReady)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid)
            : (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                                                   >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                             >> 0x1fU)) << 2U)) | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_ar_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_ar_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN 
        = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last) 
                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
             & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count))) 
            << 0xfU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last) 
                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                          & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count))) 
                         << 0xeU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                       & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count))) 
                                      << 0xdU) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                    & (7U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count))) 
                                                   << 0xcU) 
                                                  | (((((0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                       & (7U 
                                                          != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count))) 
                                                      << 0xbU) 
                                                     | (((((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                          & (7U 
                                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count))) 
                                                         << 0xaU) 
                                                        | (((((0U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                             & (7U 
                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count))) 
                                                            << 9U) 
                                                           | (((((0U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                & (7U 
                                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count))) 
                                                               << 8U) 
                                                              | (((((0U 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last) 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                   & (7U 
                                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))) 
                                                                  << 7U) 
                                                                 | (((((0U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last) 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                      & (7U 
                                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))) 
                                                                     << 6U) 
                                                                    | (((((0U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last) 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                         & (7U 
                                                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))) 
                                                                        << 5U) 
                                                                       | (((((0U 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                            & (7U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))) 
                                                                           << 4U) 
                                                                          | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                               & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))) 
                                                                              << 3U) 
                                                                             | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_h010f2138__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__isFull)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__io_master_ar_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 3U)) << 3U) | (7U & ((~ ((IData)(7U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h4940e08b__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT___enqPtr_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isFull)) 
           & ((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                          >> 0x10U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_h010f2138__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
        = ((0x200U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                       >> 0x10U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_h010f2138__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                           >> 0x18U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                          >> 0x1cU)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h4940e08b__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa163a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_h8540bfd7__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                       >> 0x20U));
        vlSelf->__VdfgTmp_hcfff5500__0 = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg) 
                                                  >> 4U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg);
        vlSelf->__VdfgTmp_hcfff5500__0 = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415c1c__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415c1c__0));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hcfff5500__0) 
                     >> 2U));
        vlSelf->__VdfgTmp_h1b50dbb3__0 = ((IData)(vlSelf->__VdfgTmp_hcfff5500__0) 
                                          >> 3U);
        vlSelf->__VdfgTmp_h1ccfac88__0 = (1U & (IData)(vlSelf->__VdfgTmp_hcfff5500__0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hcfff5500__0) 
                     >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0 = 0U;
        vlSelf->__VdfgTmp_h1b50dbb3__0 = 0U;
        vlSelf->__VdfgTmp_h1ccfac88__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 0x18U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
            = vlSelf->__VdfgTmp_hcfff5500__0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x10U)) 
                                               << 2U)) 
                                             | (3U 
                                                & (1U 
                                                   ^ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___xpiWdata_T_15 
        = ((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))))) 
           | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
               ? (0x3000000U | (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)((((0x20000000U == (0x30000000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                             >> 0x19U)) | ((8U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                >> 0xeU)) 
                                              | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0xcU))))))) 
           | (3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                           >> 0x1cU))));
    if ((3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                      >> 0x1cU)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState)) 
               & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState)));
        vlSelf->__VdfgTmp_h26a921c3__0 = (0x3fffffffU 
                                          & (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                               ? 0U
                                               : 0x10001018U) 
                                             | (((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                                  ? 0x10001004U
                                                  : 0U) 
                                                | (((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                                     ? 0x10001010U
                                                     : 0U) 
                                                   | (((3U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                                        ? 0x10001010U
                                                        : 0U) 
                                                      | ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                                          ? 0x10001000U
                                                          : 0U))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb = 0xfU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
            = ((0x3ffc000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___xpiWdata_T_15) 
               | (0x3fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___xpiWdata_T_15 
                             | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                 ? 0x2540U : 0U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__enbaleReg;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write;
        vlSelf->__VdfgTmp_h26a921c3__0 = (0x3fffffffU 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel 
        = (IData)(((0U == (0x30000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0)
                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                        >> 8U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                  >> 0x18U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fire 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__fire 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__ram_ext__W0_mask 
        = ((((IData)(vlSelf->__VdfgTmp_h1b50dbb3__0) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0)) 
                                  << 1U) | ((IData)(vlSelf->__VdfgTmp_h1ccfac88__0) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_hd9385aff__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & ((IData)(vlSelf->__VdfgTmp_h1ccfac88__0)
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata
                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h117be566__0) 
                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0) 
                                       & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                          >> 0x10U)
                                       : (((IData)(vlSelf->__VdfgTmp_h1b50dbb3__0) 
                                           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                              >> 0x18U)
                                           : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h113894d1__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                  >> 0x10U)
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h6a47b861__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__fire));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1a50434__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
              & (0xcU == (0x1cU & vlSelf->__VdfgTmp_h26a921c3__0))) 
             << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                         & (8U == (0x1cU & vlSelf->__VdfgTmp_h26a921c3__0))) 
                        << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                    & (4U == (0x1cU 
                                              & vlSelf->__VdfgTmp_h26a921c3__0))) 
                                   << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152773c__0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->__VdfgTmp_h26a921c3__0)))))) 
           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1a50434__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1a50434__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)))) 
                        | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                  >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1))))) 
                    & (((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                               << 2U)) | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                       | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)))) 
                        | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                  >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask))))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                       | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                          | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                   >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                ? 0U : 3U) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0)
              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                   << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
}
