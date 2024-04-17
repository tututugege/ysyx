// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__trace_chg_0_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTOP___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTOP___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTOP___024root__trace_chg_0_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->TOP__DOT__IF_io_Pre2IF_valid));
        bufp->chgBit(oldp+1,(vlSelf->TOP__DOT__arbiter_io_InstAxiLite_ar_valid));
        bufp->chgBit(oldp+2,(vlSelf->TOP__DOT__arbiter_io_AxiLite_ar_valid));
        bufp->chgBit(oldp+3,(vlSelf->TOP__DOT__xbar_io_slave_0_ar_valid));
        bufp->chgBit(oldp+4,(((0x3fffffffU == vlSelf->TOP__DOT__xbar__DOT___arSel_T_4) 
                              & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_hff5c6ba8__0))));
        bufp->chgBit(oldp+5,(((0x7ffffffU == vlSelf->TOP__DOT__xbar__DOT___arSel_T_2) 
                              & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_hff5c6ba8__0))));
        bufp->chgBit(oldp+6,(vlSelf->TOP__DOT__IF__DOT__brFail_io_reset));
        bufp->chgBit(oldp+7,((((IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T) 
                               & ((~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1)) 
                                  & ((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr))) 
                                     == (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr)))) 
                              | ((~ ((IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1) 
                                     & (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull))) 
                                 & (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+8,(((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_ar_valid) 
                              & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arCount)))));
        bufp->chgBit(oldp+9,((((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T) 
                               & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T_1)) 
                                  & ((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr))) 
                                     == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr)))) 
                              | ((~ ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T_1) 
                                     & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull))) 
                                 & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+10,((((IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T) 
                                & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T_1)) 
                                   & ((1U & ((IData)(1U) 
                                             + (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr))) 
                                      == (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr)))) 
                               | ((~ ((IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T_1) 
                                      & (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull))) 
                                  & (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+11,(((IData)(vlSelf->TOP__DOT__MEM_io_ar_ready) 
                               & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_ar_valid))));
        bufp->chgBit(oldp+12,((((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T) 
                                & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1)) 
                                   & ((1U & ((IData)(1U) 
                                             + (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr))) 
                                      == (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr)))) 
                               | ((~ ((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1) 
                                      & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull))) 
                                  & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+13,(vlSelf->TOP__DOT__Pre2IFValid));
        bufp->chgBit(oldp+14,(vlSelf->TOP__DOT__arInstValid));
        bufp->chgBit(oldp+15,((1U & ((~ ((IData)(vlSelf->TOP__DOT__Pre2IFValid) 
                                         | (IData)(vlSelf->TOP__DOT__arInstValid))) 
                                     | (IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T)))));
        bufp->chgBit(oldp+16,(vlSelf->TOP__DOT__IF_io_IF2ID_ready));
        bufp->chgBit(oldp+17,(vlSelf->TOP__DOT__IF_io_IF2ID_valid));
        bufp->chgIData(oldp+18,(vlSelf->TOP__DOT__IF__DOT__pcReg),32);
        bufp->chgIData(oldp+19,(((IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)
                                  ? vlSelf->TOP__DOT__IF__DOT__rdataReg
                                  : vlSelf->TOP__DOT__IF_io_r_bits_rdata)),32);
        bufp->chgBit(oldp+20,(vlSelf->TOP__DOT__IF_io_r_ready));
        bufp->chgBit(oldp+21,(((~ (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_bits_rid)) 
                               & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid))));
        bufp->chgIData(oldp+22,(vlSelf->TOP__DOT__IF_io_r_bits_rdata),32);
        bufp->chgBit(oldp+23,(vlSelf->TOP__DOT__arAssert));
        bufp->chgBit(oldp+24,(vlSelf->TOP__DOT__IF_io_brTaken));
        bufp->chgIData(oldp+25,(vlSelf->TOP__DOT__IF_io_pcBr),32);
        bufp->chgIData(oldp+26,(vlSelf->TOP__DOT__IF_io_pcNext),32);
        bufp->chgBit(oldp+27,(vlSelf->TOP__DOT__IF__DOT__brFail_io_out));
        bufp->chgBit(oldp+28,(vlSelf->TOP__DOT__IF2IDValid));
        bufp->chgIData(oldp+29,(vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_pc),32);
        bufp->chgIData(oldp+30,(vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst),32);
        bufp->chgBit(oldp+31,(vlSelf->TOP__DOT__ID_io_ID2EX_ready));
        bufp->chgCData(oldp+32,((7U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+33,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))));
        bufp->chgBit(oldp+34,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))));
        bufp->chgCData(oldp+35,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+37,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+38,(((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5)) 
                               | (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_bits_csrRead))));
        bufp->chgIData(oldp+39,(((((((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                      ? (((- (IData)(
                                                     (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0x1fU))) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x13U)) 
                                            | (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x14U)))
                                      : 0U) | ((2U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0x13U)) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 7U)))))
                                                : 0U)) 
                                   | ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                       ? (((- (IData)(
                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x1fU))) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 7U))))))
                                       : 0U)) | ((5U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x14U))))))
                                                  : 0U)) 
                                 | ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                     ? (0xfffff000U 
                                        & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)
                                     : 0U))),32);
        bufp->chgCData(oldp+40,((((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36))) 
                                  << 3U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16))) 
                                             << 2U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14))) 
                                                << 1U) 
                                               | (0U 
                                                  != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12)))))),4);
        bufp->chgCData(oldp+41,((((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))) 
                                  << 1U) | (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23)))),2);
        bufp->chgCData(oldp+42,(vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2),2);
        bufp->chgCData(oldp+43,((((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6))) 
                                  << 1U) | (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7)))),2);
        bufp->chgBit(oldp+44,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10))));
        bufp->chgBit(oldp+45,(((~ (IData)((0x2000U 
                                           == (0xfa000U 
                                               & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)))) 
                               & (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26)))));
        bufp->chgBit(oldp+46,(vlSelf->TOP__DOT__ID_io_ID2EX_bits_csrRead));
        bufp->chgBit(oldp+47,((0xffffffffU == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_34)));
        bufp->chgBit(oldp+48,((0xffffffffU == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_64)));
        bufp->chgBit(oldp+49,((0xffffffffU == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62)));
        bufp->chgIData(oldp+50,(vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata),32);
        bufp->chgCData(oldp+51,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd),5);
        bufp->chgBit(oldp+52,(vlSelf->TOP__DOT__ID2EXValid));
        bufp->chgBit(oldp+53,(vlSelf->TOP__DOT__EX_io_WBoutValid));
        bufp->chgIData(oldp+54,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc),32);
        bufp->chgIData(oldp+55,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_inst),32);
        bufp->chgCData(oldp+56,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3),3);
        bufp->chgBit(oldp+57,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memWrite));
        bufp->chgBit(oldp+58,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memRead));
        bufp->chgCData(oldp+59,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1),5);
        bufp->chgCData(oldp+60,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2),5);
        bufp->chgCData(oldp+61,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rd),5);
        bufp->chgIData(oldp+62,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata1),32);
        bufp->chgIData(oldp+63,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata2),32);
        bufp->chgBit(oldp+64,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_regWrite));
        bufp->chgIData(oldp+65,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm),32);
        bufp->chgCData(oldp+66,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp),4);
        bufp->chgCData(oldp+67,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1),2);
        bufp->chgCData(oldp+68,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2),2);
        bufp->chgCData(oldp+69,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc),2);
        bufp->chgBit(oldp+70,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_jump));
        bufp->chgBit(oldp+71,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_csrWrite));
        bufp->chgBit(oldp+72,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_csrRead));
        bufp->chgBit(oldp+73,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_syscall));
        bufp->chgBit(oldp+74,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_mret));
        bufp->chgBit(oldp+75,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_halt));
        bufp->chgBit(oldp+76,((1U & ((~ (IData)(vlSelf->TOP__DOT__EX2MEMValid)) 
                                     | (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T)))));
        bufp->chgBit(oldp+77,((1U & (~ (IData)(vlSelf->TOP__DOT__EX_io_stall)))));
        bufp->chgIData(oldp+78,(vlSelf->TOP__DOT__EX__DOT__data2),32);
        bufp->chgIData(oldp+79,(vlSelf->TOP__DOT__EX__DOT__Alu_io_Result),32);
        bufp->chgSData(oldp+80,((0xfffU & vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm)),12);
        bufp->chgIData(oldp+81,(((4U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3))
                                  ? (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1)
                                  : vlSelf->TOP__DOT__EX__DOT__data1)),32);
        bufp->chgIData(oldp+82,((((1U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                   ? (vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm 
                                      + vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc)
                                   : 0U) | ((2U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                             ? vlSelf->TOP__DOT__EX__DOT__data1
                                             : 0U))),32);
        bufp->chgBit(oldp+83,(vlSelf->TOP__DOT__EX_io_brTaken));
        bufp->chgIData(oldp+84,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut),32);
        bufp->chgCData(oldp+85,(vlSelf->TOP__DOT__EX_io_hazard1),2);
        bufp->chgCData(oldp+86,(vlSelf->TOP__DOT__EX_io_hazard2),2);
        bufp->chgBit(oldp+87,(vlSelf->TOP__DOT__EX_io_stall));
        bufp->chgBit(oldp+88,(vlSelf->TOP__DOT__EX2MEMValid));
        bufp->chgBit(oldp+89,(vlSelf->TOP__DOT__MEM_io_flush));
        bufp->chgIData(oldp+90,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_pc),32);
        bufp->chgIData(oldp+91,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_inst),32);
        bufp->chgCData(oldp+92,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3),3);
        bufp->chgBit(oldp+93,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite));
        bufp->chgBit(oldp+94,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead));
        bufp->chgCData(oldp+95,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd),5);
        bufp->chgIData(oldp+96,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2),32);
        bufp->chgBit(oldp+97,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite));
        bufp->chgSData(oldp+98,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrAddr),12);
        bufp->chgBit(oldp+99,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrWrite));
        bufp->chgIData(oldp+100,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrWdata),32);
        bufp->chgBit(oldp+101,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrRead));
        bufp->chgBit(oldp+102,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_syscall));
        bufp->chgBit(oldp+103,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_mret));
        bufp->chgBit(oldp+104,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_halt));
        bufp->chgBit(oldp+105,(vlSelf->TOP__DOT__MEM_io_MEM2WB_ready));
        bufp->chgBit(oldp+106,(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid));
        bufp->chgBit(oldp+107,(vlSelf->TOP__DOT__MEM_io_ar_ready));
        bufp->chgBit(oldp+108,(vlSelf->TOP__DOT__MEM_io_ar_valid));
        bufp->chgIData(oldp+109,((0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)),32);
        bufp->chgBit(oldp+110,((((0x1fU == (IData)(vlSelf->TOP__DOT__xbar__DOT___awSel_T)) 
                                 & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                    & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull)) 
                                       & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awCount))))) 
                                | ((0x3fffffffU == vlSelf->TOP__DOT__xbar__DOT___awSel_T_4) 
                                   & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                      & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull)) 
                                         & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__awCount))))))));
        bufp->chgBit(oldp+111,(vlSelf->TOP__DOT__MEM_io_aw_valid));
        bufp->chgBit(oldp+112,((((IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h7c0b3a70__0) 
                                 & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                    & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull)) 
                                       & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wCount))))) 
                                | ((IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_heab2129b__0) 
                                   & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                      & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull)) 
                                         & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__wCount))))))));
        bufp->chgBit(oldp+113,(vlSelf->TOP__DOT__MEM_io_w_valid));
        bufp->chgIData(oldp+114,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo_io_enq_bits_data),32);
        bufp->chgCData(oldp+115,(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_orMatrixOutputs),4);
        bufp->chgBit(oldp+116,(vlSelf->TOP__DOT__MEM2WBValid));
        bufp->chgBit(oldp+117,(vlSelf->TOP__DOT__arwDataValid));
        bufp->chgCData(oldp+118,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3),3);
        bufp->chgBit(oldp+119,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead));
        bufp->chgBit(oldp+120,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite));
        bufp->chgBit(oldp+121,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite));
        bufp->chgSData(oldp+122,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr),12);
        bufp->chgBit(oldp+123,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite));
        bufp->chgIData(oldp+124,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWdata),32);
        bufp->chgBit(oldp+125,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrRead));
        bufp->chgBit(oldp+126,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall));
        bufp->chgBit(oldp+127,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_mret));
        bufp->chgBit(oldp+128,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_halt));
        bufp->chgBit(oldp+129,(vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T));
        bufp->chgBit(oldp+130,(vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T_1));
        bufp->chgBit(oldp+131,(vlSelf->TOP__DOT__WB_io_WBout_bits_syscall));
        bufp->chgIData(oldp+132,(vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecReg),32);
        bufp->chgBit(oldp+133,(vlSelf->TOP__DOT__WB_io_WBout_bits_mret));
        bufp->chgIData(oldp+134,(vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mepcReg),32);
        bufp->chgBit(oldp+135,(vlSelf->TOP__DOT__WB_io_r_ready));
        bufp->chgBit(oldp+136,(((IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_bits_rid) 
                                & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid))));
        bufp->chgBit(oldp+137,(vlSelf->TOP__DOT__WB_io_b_ready));
        bufp->chgBit(oldp+138,((((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum) 
                                 & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__Sram_wen)) 
                                | (((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum) 
                                    >> 1U) & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty)) 
                                              & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TOP__DOT__uart__DOT__bCount))))))));
        bufp->chgBit(oldp+139,(((~ (IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)) 
                                & (IData)(vlSelf->TOP__DOT__MEM_io_ar_ready))));
        bufp->chgCData(oldp+140,(((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)
                                   ? 1U : 0U)),3);
        bufp->chgIData(oldp+141,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr),32);
        bufp->chgBit(oldp+142,(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_ready));
        bufp->chgBit(oldp+143,(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid));
        bufp->chgCData(oldp+144,(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_bits_rid),3);
        bufp->chgBit(oldp+145,(((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull)) 
                                & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awCount)))));
        bufp->chgBit(oldp+146,(vlSelf->TOP__DOT__xbar_io_slave_0_aw_valid));
        bufp->chgBit(oldp+147,(((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull)) 
                                & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wCount)))));
        bufp->chgBit(oldp+148,(vlSelf->TOP__DOT__xbar_io_slave_0_w_valid));
        bufp->chgBit(oldp+149,(vlSelf->TOP__DOT__xbar_io_slave_0_b_ready));
        bufp->chgBit(oldp+150,(vlSelf->TOP__DOT__ramWrapper__DOT__Sram_wen));
        bufp->chgBit(oldp+151,(((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull)) 
                                & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arCount)))));
        bufp->chgBit(oldp+152,(vlSelf->TOP__DOT__xbar_io_slave_0_r_ready));
        bufp->chgBit(oldp+153,(vlSelf->TOP__DOT__ramWrapper__DOT__Sram_ren));
        bufp->chgCData(oldp+154,(((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr)
                                   ? (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_id)
                                   : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_id))),3);
        bufp->chgIData(oldp+155,(vlSelf->TOP__DOT__ramWrapper__DOT__Sram__DOT__rdataReg),32);
        bufp->chgBit(oldp+156,(((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull)) 
                                & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__awCount)))));
        bufp->chgBit(oldp+157,(vlSelf->TOP__DOT__xbar_io_slave_1_aw_valid));
        bufp->chgBit(oldp+158,(((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull)) 
                                & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__wCount)))));
        bufp->chgBit(oldp+159,(vlSelf->TOP__DOT__xbar_io_slave_1_w_valid));
        bufp->chgBit(oldp+160,(vlSelf->TOP__DOT__xbar_io_slave_1_b_ready));
        bufp->chgBit(oldp+161,(((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty)) 
                                & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty)) 
                                   & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__bCount))))));
        bufp->chgBit(oldp+162,((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+163,(vlSelf->TOP__DOT__xbar_io_slave_1_r_ready));
        bufp->chgBit(oldp+164,(((~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isEmpty)) 
                                & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__rCount)))));
        bufp->chgCData(oldp+165,(((IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr)
                                   ? (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_id)
                                   : (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_id))),3);
        bufp->chgBit(oldp+166,((1U & (~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+167,(vlSelf->TOP__DOT__xbar_io_slave_2_r_ready));
        bufp->chgBit(oldp+168,(((~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isEmpty)) 
                                & (0U == (IData)(vlSelf->TOP__DOT__clint__DOT__rCount)))));
        bufp->chgCData(oldp+169,(((IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr)
                                   ? (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_id)
                                   : (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_id))),3);
        bufp->chgIData(oldp+170,(((0xa000004cU == vlSelf->TOP__DOT__clint__DOT__arFifo_io_deq_bits_addr)
                                   ? (IData)((vlSelf->TOP__DOT__clint__DOT__mtime 
                                              >> 0x20U))
                                   : ((0xa0000048U 
                                       == vlSelf->TOP__DOT__clint__DOT__arFifo_io_deq_bits_addr)
                                       ? (IData)(vlSelf->TOP__DOT__clint__DOT__mtime)
                                       : 0U))),32);
        bufp->chgBit(oldp+171,(vlSelf->TOP__DOT__arFireReg));
        bufp->chgBit(oldp+172,(vlSelf->TOP__DOT__IFoutValid));
        bufp->chgBit(oldp+173,(vlSelf->TOP__DOT__IDoutValid));
        bufp->chgBit(oldp+174,(vlSelf->TOP__DOT__MEMRegWrite));
        bufp->chgBit(oldp+175,(vlSelf->TOP__DOT__WBRegWrite));
        bufp->chgBit(oldp+176,(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0));
        bufp->chgBit(oldp+177,(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0));
        bufp->chgBit(oldp+178,(vlSelf->TOP__DOT__hazard1_1));
        bufp->chgBit(oldp+179,(vlSelf->TOP__DOT__hazard2_1));
        bufp->chgBit(oldp+180,(vlSelf->TOP__DOT__EXoutValid));
        bufp->chgBit(oldp+181,(vlSelf->TOP__DOT__MEMoutValid));
        bufp->chgIData(oldp+182,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_pc),32);
        bufp->chgIData(oldp+183,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_inst),32);
        bufp->chgIData(oldp+184,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut),32);
        bufp->chgIData(oldp+185,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din),32);
        bufp->chgIData(oldp+186,(vlSelf->TOP__DOT__EX__DOT__Alu_io_B),32);
        bufp->chgBit(oldp+187,((1U & (~ (IData)((0U 
                                                 != vlSelf->TOP__DOT__EX__DOT__Alu_io_Result))))));
        bufp->chgBit(oldp+188,((1U & ((~ (IData)((0xfU 
                                                  == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                      ^ (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                 >> 0x20U))))));
        bufp->chgIData(oldp+189,(vlSelf->TOP__DOT__EX__DOT__bypassReg),32);
        bufp->chgBit(oldp+190,(vlSelf->TOP__DOT__EX__DOT__hazard1Reg));
        bufp->chgBit(oldp+191,(vlSelf->TOP__DOT__EX__DOT__hazard2Reg));
        bufp->chgIData(oldp+192,(vlSelf->TOP__DOT__EX__DOT__data1),32);
        bufp->chgIData(oldp+193,((vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm 
                                  + vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc)),32);
        bufp->chgBit(oldp+194,(vlSelf->TOP__DOT__EX__DOT__brEnable));
        bufp->chgBit(oldp+195,(((IData)(((0U == (6U 
                                                 & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3))) 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != vlSelf->TOP__DOT__EX__DOT__Alu_io_Result))) 
                                            ^ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3)))) 
                                | (((2U == (3U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3) 
                                                  >> 1U))) 
                                    | (3U == (3U & 
                                              ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3) 
                                               >> 1U)))) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu_io_Result 
                                      ^ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3))))));
        bufp->chgBit(oldp+196,(vlSelf->TOP__DOT__EX__DOT__brTaken));
        bufp->chgBit(oldp+197,((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14))));
        bufp->chgBit(oldp+198,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18))));
        bufp->chgCData(oldp+199,((0x1fU & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),5);
        bufp->chgIData(oldp+200,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout),32);
        bufp->chgCData(oldp+201,((0xfU & (~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)))),4);
        bufp->chgBit(oldp+202,((1U & (~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)))));
        bufp->chgBit(oldp+203,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 1U)))));
        bufp->chgBit(oldp+204,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 2U)))));
        bufp->chgBit(oldp+205,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 3U)))));
        bufp->chgBit(oldp+206,((1U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp))));
        bufp->chgBit(oldp+207,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 1U))));
        bufp->chgBit(oldp+208,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 2U))));
        bufp->chgBit(oldp+209,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 3U))));
        bufp->chgSData(oldp+210,((((IData)((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18))) 
                                   << 9U) | (((IData)(
                                                      (3U 
                                                       == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16))) 
                                              << 8U) 
                                             | (((IData)(
                                                         (7U 
                                                          == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14))) 
                                                 << 7U) 
                                                | (((IData)(
                                                            (3U 
                                                             == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12))) 
                                                    << 6U) 
                                                   | (((IData)(
                                                               (3U 
                                                                == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10))) 
                                                       << 5U) 
                                                      | (((IData)(
                                                                  (7U 
                                                                   == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8))) 
                                                          << 4U) 
                                                         | (((IData)(
                                                                     (3U 
                                                                      == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6))) 
                                                             << 3U) 
                                                            | (((IData)(
                                                                        (0xfU 
                                                                         == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4))) 
                                                                << 2U) 
                                                               | (((IData)(
                                                                           (0xfU 
                                                                            == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2))) 
                                                                   << 1U) 
                                                                  | (0xfU 
                                                                     == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))))))))))),10);
        bufp->chgBit(oldp+211,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T))));
        bufp->chgBit(oldp+212,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2))));
        bufp->chgBit(oldp+213,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4))));
        bufp->chgBit(oldp+214,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6))));
        bufp->chgBit(oldp+215,((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8))));
        bufp->chgBit(oldp+216,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10))));
        bufp->chgBit(oldp+217,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12))));
        bufp->chgBit(oldp+218,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16))));
        bufp->chgBit(oldp+219,((1U & (~ (IData)((0xfU 
                                                 == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))))));
        bufp->chgIData(oldp+220,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB),32);
        bufp->chgQData(oldp+221,((0x1ffffffffULL & vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)),33);
        bufp->chgIData(oldp+223,((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)),32);
        bufp->chgBit(oldp+224,((1U & (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+225,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  ^ vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+226,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  | vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+227,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+228,((1U & (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                         >> 0x1fU) 
                                        | (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                             ^ vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                            >> 0x1fU) 
                                           & (IData)(
                                                     (vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                      >> 0x1fU)))))),32);
        bufp->chgIData(oldp+229,((1U & ((~ (IData)(
                                                   (0xfU 
                                                    == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                        ^ (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                   >> 0x20U))))),32);
        bufp->chgBit(oldp+230,((1U & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)));
        bufp->chgCData(oldp+231,(((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 2U)) | 
                                  (3U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din))),4);
        bufp->chgCData(oldp+232,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 3U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          << 1U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 1U))))),4);
        bufp->chgCData(oldp+233,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 2U)) | 
                                  ((4U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                   | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 2U))))),4);
        bufp->chgCData(oldp+234,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 1U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 1U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 3U))))),4);
        bufp->chgCData(oldp+235,(((8U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 2U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 4U))))),4);
        bufp->chgCData(oldp+236,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 1U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 3U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 5U))))),4);
        bufp->chgCData(oldp+237,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 2U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 4U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 6U))))),4);
        bufp->chgCData(oldp+238,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 3U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 5U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 7U))))),4);
        bufp->chgCData(oldp+239,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 6U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 8U))))),4);
        bufp->chgCData(oldp+240,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 5U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 7U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 9U))))),4);
        bufp->chgCData(oldp+241,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 6U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 8U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xaU))))),4);
        bufp->chgCData(oldp+242,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 7U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 9U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xbU))))),4);
        bufp->chgCData(oldp+243,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 8U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xaU)) 
                                   | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xcU))))),4);
        bufp->chgCData(oldp+244,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 9U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xbU)) 
                                   | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xdU))))),4);
        bufp->chgCData(oldp+245,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xaU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xcU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0xeU))))),4);
        bufp->chgCData(oldp+246,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xbU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xdU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0xfU))))),4);
        bufp->chgCData(oldp+247,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xcU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xeU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x10U))))),4);
        bufp->chgCData(oldp+248,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xdU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xfU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x11U))))),4);
        bufp->chgCData(oldp+249,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xeU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x10U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x12U))))),4);
        bufp->chgCData(oldp+250,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xfU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x11U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x13U))))),4);
        bufp->chgCData(oldp+251,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x10U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x12U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x14U))))),4);
        bufp->chgCData(oldp+252,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x11U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x13U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x15U))))),4);
        bufp->chgCData(oldp+253,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x12U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x14U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x16U))))),4);
        bufp->chgCData(oldp+254,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x13U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x15U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x17U))))),4);
        bufp->chgCData(oldp+255,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x14U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x16U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x18U))))),4);
        bufp->chgCData(oldp+256,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x15U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x17U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x19U))))),4);
        bufp->chgCData(oldp+257,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x16U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x18U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1aU))))),4);
        bufp->chgCData(oldp+258,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x17U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x19U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1bU))))),4);
        bufp->chgCData(oldp+259,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x18U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1aU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1cU))))),4);
        bufp->chgCData(oldp+260,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x19U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1bU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1dU))))),4);
        bufp->chgCData(oldp+261,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1aU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1cU)) 
                                     | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1eU)))),4);
        bufp->chgCData(oldp+262,((((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x1bU)) 
                                   | (4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1dU))) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                >> 0x1fU)))),4);
        bufp->chgIData(oldp+263,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                    << 0x1fU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                      << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)))))))))))))))))),32);
        bufp->chgBit(oldp+264,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 1U))));
        bufp->chgCData(oldp+265,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)))),4);
        bufp->chgCData(oldp+266,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1)))),4);
        bufp->chgCData(oldp+267,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2)))),4);
        bufp->chgCData(oldp+268,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3)))),4);
        bufp->chgCData(oldp+269,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4)))),4);
        bufp->chgCData(oldp+270,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5)))),4);
        bufp->chgCData(oldp+271,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6)))),4);
        bufp->chgCData(oldp+272,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7)))),4);
        bufp->chgCData(oldp+273,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8)))),4);
        bufp->chgCData(oldp+274,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9)))),4);
        bufp->chgCData(oldp+275,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10)))),4);
        bufp->chgCData(oldp+276,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11)))),4);
        bufp->chgCData(oldp+277,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12)))),4);
        bufp->chgCData(oldp+278,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13)))),4);
        bufp->chgCData(oldp+279,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14)))),4);
        bufp->chgCData(oldp+280,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15)))),4);
        bufp->chgCData(oldp+281,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16)))),4);
        bufp->chgCData(oldp+282,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17)))),4);
        bufp->chgCData(oldp+283,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18)))),4);
        bufp->chgCData(oldp+284,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19)))),4);
        bufp->chgCData(oldp+285,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20)))),4);
        bufp->chgCData(oldp+286,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21)))),4);
        bufp->chgCData(oldp+287,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22)))),4);
        bufp->chgCData(oldp+288,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23)))),4);
        bufp->chgCData(oldp+289,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24)))),4);
        bufp->chgCData(oldp+290,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25)))),4);
        bufp->chgCData(oldp+291,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26)))),4);
        bufp->chgCData(oldp+292,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27)))),4);
        bufp->chgCData(oldp+293,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28)))),4);
        bufp->chgCData(oldp+294,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29)))),4);
        bufp->chgCData(oldp+295,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30)))),4);
        bufp->chgCData(oldp+296,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31)))),4);
        bufp->chgIData(oldp+297,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                    << 0x1fU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                      << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)))))))))))))))))),32);
        bufp->chgBit(oldp+298,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 2U))));
        bufp->chgCData(oldp+299,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)))),4);
        bufp->chgCData(oldp+300,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1)))),4);
        bufp->chgCData(oldp+301,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2)))),4);
        bufp->chgCData(oldp+302,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3)))),4);
        bufp->chgCData(oldp+303,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4)))),4);
        bufp->chgCData(oldp+304,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5)))),4);
        bufp->chgCData(oldp+305,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6)))),4);
        bufp->chgCData(oldp+306,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7)))),4);
        bufp->chgCData(oldp+307,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8)))),4);
        bufp->chgCData(oldp+308,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9)))),4);
        bufp->chgCData(oldp+309,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10)))),4);
        bufp->chgCData(oldp+310,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11)))),4);
        bufp->chgCData(oldp+311,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12)))),4);
        bufp->chgCData(oldp+312,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13)))),4);
        bufp->chgCData(oldp+313,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14)))),4);
        bufp->chgCData(oldp+314,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15)))),4);
        bufp->chgCData(oldp+315,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16)))),4);
        bufp->chgCData(oldp+316,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17)))),4);
        bufp->chgCData(oldp+317,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18)))),4);
        bufp->chgCData(oldp+318,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19)))),4);
        bufp->chgCData(oldp+319,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20)))),4);
        bufp->chgCData(oldp+320,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21)))),4);
        bufp->chgCData(oldp+321,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22)))),4);
        bufp->chgCData(oldp+322,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23)))),4);
        bufp->chgCData(oldp+323,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24)))),4);
        bufp->chgCData(oldp+324,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25)))),4);
        bufp->chgCData(oldp+325,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26)))),4);
        bufp->chgCData(oldp+326,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27)))),4);
        bufp->chgCData(oldp+327,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28)))),4);
        bufp->chgCData(oldp+328,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29)))),4);
        bufp->chgCData(oldp+329,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30)))),4);
        bufp->chgCData(oldp+330,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31)))),4);
        bufp->chgIData(oldp+331,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                    << 0x1fU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                      << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)))))))))))))))))),32);
        bufp->chgBit(oldp+332,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 3U))));
        bufp->chgCData(oldp+333,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)))),4);
        bufp->chgCData(oldp+334,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1)))),4);
        bufp->chgCData(oldp+335,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2)))),4);
        bufp->chgCData(oldp+336,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3)))),4);
        bufp->chgCData(oldp+337,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4)))),4);
        bufp->chgCData(oldp+338,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5)))),4);
        bufp->chgCData(oldp+339,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6)))),4);
        bufp->chgCData(oldp+340,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7)))),4);
        bufp->chgCData(oldp+341,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8)))),4);
        bufp->chgCData(oldp+342,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9)))),4);
        bufp->chgCData(oldp+343,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10)))),4);
        bufp->chgCData(oldp+344,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11)))),4);
        bufp->chgCData(oldp+345,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12)))),4);
        bufp->chgCData(oldp+346,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13)))),4);
        bufp->chgCData(oldp+347,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14)))),4);
        bufp->chgCData(oldp+348,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15)))),4);
        bufp->chgCData(oldp+349,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16)))),4);
        bufp->chgCData(oldp+350,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17)))),4);
        bufp->chgCData(oldp+351,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18)))),4);
        bufp->chgCData(oldp+352,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19)))),4);
        bufp->chgCData(oldp+353,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20)))),4);
        bufp->chgCData(oldp+354,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21)))),4);
        bufp->chgCData(oldp+355,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22)))),4);
        bufp->chgCData(oldp+356,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23)))),4);
        bufp->chgCData(oldp+357,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24)))),4);
        bufp->chgCData(oldp+358,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25)))),4);
        bufp->chgCData(oldp+359,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26)))),4);
        bufp->chgCData(oldp+360,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27)))),4);
        bufp->chgCData(oldp+361,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28)))),4);
        bufp->chgCData(oldp+362,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29)))),4);
        bufp->chgCData(oldp+363,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30)))),4);
        bufp->chgCData(oldp+364,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31)))),4);
        bufp->chgIData(oldp+365,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                    << 0x1fU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                      << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))))))))),32);
        bufp->chgBit(oldp+366,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 4U))));
        bufp->chgCData(oldp+367,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))),4);
        bufp->chgCData(oldp+368,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))),4);
        bufp->chgCData(oldp+369,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))),4);
        bufp->chgCData(oldp+370,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))),4);
        bufp->chgCData(oldp+371,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))),4);
        bufp->chgCData(oldp+372,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))),4);
        bufp->chgCData(oldp+373,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))),4);
        bufp->chgCData(oldp+374,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))),4);
        bufp->chgCData(oldp+375,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))),4);
        bufp->chgCData(oldp+376,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))),4);
        bufp->chgCData(oldp+377,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))),4);
        bufp->chgCData(oldp+378,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))),4);
        bufp->chgCData(oldp+379,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))),4);
        bufp->chgCData(oldp+380,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))),4);
        bufp->chgCData(oldp+381,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))),4);
        bufp->chgCData(oldp+382,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))),4);
        bufp->chgCData(oldp+383,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))),4);
        bufp->chgCData(oldp+384,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)))),4);
        bufp->chgCData(oldp+385,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)))),4);
        bufp->chgCData(oldp+386,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)))),4);
        bufp->chgCData(oldp+387,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)))),4);
        bufp->chgCData(oldp+388,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)))),4);
        bufp->chgCData(oldp+389,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)))),4);
        bufp->chgCData(oldp+390,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)))),4);
        bufp->chgCData(oldp+391,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)))),4);
        bufp->chgCData(oldp+392,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)))),4);
        bufp->chgCData(oldp+393,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)))),4);
        bufp->chgCData(oldp+394,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)))),4);
        bufp->chgCData(oldp+395,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)))),4);
        bufp->chgCData(oldp+396,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)))),4);
        bufp->chgCData(oldp+397,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)))),4);
        bufp->chgCData(oldp+398,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)))),4);
        bufp->chgBit(oldp+399,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
        bufp->chgBit(oldp+400,((1U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)));
        bufp->chgBit(oldp+401,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 1U))));
        bufp->chgBit(oldp+402,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 2U))));
        bufp->chgBit(oldp+403,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 3U))));
        bufp->chgBit(oldp+404,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 4U))));
        bufp->chgBit(oldp+405,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 5U))));
        bufp->chgBit(oldp+406,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 6U))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 7U))));
        bufp->chgBit(oldp+408,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 8U))));
        bufp->chgBit(oldp+409,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 9U))));
        bufp->chgBit(oldp+410,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xaU))));
        bufp->chgBit(oldp+411,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xbU))));
        bufp->chgBit(oldp+412,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xcU))));
        bufp->chgBit(oldp+413,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xdU))));
        bufp->chgBit(oldp+414,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU))));
        bufp->chgBit(oldp+415,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xfU))));
        bufp->chgBit(oldp+416,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x10U))));
        bufp->chgBit(oldp+417,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x11U))));
        bufp->chgBit(oldp+418,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x12U))));
        bufp->chgBit(oldp+419,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x13U))));
        bufp->chgBit(oldp+420,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x14U))));
        bufp->chgBit(oldp+421,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x15U))));
        bufp->chgBit(oldp+422,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x16U))));
        bufp->chgBit(oldp+423,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x17U))));
        bufp->chgBit(oldp+424,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x18U))));
        bufp->chgBit(oldp+425,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x19U))));
        bufp->chgBit(oldp+426,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+427,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+428,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+429,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+430,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+431,((3U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)),2);
        bufp->chgCData(oldp+432,((1U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)),2);
        bufp->chgCData(oldp+433,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 1U))),2);
        bufp->chgCData(oldp+434,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 1U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 1U)))),2);
        bufp->chgCData(oldp+435,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 2U))),2);
        bufp->chgCData(oldp+436,(((2U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 2U)))),2);
        bufp->chgCData(oldp+437,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 3U))),2);
        bufp->chgCData(oldp+438,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 1U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 3U)))),2);
        bufp->chgCData(oldp+439,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 4U))),2);
        bufp->chgCData(oldp+440,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 2U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U)))),2);
        bufp->chgCData(oldp+441,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 5U))),2);
        bufp->chgCData(oldp+442,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 3U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 5U)))),2);
        bufp->chgCData(oldp+443,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 6U))),2);
        bufp->chgCData(oldp+444,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 6U)))),2);
        bufp->chgCData(oldp+445,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 7U))),2);
        bufp->chgCData(oldp+446,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 5U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 7U)))),2);
        bufp->chgCData(oldp+447,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 8U))),2);
        bufp->chgCData(oldp+448,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 6U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 8U)))),2);
        bufp->chgCData(oldp+449,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 9U))),2);
        bufp->chgCData(oldp+450,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 7U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 9U)))),2);
        bufp->chgCData(oldp+451,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+452,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 8U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xaU)))),2);
        bufp->chgCData(oldp+453,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+454,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 9U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xbU)))),2);
        bufp->chgCData(oldp+455,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+456,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0xcU)))),2);
        bufp->chgCData(oldp+457,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+458,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0xdU)))),2);
        bufp->chgCData(oldp+459,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xeU))),2);
        bufp->chgCData(oldp+460,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0xeU)))),2);
        bufp->chgCData(oldp+461,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+462,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0xfU)))),2);
        bufp->chgCData(oldp+463,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x10U))),2);
        bufp->chgCData(oldp+464,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x10U)))),2);
        bufp->chgCData(oldp+465,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x11U))),2);
        bufp->chgCData(oldp+466,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x11U)))),2);
        bufp->chgCData(oldp+467,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x12U))),2);
        bufp->chgCData(oldp+468,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x12U)))),2);
        bufp->chgCData(oldp+469,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x13U))),2);
        bufp->chgCData(oldp+470,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x11U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x13U)))),2);
        bufp->chgCData(oldp+471,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x14U))),2);
        bufp->chgCData(oldp+472,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x12U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x14U)))),2);
        bufp->chgCData(oldp+473,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x15U))),2);
        bufp->chgCData(oldp+474,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x13U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x15U)))),2);
        bufp->chgCData(oldp+475,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x16U))),2);
        bufp->chgCData(oldp+476,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x14U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x16U)))),2);
        bufp->chgCData(oldp+477,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x17U))),2);
        bufp->chgCData(oldp+478,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x15U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x17U)))),2);
        bufp->chgCData(oldp+479,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+480,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x16U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x18U)))),2);
        bufp->chgCData(oldp+481,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x19U))),2);
        bufp->chgCData(oldp+482,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x17U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x19U)))),2);
        bufp->chgCData(oldp+483,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1aU))),2);
        bufp->chgCData(oldp+484,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x18U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1aU)))),2);
        bufp->chgCData(oldp+485,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1bU))),2);
        bufp->chgCData(oldp+486,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x19U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1bU)))),2);
        bufp->chgCData(oldp+487,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+488,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1cU)))),2);
        bufp->chgCData(oldp+489,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1dU))),2);
        bufp->chgCData(oldp+490,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1dU)))),2);
        bufp->chgCData(oldp+491,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+492,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1eU)))),2);
        bufp->chgCData(oldp+493,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                             >> 0x1fU))),2);
        bufp->chgCData(oldp+494,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1dU)) 
                                  | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x1fU))),2);
        bufp->chgBit(oldp+495,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0));
        bufp->chgBit(oldp+496,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2));
        bufp->chgBit(oldp+497,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1));
        bufp->chgBit(oldp+498,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3));
        bufp->chgBit(oldp+499,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4));
        bufp->chgBit(oldp+500,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5));
        bufp->chgBit(oldp+501,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6));
        bufp->chgBit(oldp+502,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7));
        bufp->chgBit(oldp+503,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8));
        bufp->chgBit(oldp+504,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9));
        bufp->chgBit(oldp+505,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10));
        bufp->chgBit(oldp+506,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11));
        bufp->chgBit(oldp+507,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12));
        bufp->chgBit(oldp+508,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13));
        bufp->chgBit(oldp+509,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14));
        bufp->chgBit(oldp+510,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15));
        bufp->chgBit(oldp+511,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16));
        bufp->chgBit(oldp+512,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17));
        bufp->chgBit(oldp+513,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18));
        bufp->chgBit(oldp+514,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19));
        bufp->chgBit(oldp+515,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20));
        bufp->chgBit(oldp+516,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21));
        bufp->chgBit(oldp+517,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22));
        bufp->chgBit(oldp+518,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23));
        bufp->chgBit(oldp+519,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24));
        bufp->chgBit(oldp+520,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25));
        bufp->chgBit(oldp+521,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26));
        bufp->chgBit(oldp+522,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27));
        bufp->chgBit(oldp+523,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28));
        bufp->chgBit(oldp+524,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29));
        bufp->chgBit(oldp+525,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30));
        bufp->chgBit(oldp+526,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31));
        bufp->chgCData(oldp+527,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))),2);
        bufp->chgCData(oldp+528,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0),2);
        bufp->chgCData(oldp+529,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1))),2);
        bufp->chgCData(oldp+530,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1),2);
        bufp->chgCData(oldp+531,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))),2);
        bufp->chgCData(oldp+532,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))),2);
        bufp->chgCData(oldp+533,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))),2);
        bufp->chgCData(oldp+534,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))),2);
        bufp->chgCData(oldp+535,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))),2);
        bufp->chgCData(oldp+536,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))),2);
        bufp->chgCData(oldp+537,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))),2);
        bufp->chgCData(oldp+538,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))),2);
        bufp->chgCData(oldp+539,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))),2);
        bufp->chgCData(oldp+540,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))),2);
        bufp->chgCData(oldp+541,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))),2);
        bufp->chgCData(oldp+542,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))),2);
        bufp->chgCData(oldp+543,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))),2);
        bufp->chgCData(oldp+544,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))),2);
        bufp->chgCData(oldp+545,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))),2);
        bufp->chgCData(oldp+546,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))),2);
        bufp->chgCData(oldp+547,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))),2);
        bufp->chgCData(oldp+548,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))),2);
        bufp->chgCData(oldp+549,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))),2);
        bufp->chgCData(oldp+550,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))),2);
        bufp->chgCData(oldp+551,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))),2);
        bufp->chgCData(oldp+552,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))),2);
        bufp->chgCData(oldp+553,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))),2);
        bufp->chgCData(oldp+554,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))),2);
        bufp->chgCData(oldp+555,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))),2);
        bufp->chgCData(oldp+556,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))),2);
        bufp->chgCData(oldp+557,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))),2);
        bufp->chgCData(oldp+558,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))),2);
        bufp->chgCData(oldp+559,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))),2);
        bufp->chgCData(oldp+560,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))),2);
        bufp->chgCData(oldp+561,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))),2);
        bufp->chgCData(oldp+562,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))),2);
        bufp->chgCData(oldp+563,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))),2);
        bufp->chgCData(oldp+564,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))),2);
        bufp->chgCData(oldp+565,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))),2);
        bufp->chgCData(oldp+566,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))),2);
        bufp->chgCData(oldp+567,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))),2);
        bufp->chgCData(oldp+568,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))),2);
        bufp->chgCData(oldp+569,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))),2);
        bufp->chgCData(oldp+570,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))),2);
        bufp->chgCData(oldp+571,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))),2);
        bufp->chgCData(oldp+572,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))),2);
        bufp->chgCData(oldp+573,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))),2);
        bufp->chgCData(oldp+574,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))),2);
        bufp->chgCData(oldp+575,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))),2);
        bufp->chgCData(oldp+576,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))),2);
        bufp->chgCData(oldp+577,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))),2);
        bufp->chgCData(oldp+578,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))),2);
        bufp->chgCData(oldp+579,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))),2);
        bufp->chgCData(oldp+580,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))),2);
        bufp->chgCData(oldp+581,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))),2);
        bufp->chgCData(oldp+582,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))),2);
        bufp->chgCData(oldp+583,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))),2);
        bufp->chgCData(oldp+584,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))),2);
        bufp->chgCData(oldp+585,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))),2);
        bufp->chgCData(oldp+586,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))),2);
        bufp->chgCData(oldp+587,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30))),2);
        bufp->chgCData(oldp+588,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30))),2);
        bufp->chgCData(oldp+589,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31))),2);
        bufp->chgCData(oldp+590,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31))),2);
        bufp->chgBit(oldp+591,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0));
        bufp->chgBit(oldp+592,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4));
        bufp->chgBit(oldp+593,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1));
        bufp->chgBit(oldp+594,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5));
        bufp->chgBit(oldp+595,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2));
        bufp->chgBit(oldp+596,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6));
        bufp->chgBit(oldp+597,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3));
        bufp->chgBit(oldp+598,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7));
        bufp->chgBit(oldp+599,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8));
        bufp->chgBit(oldp+600,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9));
        bufp->chgBit(oldp+601,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10));
        bufp->chgBit(oldp+602,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11));
        bufp->chgBit(oldp+603,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12));
        bufp->chgBit(oldp+604,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13));
        bufp->chgBit(oldp+605,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14));
        bufp->chgBit(oldp+606,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15));
        bufp->chgBit(oldp+607,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16));
        bufp->chgBit(oldp+608,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17));
        bufp->chgBit(oldp+609,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18));
        bufp->chgBit(oldp+610,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19));
        bufp->chgBit(oldp+611,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20));
        bufp->chgBit(oldp+612,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21));
        bufp->chgBit(oldp+613,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22));
        bufp->chgBit(oldp+614,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23));
        bufp->chgBit(oldp+615,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24));
        bufp->chgBit(oldp+616,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25));
        bufp->chgBit(oldp+617,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26));
        bufp->chgBit(oldp+618,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27));
        bufp->chgBit(oldp+619,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28));
        bufp->chgBit(oldp+620,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29));
        bufp->chgBit(oldp+621,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30));
        bufp->chgBit(oldp+622,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31));
        bufp->chgCData(oldp+623,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))),2);
        bufp->chgCData(oldp+624,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0),2);
        bufp->chgCData(oldp+625,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1))),2);
        bufp->chgCData(oldp+626,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1),2);
        bufp->chgCData(oldp+627,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2))),2);
        bufp->chgCData(oldp+628,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2),2);
        bufp->chgCData(oldp+629,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3))),2);
        bufp->chgCData(oldp+630,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3),2);
        bufp->chgCData(oldp+631,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))),2);
        bufp->chgCData(oldp+632,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))),2);
        bufp->chgCData(oldp+633,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))),2);
        bufp->chgCData(oldp+634,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))),2);
        bufp->chgCData(oldp+635,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))),2);
        bufp->chgCData(oldp+636,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))),2);
        bufp->chgCData(oldp+637,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))),2);
        bufp->chgCData(oldp+638,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))),2);
        bufp->chgCData(oldp+639,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))),2);
        bufp->chgCData(oldp+640,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))),2);
        bufp->chgCData(oldp+641,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))),2);
        bufp->chgCData(oldp+642,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))),2);
        bufp->chgCData(oldp+643,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))),2);
        bufp->chgCData(oldp+644,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))),2);
        bufp->chgCData(oldp+645,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))),2);
        bufp->chgCData(oldp+646,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))),2);
        bufp->chgCData(oldp+647,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))),2);
        bufp->chgCData(oldp+648,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))),2);
        bufp->chgCData(oldp+649,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))),2);
        bufp->chgCData(oldp+650,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))),2);
        bufp->chgCData(oldp+651,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))),2);
        bufp->chgCData(oldp+652,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))),2);
        bufp->chgCData(oldp+653,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))),2);
        bufp->chgCData(oldp+654,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))),2);
        bufp->chgCData(oldp+655,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))),2);
        bufp->chgCData(oldp+656,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))),2);
        bufp->chgCData(oldp+657,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))),2);
        bufp->chgCData(oldp+658,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))),2);
        bufp->chgCData(oldp+659,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))),2);
        bufp->chgCData(oldp+660,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))),2);
        bufp->chgCData(oldp+661,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))),2);
        bufp->chgCData(oldp+662,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))),2);
        bufp->chgCData(oldp+663,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))),2);
        bufp->chgCData(oldp+664,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))),2);
        bufp->chgCData(oldp+665,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))),2);
        bufp->chgCData(oldp+666,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))),2);
        bufp->chgCData(oldp+667,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))),2);
        bufp->chgCData(oldp+668,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))),2);
        bufp->chgCData(oldp+669,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))),2);
        bufp->chgCData(oldp+670,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))),2);
        bufp->chgCData(oldp+671,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))),2);
        bufp->chgCData(oldp+672,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))),2);
        bufp->chgCData(oldp+673,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))),2);
        bufp->chgCData(oldp+674,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))),2);
        bufp->chgCData(oldp+675,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))),2);
        bufp->chgCData(oldp+676,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))),2);
        bufp->chgCData(oldp+677,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))),2);
        bufp->chgCData(oldp+678,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))),2);
        bufp->chgCData(oldp+679,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28))),2);
        bufp->chgCData(oldp+680,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28))),2);
        bufp->chgCData(oldp+681,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29))),2);
        bufp->chgCData(oldp+682,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29))),2);
        bufp->chgCData(oldp+683,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30))),2);
        bufp->chgCData(oldp+684,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30))),2);
        bufp->chgCData(oldp+685,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31))),2);
        bufp->chgCData(oldp+686,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31))),2);
        bufp->chgBit(oldp+687,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0));
        bufp->chgBit(oldp+688,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8));
        bufp->chgBit(oldp+689,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1));
        bufp->chgBit(oldp+690,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9));
        bufp->chgBit(oldp+691,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2));
        bufp->chgBit(oldp+692,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10));
        bufp->chgBit(oldp+693,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3));
        bufp->chgBit(oldp+694,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11));
        bufp->chgBit(oldp+695,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4));
        bufp->chgBit(oldp+696,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12));
        bufp->chgBit(oldp+697,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5));
        bufp->chgBit(oldp+698,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13));
        bufp->chgBit(oldp+699,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6));
        bufp->chgBit(oldp+700,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14));
        bufp->chgBit(oldp+701,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7));
        bufp->chgBit(oldp+702,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15));
        bufp->chgBit(oldp+703,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16));
        bufp->chgBit(oldp+704,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17));
        bufp->chgBit(oldp+705,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18));
        bufp->chgBit(oldp+706,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19));
        bufp->chgBit(oldp+707,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20));
        bufp->chgBit(oldp+708,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21));
        bufp->chgBit(oldp+709,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22));
        bufp->chgBit(oldp+710,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23));
        bufp->chgBit(oldp+711,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24));
        bufp->chgBit(oldp+712,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25));
        bufp->chgBit(oldp+713,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26));
        bufp->chgBit(oldp+714,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27));
        bufp->chgBit(oldp+715,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28));
        bufp->chgBit(oldp+716,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29));
        bufp->chgBit(oldp+717,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30));
        bufp->chgBit(oldp+718,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31));
        bufp->chgCData(oldp+719,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))),2);
        bufp->chgCData(oldp+720,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0),2);
        bufp->chgCData(oldp+721,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1))),2);
        bufp->chgCData(oldp+722,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1),2);
        bufp->chgCData(oldp+723,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2))),2);
        bufp->chgCData(oldp+724,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2),2);
        bufp->chgCData(oldp+725,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3))),2);
        bufp->chgCData(oldp+726,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3),2);
        bufp->chgCData(oldp+727,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4))),2);
        bufp->chgCData(oldp+728,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4),2);
        bufp->chgCData(oldp+729,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5))),2);
        bufp->chgCData(oldp+730,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5),2);
        bufp->chgCData(oldp+731,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6))),2);
        bufp->chgCData(oldp+732,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6),2);
        bufp->chgCData(oldp+733,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7))),2);
        bufp->chgCData(oldp+734,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7),2);
        bufp->chgCData(oldp+735,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))),2);
        bufp->chgCData(oldp+736,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))),2);
        bufp->chgCData(oldp+737,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))),2);
        bufp->chgCData(oldp+738,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))),2);
        bufp->chgCData(oldp+739,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))),2);
        bufp->chgCData(oldp+740,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))),2);
        bufp->chgCData(oldp+741,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))),2);
        bufp->chgCData(oldp+742,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))),2);
        bufp->chgCData(oldp+743,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))),2);
        bufp->chgCData(oldp+744,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))),2);
        bufp->chgCData(oldp+745,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))),2);
        bufp->chgCData(oldp+746,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))),2);
        bufp->chgCData(oldp+747,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))),2);
        bufp->chgCData(oldp+748,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))),2);
        bufp->chgCData(oldp+749,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))),2);
        bufp->chgCData(oldp+750,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))),2);
        bufp->chgCData(oldp+751,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))),2);
        bufp->chgCData(oldp+752,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))),2);
        bufp->chgCData(oldp+753,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))),2);
        bufp->chgCData(oldp+754,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))),2);
        bufp->chgCData(oldp+755,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))),2);
        bufp->chgCData(oldp+756,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))),2);
        bufp->chgCData(oldp+757,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))),2);
        bufp->chgCData(oldp+758,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))),2);
        bufp->chgCData(oldp+759,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))),2);
        bufp->chgCData(oldp+760,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))),2);
        bufp->chgCData(oldp+761,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))),2);
        bufp->chgCData(oldp+762,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))),2);
        bufp->chgCData(oldp+763,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))),2);
        bufp->chgCData(oldp+764,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))),2);
        bufp->chgCData(oldp+765,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))),2);
        bufp->chgCData(oldp+766,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))),2);
        bufp->chgCData(oldp+767,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24))),2);
        bufp->chgCData(oldp+768,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24))),2);
        bufp->chgCData(oldp+769,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25))),2);
        bufp->chgCData(oldp+770,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25))),2);
        bufp->chgCData(oldp+771,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26))),2);
        bufp->chgCData(oldp+772,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26))),2);
        bufp->chgCData(oldp+773,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27))),2);
        bufp->chgCData(oldp+774,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27))),2);
        bufp->chgCData(oldp+775,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28))),2);
        bufp->chgCData(oldp+776,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28))),2);
        bufp->chgCData(oldp+777,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29))),2);
        bufp->chgCData(oldp+778,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29))),2);
        bufp->chgCData(oldp+779,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30))),2);
        bufp->chgCData(oldp+780,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30))),2);
        bufp->chgCData(oldp+781,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31))),2);
        bufp->chgCData(oldp+782,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31))),2);
        bufp->chgBit(oldp+783,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0));
        bufp->chgBit(oldp+784,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16));
        bufp->chgBit(oldp+785,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1));
        bufp->chgBit(oldp+786,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17));
        bufp->chgBit(oldp+787,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2));
        bufp->chgBit(oldp+788,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18));
        bufp->chgBit(oldp+789,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3));
        bufp->chgBit(oldp+790,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19));
        bufp->chgBit(oldp+791,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4));
        bufp->chgBit(oldp+792,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20));
        bufp->chgBit(oldp+793,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5));
        bufp->chgBit(oldp+794,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21));
        bufp->chgBit(oldp+795,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6));
        bufp->chgBit(oldp+796,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22));
        bufp->chgBit(oldp+797,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7));
        bufp->chgBit(oldp+798,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23));
        bufp->chgBit(oldp+799,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8));
        bufp->chgBit(oldp+800,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24));
        bufp->chgBit(oldp+801,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9));
        bufp->chgBit(oldp+802,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25));
        bufp->chgBit(oldp+803,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10));
        bufp->chgBit(oldp+804,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26));
        bufp->chgBit(oldp+805,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11));
        bufp->chgBit(oldp+806,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27));
        bufp->chgBit(oldp+807,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12));
        bufp->chgBit(oldp+808,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28));
        bufp->chgBit(oldp+809,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13));
        bufp->chgBit(oldp+810,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29));
        bufp->chgBit(oldp+811,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14));
        bufp->chgBit(oldp+812,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30));
        bufp->chgBit(oldp+813,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15));
        bufp->chgBit(oldp+814,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31));
        bufp->chgCData(oldp+815,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))),2);
        bufp->chgCData(oldp+816,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0),2);
        bufp->chgCData(oldp+817,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1))),2);
        bufp->chgCData(oldp+818,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1),2);
        bufp->chgCData(oldp+819,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2))),2);
        bufp->chgCData(oldp+820,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2),2);
        bufp->chgCData(oldp+821,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3))),2);
        bufp->chgCData(oldp+822,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3),2);
        bufp->chgCData(oldp+823,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4))),2);
        bufp->chgCData(oldp+824,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4),2);
        bufp->chgCData(oldp+825,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5))),2);
        bufp->chgCData(oldp+826,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5),2);
        bufp->chgCData(oldp+827,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6))),2);
        bufp->chgCData(oldp+828,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6),2);
        bufp->chgCData(oldp+829,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7))),2);
        bufp->chgCData(oldp+830,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7),2);
        bufp->chgCData(oldp+831,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8))),2);
        bufp->chgCData(oldp+832,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8),2);
        bufp->chgCData(oldp+833,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9))),2);
        bufp->chgCData(oldp+834,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9),2);
        bufp->chgCData(oldp+835,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10))),2);
        bufp->chgCData(oldp+836,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10),2);
        bufp->chgCData(oldp+837,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11))),2);
        bufp->chgCData(oldp+838,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11),2);
        bufp->chgCData(oldp+839,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12))),2);
        bufp->chgCData(oldp+840,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12),2);
        bufp->chgCData(oldp+841,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13))),2);
        bufp->chgCData(oldp+842,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13),2);
        bufp->chgCData(oldp+843,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14))),2);
        bufp->chgCData(oldp+844,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14),2);
        bufp->chgCData(oldp+845,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15))),2);
        bufp->chgCData(oldp+846,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15),2);
        bufp->chgCData(oldp+847,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))),2);
        bufp->chgCData(oldp+848,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))),2);
        bufp->chgCData(oldp+849,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))),2);
        bufp->chgCData(oldp+850,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))),2);
        bufp->chgCData(oldp+851,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))),2);
        bufp->chgCData(oldp+852,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))),2);
        bufp->chgCData(oldp+853,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))),2);
        bufp->chgCData(oldp+854,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))),2);
        bufp->chgCData(oldp+855,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))),2);
        bufp->chgCData(oldp+856,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))),2);
        bufp->chgCData(oldp+857,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))),2);
        bufp->chgCData(oldp+858,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))),2);
        bufp->chgCData(oldp+859,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))),2);
        bufp->chgCData(oldp+860,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))),2);
        bufp->chgCData(oldp+861,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))),2);
        bufp->chgCData(oldp+862,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))),2);
        bufp->chgCData(oldp+863,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))),2);
        bufp->chgCData(oldp+864,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))),2);
        bufp->chgCData(oldp+865,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))),2);
        bufp->chgCData(oldp+866,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))),2);
        bufp->chgCData(oldp+867,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))),2);
        bufp->chgCData(oldp+868,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))),2);
        bufp->chgCData(oldp+869,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))),2);
        bufp->chgCData(oldp+870,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))),2);
        bufp->chgCData(oldp+871,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))),2);
        bufp->chgCData(oldp+872,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))),2);
        bufp->chgCData(oldp+873,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))),2);
        bufp->chgCData(oldp+874,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))),2);
        bufp->chgCData(oldp+875,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))),2);
        bufp->chgCData(oldp+876,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))),2);
        bufp->chgCData(oldp+877,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))),2);
        bufp->chgCData(oldp+878,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))),2);
        bufp->chgBit(oldp+879,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL));
        bufp->chgBit(oldp+880,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR));
        bufp->chgBit(oldp+881,((1U & (~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B))));
        bufp->chgCData(oldp+882,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                   << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                              << 6U) 
                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))))))))),8);
        bufp->chgSData(oldp+883,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))))))))))))))))),16);
        bufp->chgCData(oldp+884,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                   << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                              << 6U) 
                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))))))))),8);
        bufp->chgSData(oldp+885,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))))))))))))))))),16);
        bufp->chgBit(oldp+886,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL));
        bufp->chgBit(oldp+887,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR));
        bufp->chgBit(oldp+888,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 1U)))));
        bufp->chgCData(oldp+889,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                   << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                              << 6U) 
                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))))))))),8);
        bufp->chgSData(oldp+890,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))))))))))))))))),16);
        bufp->chgCData(oldp+891,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                   << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                              << 6U) 
                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))))))))),8);
        bufp->chgSData(oldp+892,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))))))))))))))))),16);
        bufp->chgBit(oldp+893,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL));
        bufp->chgBit(oldp+894,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR));
        bufp->chgBit(oldp+895,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 2U)))));
        bufp->chgCData(oldp+896,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                   << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                              << 6U) 
                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))))))))),8);
        bufp->chgSData(oldp+897,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))))))))))))))))),16);
        bufp->chgCData(oldp+898,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                   << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                              << 6U) 
                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))))))))),8);
        bufp->chgSData(oldp+899,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))))))))))))))))),16);
        bufp->chgBit(oldp+900,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL));
        bufp->chgBit(oldp+901,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR));
        bufp->chgBit(oldp+902,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 3U)))));
        bufp->chgCData(oldp+903,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                   << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                              << 6U) 
                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))))))),8);
        bufp->chgSData(oldp+904,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))))))))))))))),16);
        bufp->chgCData(oldp+905,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                   << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                              << 6U) 
                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))),8);
        bufp->chgSData(oldp+906,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))))))))),16);
        bufp->chgBit(oldp+907,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL));
        bufp->chgBit(oldp+908,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR));
        bufp->chgBit(oldp+909,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 4U)))));
        bufp->chgBit(oldp+910,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))));
        bufp->chgBit(oldp+911,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)))));
        bufp->chgBit(oldp+912,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)))));
        bufp->chgBit(oldp+913,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)))));
        bufp->chgBit(oldp+914,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)))));
        bufp->chgBit(oldp+915,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)))));
        bufp->chgBit(oldp+916,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)))));
        bufp->chgBit(oldp+917,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)))));
        bufp->chgBit(oldp+918,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)))));
        bufp->chgBit(oldp+919,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)))));
        bufp->chgBit(oldp+920,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)))));
        bufp->chgBit(oldp+921,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)))));
        bufp->chgBit(oldp+922,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)))));
        bufp->chgBit(oldp+923,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)))));
        bufp->chgBit(oldp+924,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)))));
        bufp->chgBit(oldp+925,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)))));
        bufp->chgBit(oldp+926,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))));
        bufp->chgBit(oldp+927,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1))))));
        bufp->chgBit(oldp+928,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2))))));
        bufp->chgBit(oldp+929,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3))))));
        bufp->chgBit(oldp+930,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4))))));
        bufp->chgBit(oldp+931,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5))))));
        bufp->chgBit(oldp+932,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6))))));
        bufp->chgBit(oldp+933,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7))))));
        bufp->chgBit(oldp+934,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8))))));
        bufp->chgBit(oldp+935,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9))))));
        bufp->chgBit(oldp+936,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10))))));
        bufp->chgBit(oldp+937,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11))))));
        bufp->chgBit(oldp+938,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12))))));
        bufp->chgBit(oldp+939,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13))))));
        bufp->chgBit(oldp+940,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14))))));
        bufp->chgBit(oldp+941,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15))))));
        bufp->chgCData(oldp+942,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))) 
                                   << 7U) | (((((~ 
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
                                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))),8);
        bufp->chgSData(oldp+943,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))) 
                                   << 0xfU) | (((((~ 
                                                   (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))) 
                                                << 0xeU) 
                                               | (((((~ 
                                                      (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))) 
                                                   << 0xdU) 
                                                  | (((((~ 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))) 
                                                      << 0xcU) 
                                                     | (((((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
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
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))))))))))),16);
        bufp->chgCData(oldp+944,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                    | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                   << 7U) | (((((~ 
                                                 (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                  >> 4U)) 
                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                               | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                  | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                              << 6U) 
                                             | (((((~ 
                                                    (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                     >> 4U)) 
                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                  | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                     | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                 << 5U) 
                                                | (((((~ 
                                                       (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                     | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                        | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                    << 4U) 
                                                   | (((((~ 
                                                          (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                           >> 4U)) 
                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                        | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                       << 3U) 
                                                      | (((((~ 
                                                             (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                              >> 4U)) 
                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                           | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                          << 2U) 
                                                         | (((((~ 
                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                 >> 4U)) 
                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                              | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                             << 1U) 
                                                            | (((~ 
                                                                 (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                  >> 4U)) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                               | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                  | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))),8);
        bufp->chgSData(oldp+945,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
                                    | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))) 
                                   << 0xfU) | (((((~ 
                                                   (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                                                 | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))) 
                                                << 0xeU) 
                                               | (((((~ 
                                                      (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))) 
                                                   << 0xdU) 
                                                  | (((((~ 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                                       | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))) 
                                                      << 0xcU) 
                                                     | (((((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                             >> 4U)) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                                          | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))) 
                                                         << 0xbU) 
                                                        | (((((~ 
                                                               (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                >> 4U)) 
                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                                             | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))) 
                                                            << 0xaU) 
                                                           | (((((~ 
                                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                   >> 4U)) 
                                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))) 
                                                               << 9U) 
                                                              | (((((~ 
                                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                      >> 4U)) 
                                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                                                   | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))) 
                                                                  << 8U) 
                                                                 | (((((~ 
                                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                         >> 4U)) 
                                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                                                      | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                                                     << 7U) 
                                                                    | (((((~ 
                                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                            >> 4U)) 
                                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                                                         | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                                                        << 6U) 
                                                                       | (((((~ 
                                                                              (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                               >> 4U)) 
                                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                                            | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                                           << 5U) 
                                                                          | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                                               | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                                              << 4U) 
                                                                             | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                                                << 3U) 
                                                                                | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                                                << 2U) 
                                                                                | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                                                << 1U) 
                                                                                | (((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))))))))))),16);
        bufp->chgIData(oldp+946,((~ vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)),32);
        bufp->chgBit(oldp+947,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 2U)))));
        bufp->chgBit(oldp+948,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 5U)))));
        bufp->chgBit(oldp+949,((1U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)));
        bufp->chgBit(oldp+950,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 1U))));
        bufp->chgBit(oldp+951,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 3U)))));
        bufp->chgBit(oldp+952,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 4U)))));
        bufp->chgBit(oldp+953,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 6U)))));
        bufp->chgBit(oldp+954,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+955,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+956,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+957,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 2U))));
        bufp->chgBit(oldp+958,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 3U))));
        bufp->chgBit(oldp+959,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 4U))));
        bufp->chgBit(oldp+960,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+961,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+962,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+963,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+964,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+965,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1fU)))));
        bufp->chgCData(oldp+966,(((0x40U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0xeU)) 
                                            << 6U)) 
                                  | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0))),7);
        bufp->chgBit(oldp+967,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1eU)))));
        bufp->chgCData(oldp+968,(((0x20U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x1aU)) 
                                            << 5U)) 
                                  | ((0x10U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x1bU)) 
                                               << 4U)) 
                                     | ((8U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x1cU)) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0x1dU)) 
                                                  << 2U)) 
                                           | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))),6);
        bufp->chgBit(oldp+969,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 5U))));
        bufp->chgBit(oldp+970,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 6U))));
        bufp->chgBit(oldp+971,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 7U)))));
        bufp->chgBit(oldp+972,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 8U)))));
        bufp->chgBit(oldp+973,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 9U)))));
        bufp->chgBit(oldp+974,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+975,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+976,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+977,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+978,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+979,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+980,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+981,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+982,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+983,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+984,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+985,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x18U)))));
        bufp->chgCData(oldp+986,(((0x80U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x18U)) 
                                            << 7U)) 
                                  | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0))),8);
        bufp->chgSData(oldp+987,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x10U)) 
                                              << 0xfU)) 
                                  | ((0x4000U & ((~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x11U)) 
                                                 << 0xeU)) 
                                     | ((0x2000U & 
                                         ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x12U)) 
                                          << 0xdU)) 
                                        | ((0x1000U 
                                            & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x13U)) 
                                               << 0xcU)) 
                                           | ((0x800U 
                                               & ((~ 
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0x14U)) 
                                                  << 0xbU)) 
                                              | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0))))))),16);
        bufp->chgCData(oldp+988,(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9),8);
        bufp->chgBit(oldp+989,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xcU))));
        bufp->chgBit(oldp+990,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xdU))));
        bufp->chgBit(oldp+991,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xeU))));
        bufp->chgCData(oldp+992,(((0x40U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 8U)) 
                                  | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0))),7);
        bufp->chgBit(oldp+993,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x14U))));
        bufp->chgSData(oldp+994,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x10U)) 
                                              << 0xfU)) 
                                  | ((0x4000U & ((~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x11U)) 
                                                 << 0xeU)) 
                                     | ((0x2000U & 
                                         ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x12U)) 
                                          << 0xdU)) 
                                        | ((0x1000U 
                                            & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x13U)) 
                                               << 0xcU)) 
                                           | ((0x800U 
                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 9U)) 
                                              | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0))))))),16);
        bufp->chgBit(oldp+995,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x15U))));
        bufp->chgBit(oldp+996,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+997,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1dU))));
        bufp->chgCData(oldp+998,(((0x80U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x18U)) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x19U)) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0x1aU)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x1bU)) 
                                             << 4U)) 
                                           | ((8U & 
                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x19U)) 
                                              | ((4U 
                                                  & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x1bU)) 
                                                 | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))))),8);
        bufp->chgSData(oldp+999,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x10U)) 
                                              << 0xfU)) 
                                  | ((0x4000U & ((~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x11U)) 
                                                 << 0xeU)) 
                                     | ((0x2000U & 
                                         ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x12U)) 
                                          << 0xdU)) 
                                        | ((0x1000U 
                                            & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
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
                                                                         | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))))))))))))),16);
        bufp->chgBit(oldp+1000,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0x1eU))));
        bufp->chgCData(oldp+1001,((((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7))) 
                                    << 4U) | (((IData)(
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
                                                       == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62)))))),5);
        bufp->chgSData(oldp+1002,((((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36))) 
                                    << 0xaU) | (((IData)(
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
                                                                           == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62)))))))))))),11);
        bufp->chgCData(oldp+1003,((((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                    << 4U) | (((IData)(
                                                       (7U 
                                                        == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23))) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2))))),5);
        bufp->chgIData(oldp+1004,((((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36))) 
                                    << 0x15U) | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34))) 
                                                  << 0x14U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32))) 
                                                     << 0x13U) 
                                                    | (((IData)(
                                                                (0xffffffffU 
                                                                 == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_34)) 
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
                                                                                == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62))))))))))))))))))),22);
        bufp->chgCData(oldp+1005,(vlSelf->TOP__DOT__ID__DOT__Type),3);
        bufp->chgBit(oldp+1006,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen));
        bufp->chgIData(oldp+1007,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0),32);
        bufp->chgIData(oldp+1008,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1),32);
        bufp->chgIData(oldp+1009,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2),32);
        bufp->chgIData(oldp+1010,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3),32);
        bufp->chgIData(oldp+1011,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4),32);
        bufp->chgIData(oldp+1012,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5),32);
        bufp->chgIData(oldp+1013,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6),32);
        bufp->chgIData(oldp+1014,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7),32);
        bufp->chgIData(oldp+1015,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8),32);
        bufp->chgIData(oldp+1016,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9),32);
        bufp->chgIData(oldp+1017,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10),32);
        bufp->chgIData(oldp+1018,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11),32);
        bufp->chgIData(oldp+1019,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12),32);
        bufp->chgIData(oldp+1020,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13),32);
        bufp->chgIData(oldp+1021,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14),32);
        bufp->chgIData(oldp+1022,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15),32);
        bufp->chgIData(oldp+1023,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16),32);
        bufp->chgIData(oldp+1024,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17),32);
        bufp->chgIData(oldp+1025,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18),32);
        bufp->chgIData(oldp+1026,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19),32);
        bufp->chgIData(oldp+1027,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20),32);
        bufp->chgIData(oldp+1028,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21),32);
        bufp->chgIData(oldp+1029,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22),32);
        bufp->chgIData(oldp+1030,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23),32);
        bufp->chgIData(oldp+1031,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24),32);
        bufp->chgIData(oldp+1032,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25),32);
        bufp->chgIData(oldp+1033,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26),32);
        bufp->chgIData(oldp+1034,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27),32);
        bufp->chgIData(oldp+1035,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28),32);
        bufp->chgIData(oldp+1036,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29),32);
        bufp->chgIData(oldp+1037,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30),32);
        bufp->chgIData(oldp+1038,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31),32);
        bufp->chgBit(oldp+1039,(vlSelf->TOP__DOT__IF__DOT__brFail_io_cond));
        bufp->chgIData(oldp+1040,(vlSelf->TOP__DOT__IF__DOT__brBuffer),32);
        bufp->chgBit(oldp+1041,(vlSelf->TOP__DOT__IF__DOT__brBufferValid));
        bufp->chgBit(oldp+1042,(vlSelf->TOP__DOT__IF__DOT__brEnable));
        bufp->chgIData(oldp+1043,(((IData)(4U) + vlSelf->TOP__DOT__IF__DOT__pcReg)),32);
        bufp->chgIData(oldp+1044,(((IData)(vlSelf->TOP__DOT__IF__DOT__brEnable)
                                    ? vlSelf->TOP__DOT__IF_io_pcBr
                                    : ((IData)(4U) 
                                       + vlSelf->TOP__DOT__IF__DOT__pcReg))),32);
        bufp->chgBit(oldp+1045,(vlSelf->TOP__DOT__IF__DOT__rFireReg));
        bufp->chgIData(oldp+1046,(vlSelf->TOP__DOT__IF__DOT__rdataReg),32);
        bufp->chgBit(oldp+1047,(vlSelf->TOP__DOT__IF__DOT__brFail__DOT__record));
        bufp->chgCData(oldp+1048,((3U & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))),2);
        bufp->chgIData(oldp+1049,(vlSelf->TOP__DOT__MEM__DOT__shiftWdata0),32);
        bufp->chgBit(oldp+1050,(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg));
        bufp->chgBit(oldp+1051,(vlSelf->TOP__DOT__MEM__DOT__awFireReg));
        bufp->chgBit(oldp+1052,(vlSelf->TOP__DOT__MEM__DOT__wFireReg));
        bufp->chgBit(oldp+1053,(vlSelf->TOP__DOT__MEM__DOT__arAssert));
        bufp->chgBit(oldp+1054,(vlSelf->TOP__DOT__MEM__DOT__awAssert));
        bufp->chgBit(oldp+1055,(vlSelf->TOP__DOT__MEM__DOT__wAssert));
        bufp->chgBit(oldp+1056,(((IData)(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg) 
                                 | (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFire_T))));
        bufp->chgBit(oldp+1057,(((IData)(vlSelf->TOP__DOT__MEM__DOT__awFireReg) 
                                 | (IData)(vlSelf->TOP__DOT__MEM__DOT___awFire_T))));
        bufp->chgBit(oldp+1058,(((IData)(vlSelf->TOP__DOT__MEM__DOT__wFireReg) 
                                 | (IData)(vlSelf->TOP__DOT__MEM__DOT___wFire_T))));
        bufp->chgCData(oldp+1059,(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput),4);
        bufp->chgCData(oldp+1060,((0xfU & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))),4);
        bufp->chgBit(oldp+1061,((1U & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))));
        bufp->chgBit(oldp+1062,((1U & (~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1063,((1U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)));
        bufp->chgBit(oldp+1064,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 1U))));
        bufp->chgBit(oldp+1065,((1U & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))));
        bufp->chgBit(oldp+1066,((1U & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                       >> 1U))));
        bufp->chgCData(oldp+1067,(((2U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                            & (~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                  >> 1U))) 
                                           << 1U) | 
                                          ((((~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                 >> 1U)) 
                                             & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                            << 1U) 
                                           | (0xfffffffeU 
                                              & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))))) 
                                   | (IData)((0U == 
                                              (3U & (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))))),2);
        bufp->chgCData(oldp+1068,((((IData)((0U != (IData)(vlSelf->TOP__DOT__MEM__DOT___io_w_bits_wstrb_orMatrixOutputs_T_5))) 
                                    << 1U) | (0U != (IData)(vlSelf->TOP__DOT__MEM__DOT___io_w_bits_wstrb_orMatrixOutputs_T_3)))),2);
        bufp->chgIData(oldp+1069,(((3U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                    ? 0U : ((2U == 
                                             (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                             ? 0xffffffffU
                                             : vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWdata))),32);
        bufp->chgIData(oldp+1070,(((2U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3))
                                    ? vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWdata
                                    : 0xffffffffU)),32);
        bufp->chgIData(oldp+1071,(((0x343U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                    ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvalReg
                                    : ((0x342U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                        ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mcauseReg
                                        : ((0x341U 
                                            == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                            ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mepcReg
                                            : ((0x305U 
                                                == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecReg
                                                : (
                                                   (0x300U 
                                                    == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                    ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusReg
                                                    : 0U)))))),32);
        bufp->chgIData(oldp+1072,(((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall)
                                    ? 0xbU : 0U)),32);
        bufp->chgIData(oldp+1073,(vlSelf->TOP__DOT__WB__DOT__rdataShift0),32);
        bufp->chgIData(oldp+1074,(vlSelf->TOP__DOT__WB__DOT__rdataShift1),32);
        bufp->chgBit(oldp+1075,(vlSelf->TOP__DOT__WB__DOT__rdataSignal));
        bufp->chgIData(oldp+1076,(((1U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
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
                                        : vlSelf->TOP__DOT__WB__DOT__rdataShift1))),32);
        bufp->chgBit(oldp+1077,(vlSelf->TOP__DOT__WB__DOT__rDataFire));
        bufp->chgBit(oldp+1078,(vlSelf->TOP__DOT__WB__DOT__bFire));
        bufp->chgBit(oldp+1079,(vlSelf->TOP__DOT__WB__DOT__rFireReg));
        bufp->chgBit(oldp+1080,(vlSelf->TOP__DOT__WB__DOT__bFireReg));
        bufp->chgIData(oldp+1081,(vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusReg),32);
        bufp->chgIData(oldp+1082,(vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mcauseReg),32);
        bufp->chgIData(oldp+1083,(vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvalReg),32);
        bufp->chgIData(oldp+1084,((vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T 
                                   | (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T_1 
                                      & vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusReg))),32);
        bufp->chgIData(oldp+1085,(vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecWdata),32);
        bufp->chgBit(oldp+1086,(((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                 & (0x300U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr)))));
        bufp->chgBit(oldp+1087,(((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                 & (0x305U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr)))));
        bufp->chgBit(oldp+1088,((((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                  & (0x341U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))) 
                                 | (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall))));
        bufp->chgBit(oldp+1089,((((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                  & (0x342U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))) 
                                 | (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall))));
        bufp->chgBit(oldp+1090,(((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
                                 & (0x343U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr)))));
        bufp->chgCData(oldp+1091,(vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg),5);
        bufp->chgBit(oldp+1092,(((IData)(vlSelf->TOP__DOT__xbar_io_slave_2_r_ready) 
                                 & (0U == (IData)(vlSelf->TOP__DOT__clint__DOT__rCount)))));
        bufp->chgBit(oldp+1093,((1U & (~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isEmpty)))));
        bufp->chgIData(oldp+1094,(vlSelf->TOP__DOT__clint__DOT__arFifo_io_deq_bits_addr),32);
        bufp->chgQData(oldp+1095,(vlSelf->TOP__DOT__clint__DOT__mtime),64);
        bufp->chgCData(oldp+1097,(vlSelf->TOP__DOT__clint__DOT__rCount),5);
        bufp->chgBit(oldp+1098,(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1099,(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1100,(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull));
        bufp->chgBit(oldp+1101,(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isEmpty));
        bufp->chgBit(oldp+1102,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1103,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr)))));
        bufp->chgCData(oldp+1104,(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_id),3);
        bufp->chgIData(oldp+1105,(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_addr),32);
        bufp->chgCData(oldp+1106,(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_id),3);
        bufp->chgIData(oldp+1107,(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_addr),32);
        bufp->chgBit(oldp+1108,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1109,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg))))));
        bufp->chgCData(oldp+1110,(vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg),5);
        bufp->chgCData(oldp+1111,(vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg),5);
        bufp->chgCData(oldp+1112,(vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg),5);
        bufp->chgCData(oldp+1113,(vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg),5);
        bufp->chgCData(oldp+1114,(vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg),5);
        bufp->chgIData(oldp+1115,(((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr)
                                    ? vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_addr
                                    : vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_addr)),32);
        bufp->chgIData(oldp+1116,(((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr)
                                    ? vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_addr
                                    : vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_addr)),32);
        bufp->chgIData(oldp+1117,(((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr)
                                    ? vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_data
                                    : vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_data)),32);
        bufp->chgCData(oldp+1118,(((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr)
                                    ? (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_strb)
                                    : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_strb))),4);
        bufp->chgBit(oldp+1119,((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull)))));
        bufp->chgBit(oldp+1120,(((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_r_ready) 
                                 & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rCount)))));
        bufp->chgBit(oldp+1121,((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isEmpty)))));
        bufp->chgBit(oldp+1122,((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull)))));
        bufp->chgBit(oldp+1123,(((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_aw_valid) 
                                 & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awCount)))));
        bufp->chgBit(oldp+1124,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo_io_deq_ready));
        bufp->chgBit(oldp+1125,((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isEmpty)))));
        bufp->chgCData(oldp+1126,(((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr)
                                    ? (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_id)
                                    : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_id))),3);
        bufp->chgBit(oldp+1127,((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull)))));
        bufp->chgBit(oldp+1128,(((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_w_valid) 
                                 & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wCount)))));
        bufp->chgBit(oldp+1129,((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isEmpty)))));
        bufp->chgCData(oldp+1130,(vlSelf->TOP__DOT__ramWrapper__DOT__arCount),5);
        bufp->chgCData(oldp+1131,(vlSelf->TOP__DOT__ramWrapper__DOT__rCount),5);
        bufp->chgCData(oldp+1132,(vlSelf->TOP__DOT__ramWrapper__DOT__awCount),5);
        bufp->chgCData(oldp+1133,(vlSelf->TOP__DOT__ramWrapper__DOT__wCount),5);
        bufp->chgCData(oldp+1134,(vlSelf->TOP__DOT__ramWrapper__DOT__bCount),5);
        bufp->chgBit(oldp+1135,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1136,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1137,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull));
        bufp->chgBit(oldp+1138,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isEmpty));
        bufp->chgBit(oldp+1139,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1140,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr)))));
        bufp->chgCData(oldp+1141,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_id),3);
        bufp->chgIData(oldp+1142,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_addr),32);
        bufp->chgCData(oldp+1143,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_id),3);
        bufp->chgIData(oldp+1144,(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_addr),32);
        bufp->chgBit(oldp+1145,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1146,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1147,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1148,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1149,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull));
        bufp->chgBit(oldp+1150,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isEmpty));
        bufp->chgBit(oldp+1151,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1152,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1153,((((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T) 
                                  & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T_1)) 
                                     & ((1U & ((IData)(1U) 
                                               + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr))) 
                                        == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr)))) 
                                 | ((~ ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T_1) 
                                        & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull))) 
                                    & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull)))));
        bufp->chgCData(oldp+1154,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_id),3);
        bufp->chgIData(oldp+1155,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_addr),32);
        bufp->chgCData(oldp+1156,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_id),3);
        bufp->chgIData(oldp+1157,(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_addr),32);
        bufp->chgBit(oldp+1158,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1159,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1160,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1161,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1162,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1163,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1164,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1165,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1166,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull));
        bufp->chgBit(oldp+1167,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isEmpty));
        bufp->chgBit(oldp+1168,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1169,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1170,((((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T) 
                                  & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T_1)) 
                                     & ((1U & ((IData)(1U) 
                                               + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr))) 
                                        == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr)))) 
                                 | ((~ ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T_1) 
                                        & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull))) 
                                    & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull)))));
        bufp->chgIData(oldp+1171,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_data),32);
        bufp->chgCData(oldp+1172,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_strb),4);
        bufp->chgIData(oldp+1173,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_data),32);
        bufp->chgCData(oldp+1174,(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_strb),4);
        bufp->chgBit(oldp+1175,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1176,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg))))));
        bufp->chgCData(oldp+1177,(vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg),5);
        bufp->chgCData(oldp+1178,(vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg),5);
        bufp->chgCData(oldp+1179,(vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg),5);
        bufp->chgCData(oldp+1180,(vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg),5);
        bufp->chgBit(oldp+1181,(((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_r_ready) 
                                 & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__rCount)))));
        bufp->chgBit(oldp+1182,((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isEmpty)))));
        bufp->chgIData(oldp+1183,(((IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr)
                                    ? vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_addr
                                    : vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_addr)),32);
        bufp->chgBit(oldp+1184,((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull)))));
        bufp->chgBit(oldp+1185,(((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_aw_valid) 
                                 & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__awCount)))));
        bufp->chgBit(oldp+1186,(vlSelf->TOP__DOT__uart__DOT__awFifo_io_deq_ready));
        bufp->chgBit(oldp+1187,((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty)))));
        bufp->chgCData(oldp+1188,(((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr)
                                    ? (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_id)
                                    : (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_id))),3);
        bufp->chgIData(oldp+1189,(((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr)
                                    ? vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_addr
                                    : vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_addr)),32);
        bufp->chgBit(oldp+1190,((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull)))));
        bufp->chgBit(oldp+1191,(((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_w_valid) 
                                 & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__wCount)))));
        bufp->chgBit(oldp+1192,((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty)))));
        bufp->chgIData(oldp+1193,(((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr)
                                    ? vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_data
                                    : vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_data)),32);
        bufp->chgCData(oldp+1194,(((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr)
                                    ? (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_strb)
                                    : (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_strb))),4);
        bufp->chgCData(oldp+1195,(vlSelf->TOP__DOT__uart__DOT__rCount),5);
        bufp->chgCData(oldp+1196,(vlSelf->TOP__DOT__uart__DOT__awCount),5);
        bufp->chgCData(oldp+1197,(vlSelf->TOP__DOT__uart__DOT__wCount),5);
        bufp->chgCData(oldp+1198,(vlSelf->TOP__DOT__uart__DOT__bCount),5);
        bufp->chgBit(oldp+1199,(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1200,(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1201,(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull));
        bufp->chgBit(oldp+1202,(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isEmpty));
        bufp->chgBit(oldp+1203,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1204,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr)))));
        bufp->chgCData(oldp+1205,(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_id),3);
        bufp->chgIData(oldp+1206,(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_addr),32);
        bufp->chgCData(oldp+1207,(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_id),3);
        bufp->chgIData(oldp+1208,(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_addr),32);
        bufp->chgBit(oldp+1209,(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1210,(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1211,(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull));
        bufp->chgBit(oldp+1212,(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty));
        bufp->chgBit(oldp+1213,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1214,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1215,((((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T) 
                                  & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1)) 
                                     & ((1U & ((IData)(1U) 
                                               + (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr))) 
                                        == (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr)))) 
                                 | ((~ ((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1) 
                                        & (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull))) 
                                    & (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull)))));
        bufp->chgCData(oldp+1216,(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_id),3);
        bufp->chgIData(oldp+1217,(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_addr),32);
        bufp->chgCData(oldp+1218,(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_id),3);
        bufp->chgIData(oldp+1219,(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_addr),32);
        bufp->chgBit(oldp+1220,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1221,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1222,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1223,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1224,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1225,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1226,(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1227,(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1228,(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull));
        bufp->chgBit(oldp+1229,(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty));
        bufp->chgBit(oldp+1230,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1231,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1232,((((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T) 
                                  & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T_1)) 
                                     & ((1U & ((IData)(1U) 
                                               + (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr))) 
                                        == (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr)))) 
                                 | ((~ ((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T_1) 
                                        & (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull))) 
                                    & (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull)))));
        bufp->chgIData(oldp+1233,(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_data),32);
        bufp->chgCData(oldp+1234,(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_strb),4);
        bufp->chgIData(oldp+1235,(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_data),32);
        bufp->chgCData(oldp+1236,(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_strb),4);
        bufp->chgBit(oldp+1237,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg)))))));
        bufp->chgBit(oldp+1238,((1U & VL_REDXOR_8((0x1dU 
                                                   & (IData)(vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg))))));
        bufp->chgBit(oldp+1239,((1U & (~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)))));
        bufp->chgCData(oldp+1240,(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_enq_bits_slaveNum),3);
        bufp->chgBit(oldp+1241,(((IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_ready) 
                                 & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid))));
        bufp->chgBit(oldp+1242,((1U & (~ ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)) 
                                          & ((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr) 
                                             == (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr)))))));
        bufp->chgCData(oldp+1243,(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum),3);
        bufp->chgBit(oldp+1244,((1U & (~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)))));
        bufp->chgBit(oldp+1245,(vlSelf->TOP__DOT__MEM__DOT___awFire_T));
        bufp->chgCData(oldp+1246,(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_enq_bits_slaveNum),3);
        bufp->chgBit(oldp+1247,((1U & (~ ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                          & ((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr) 
                                             == (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr)))))));
        bufp->chgCData(oldp+1248,(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum),3);
        bufp->chgBit(oldp+1249,(vlSelf->TOP__DOT__xbar__DOT__awFireReg));
        bufp->chgIData(oldp+1250,((~ vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr)),32);
        bufp->chgBit(oldp+1251,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1252,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1253,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1254,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1255,((vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1256,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 5U)))));
        bufp->chgBit(oldp+1257,((1U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                       >> 6U))));
        bufp->chgBit(oldp+1258,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 7U)))));
        bufp->chgBit(oldp+1259,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 8U)))));
        bufp->chgBit(oldp+1260,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 9U)))));
        bufp->chgBit(oldp+1261,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1262,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0xbU)))));
        bufp->chgBit(oldp+1263,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1264,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1265,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1266,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+1267,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+1268,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1269,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1270,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1271,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1272,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1273,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1274,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1275,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1276,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1277,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1278,((1U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+1279,(((0x20U & ((~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & ((~ 
                                                 (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                  >> 0x1bU)) 
                                                << 4U)) 
                                      | ((8U & ((~ 
                                                 (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                  >> 0x1cU)) 
                                                << 3U)) 
                                         | ((4U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                   >> 0x1bU)) 
                                            | (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h19dcd5d3__0)))))),6);
        bufp->chgSData(oldp+1280,(vlSelf->TOP__DOT__xbar__DOT__arSel_lo_1),13);
        bufp->chgCData(oldp+1281,(((0x40U & ((~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                 >> 0xcU)) 
                                             << 6U)) 
                                   | ((0x20U & ((~ 
                                                 (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                  >> 0xdU)) 
                                                << 5U)) 
                                      | ((0x10U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0xeU)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0xfU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0x10U)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                        >> 0x11U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                         >> 0x12U)))))))))),7);
        bufp->chgBit(oldp+1282,((1U & (~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                          >> 2U)))));
        bufp->chgBit(oldp+1283,((1U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                       >> 3U))));
        bufp->chgBit(oldp+1284,((1U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                       >> 4U))));
        bufp->chgBit(oldp+1285,((1U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                       >> 5U))));
        bufp->chgBit(oldp+1286,((1U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                       >> 7U))));
        bufp->chgBit(oldp+1287,((1U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                       >> 8U))));
        bufp->chgBit(oldp+1288,((1U & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                       >> 9U))));
        bufp->chgCData(oldp+1289,(((0x40U & ((~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                 >> 0x19U)) 
                                             << 6U)) 
                                   | ((0x20U & ((~ 
                                                 (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                  >> 0x1aU)) 
                                                << 5U)) 
                                      | ((0x10U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0x1bU)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0x1cU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                   >> 0x1bU)) 
                                               | (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h19dcd5d3__0))))))),7);
        bufp->chgSData(oldp+1290,(((0x4000U & ((~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                   >> 0x11U)) 
                                               << 0xeU)) 
                                   | ((0x2000U & ((~ 
                                                   (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                    >> 0x12U)) 
                                                  << 0xdU)) 
                                      | (IData)(vlSelf->TOP__DOT__xbar__DOT__arSel_lo_1)))),15);
        bufp->chgCData(oldp+1291,(((0x40U & ((~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                 >> 0xaU)) 
                                             << 6U)) 
                                   | ((0x20U & ((~ 
                                                 (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                  >> 0xbU)) 
                                                << 5U)) 
                                      | ((0x10U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0xcU)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0xdU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0xeU)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                        >> 0xfU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                         >> 0x10U)))))))))),7);
        bufp->chgCData(oldp+1292,((((IData)((0x7ffffffU 
                                             == vlSelf->TOP__DOT__xbar__DOT___arSel_T_2)) 
                                    << 1U) | (0x3fffffffU 
                                              == vlSelf->TOP__DOT__xbar__DOT___arSel_T_4))),2);
        bufp->chgIData(oldp+1293,((~ (0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut))),32);
        bufp->chgBit(oldp+1294,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1295,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1296,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1297,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1298,((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1299,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 5U)))));
        bufp->chgBit(oldp+1300,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 6U))));
        bufp->chgBit(oldp+1301,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 7U)))));
        bufp->chgBit(oldp+1302,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 8U)))));
        bufp->chgBit(oldp+1303,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 9U)))));
        bufp->chgBit(oldp+1304,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1305,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0xbU)))));
        bufp->chgBit(oldp+1306,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1307,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1308,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1309,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+1310,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+1311,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1312,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1313,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1314,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1315,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1316,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1317,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1318,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1319,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1320,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1321,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+1322,(((0x20U & ((~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & ((~ 
                                                 (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                  >> 0x1bU)) 
                                                << 4U)) 
                                      | ((8U & ((~ 
                                                 (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                  >> 0x1cU)) 
                                                << 3U)) 
                                         | ((4U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                   >> 0x1bU)) 
                                            | (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h65f26336__0)))))),6);
        bufp->chgSData(oldp+1323,(vlSelf->TOP__DOT__xbar__DOT__awSel_lo_1),13);
        bufp->chgCData(oldp+1324,(((0x40U & ((~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                 >> 0xcU)) 
                                             << 6U)) 
                                   | ((0x20U & ((~ 
                                                 (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                  >> 0xdU)) 
                                                << 5U)) 
                                      | ((0x10U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0xeU)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0xfU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0x10U)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                        >> 0x11U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                         >> 0x12U)))))))))),7);
        bufp->chgBit(oldp+1325,((1U & (~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          >> 2U)))));
        bufp->chgBit(oldp+1326,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 3U))));
        bufp->chgBit(oldp+1327,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 4U))));
        bufp->chgBit(oldp+1328,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 5U))));
        bufp->chgBit(oldp+1329,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 7U))));
        bufp->chgBit(oldp+1330,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 8U))));
        bufp->chgBit(oldp+1331,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       >> 9U))));
        bufp->chgCData(oldp+1332,(((0x40U & ((~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                 >> 0x19U)) 
                                             << 6U)) 
                                   | ((0x20U & ((~ 
                                                 (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                  >> 0x1aU)) 
                                                << 5U)) 
                                      | ((0x10U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0x1bU)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0x1cU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                   >> 0x1bU)) 
                                               | (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h65f26336__0))))))),7);
        bufp->chgSData(oldp+1333,(((0x4000U & ((~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                   >> 0x11U)) 
                                               << 0xeU)) 
                                   | ((0x2000U & ((~ 
                                                   (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                    >> 0x12U)) 
                                                  << 0xdU)) 
                                      | (IData)(vlSelf->TOP__DOT__xbar__DOT__awSel_lo_1)))),15);
        bufp->chgCData(oldp+1334,(((0x40U & ((~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                 >> 0xaU)) 
                                             << 6U)) 
                                   | ((0x20U & ((~ 
                                                 (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                  >> 0xbU)) 
                                                << 5U)) 
                                      | ((0x10U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0xcU)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0xdU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0xeU)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                        >> 0xfU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                         >> 0x10U)))))))))),7);
        bufp->chgCData(oldp+1335,((((IData)((0x7ffffffU 
                                             == vlSelf->TOP__DOT__xbar__DOT___awSel_T_2)) 
                                    << 1U) | (0x3fffffffU 
                                              == vlSelf->TOP__DOT__xbar__DOT___awSel_T_4))),2);
        bufp->chgCData(oldp+1336,(((IData)(vlSelf->TOP__DOT__xbar__DOT__awFireReg)
                                    ? 0U : (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_enq_bits_slaveNum))),3);
        bufp->chgBit(oldp+1337,(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1338,(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1339,(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull));
        bufp->chgBit(oldp+1340,(((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)) 
                                 & ((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr) 
                                    == (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1341,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1342,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr)))));
        bufp->chgCData(oldp+1343,(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__queue_0_slaveNum),3);
        bufp->chgCData(oldp+1344,(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__queue_1_slaveNum),3);
        bufp->chgBit(oldp+1345,(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr));
        bufp->chgBit(oldp+1346,(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr));
        bufp->chgBit(oldp+1347,(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull));
        bufp->chgBit(oldp+1348,(((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                 & ((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr) 
                                    == (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1349,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr)))));
        bufp->chgBit(oldp+1350,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr)))));
        bufp->chgBit(oldp+1351,((((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T) 
                                  & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1)) 
                                     & ((1U & ((IData)(1U) 
                                               + (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr))) 
                                        == (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr)))) 
                                 | ((~ ((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1) 
                                        & (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull))) 
                                    & (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)))));
        bufp->chgCData(oldp+1352,(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__queue_0_slaveNum),3);
        bufp->chgCData(oldp+1353,(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__queue_1_slaveNum),3);
    }
    bufp->chgBit(oldp+1354,(vlSelf->clock));
    bufp->chgBit(oldp+1355,(vlSelf->reset));
    bufp->chgIData(oldp+1356,(vlSelf->io_commit_pc),32);
    bufp->chgIData(oldp+1357,(vlSelf->io_commit_inst),32);
    bufp->chgIData(oldp+1358,(vlSelf->io_commit_addr),32);
    bufp->chgBit(oldp+1359,(vlSelf->io_commit_mem));
    bufp->chgBit(oldp+1360,(vlSelf->io_commit_wen));
    bufp->chgBit(oldp+1361,(vlSelf->io_commit_commit));
    bufp->chgBit(oldp+1362,(vlSelf->io_commit_halt));
    bufp->chgIData(oldp+1363,(((0U == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0xfU)))
                                ? 0U : ((((0x1fU & 
                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                         & (IData)(vlSelf->io_commit_wen))
                                         ? vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata
                                         : ((0x1fU 
                                             == (0x1fU 
                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0xfU)))
                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30
                                                 : 
                                                ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27
                                                    : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_58)))))))),32);
    bufp->chgIData(oldp+1364,(((0U == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x14U)))
                                ? 0U : ((((0x1fU & 
                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 0x14U)) 
                                          == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                         & (IData)(vlSelf->io_commit_wen))
                                         ? vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata
                                         : ((0x1fU 
                                             == (0x1fU 
                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0x14U)))
                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30
                                                 : 
                                                ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27
                                                    : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_90)))))))),32);
}

void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_cleanup\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
