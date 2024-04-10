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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((IData)(vlSelf->TOP__DOT__Pre2IFValid) 
                              & (IData)(vlSelf->TOP__DOT___Pre2IFValid_T_2))));
        bufp->chgBit(oldp+1,((1U & ((~ ((IData)(vlSelf->TOP__DOT__Pre2IFValid) 
                                        & (IData)(vlSelf->TOP__DOT___Pre2IFValid_T_2))) 
                                    | (IData)(vlSelf->TOP__DOT__IF__DOT___pcBrRecordReg_T)))));
        bufp->chgBit(oldp+2,(vlSelf->TOP__DOT__IF_io_IF2ID_ready));
        bufp->chgBit(oldp+3,(vlSelf->TOP__DOT__IF_io_IF2ID_valid));
        bufp->chgIData(oldp+4,(vlSelf->TOP__DOT__IF__DOT__pcReg),32);
        bufp->chgIData(oldp+5,(((IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)
                                 ? vlSelf->TOP__DOT__IF__DOT__rdataReg
                                 : vlSelf->TOP__DOT__InstRam__DOT__ReadDataReg)),32);
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate) 
                                    >> 2U))));
        bufp->chgIData(oldp+8,(vlSelf->TOP__DOT__InstRam__DOT__ReadDataReg),32);
        bufp->chgBit(oldp+9,(vlSelf->TOP__DOT__arFireReg));
        bufp->chgBit(oldp+10,(vlSelf->TOP__DOT__IF_io_brTaken));
        bufp->chgIData(oldp+11,(vlSelf->TOP__DOT__IF_io_pcBr),32);
        bufp->chgIData(oldp+12,(vlSelf->TOP__DOT__IF_io_pcNext),32);
        bufp->chgBit(oldp+13,(vlSelf->TOP__DOT__IF_io_pcBrEnable));
        bufp->chgBit(oldp+14,(vlSelf->TOP__DOT__IF_io_pcBrRecord));
        bufp->chgBit(oldp+15,(vlSelf->TOP__DOT__IF2IDValid));
        bufp->chgIData(oldp+16,(vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_pc),32);
        bufp->chgIData(oldp+17,(vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst),32);
        bufp->chgBit(oldp+18,(vlSelf->TOP__DOT__ID_io_ID2EX_ready));
        bufp->chgCData(oldp+19,((7U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+20,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))));
        bufp->chgBit(oldp+21,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))));
        bufp->chgCData(oldp+22,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+23,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+24,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+25,(((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5)) 
                               | ((~ (IData)((0x1000U 
                                              == (0x3f80U 
                                                  & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)))) 
                                  & (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))))));
        bufp->chgIData(oldp+26,(((((((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
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
        bufp->chgCData(oldp+27,((((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36))) 
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
        bufp->chgCData(oldp+28,((((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))) 
                                  << 1U) | (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23)))),2);
        bufp->chgCData(oldp+29,(vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2),2);
        bufp->chgCData(oldp+30,((((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6))) 
                                  << 1U) | (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7)))),2);
        bufp->chgBit(oldp+31,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10))));
        bufp->chgBit(oldp+32,(((~ (IData)((0x1000U 
                                           == (0x3f80U 
                                               & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)))) 
                               & (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26)))));
        bufp->chgBit(oldp+33,((0xffffffffU == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62)));
        bufp->chgBit(oldp+34,(vlSelf->TOP__DOT__ID2EXValid));
        bufp->chgIData(oldp+35,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc),32);
        bufp->chgIData(oldp+36,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_inst),32);
        bufp->chgCData(oldp+37,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3),3);
        bufp->chgBit(oldp+38,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memWrite));
        bufp->chgBit(oldp+39,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memRead));
        bufp->chgCData(oldp+40,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1),5);
        bufp->chgCData(oldp+41,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2),5);
        bufp->chgCData(oldp+42,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rd),5);
        bufp->chgIData(oldp+43,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata1),32);
        bufp->chgIData(oldp+44,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata2),32);
        bufp->chgBit(oldp+45,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_regWrite));
        bufp->chgIData(oldp+46,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm),32);
        bufp->chgCData(oldp+47,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp),4);
        bufp->chgCData(oldp+48,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1),2);
        bufp->chgCData(oldp+49,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2),2);
        bufp->chgCData(oldp+50,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc),2);
        bufp->chgBit(oldp+51,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_jump));
        bufp->chgBit(oldp+52,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_halt));
        bufp->chgBit(oldp+53,((1U & ((~ (IData)(vlSelf->TOP__DOT__EX2MEMValid)) 
                                     | (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T)))));
        bufp->chgBit(oldp+54,((1U & (~ (IData)(vlSelf->TOP__DOT__EX_io_stall)))));
        bufp->chgIData(oldp+55,(vlSelf->TOP__DOT__EX__DOT__data2),32);
        bufp->chgIData(oldp+56,(vlSelf->TOP__DOT__EX__DOT__Alu_io_Result),32);
        bufp->chgIData(oldp+57,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut),32);
        bufp->chgCData(oldp+58,(vlSelf->TOP__DOT__EX_io_hazard1),2);
        bufp->chgCData(oldp+59,(vlSelf->TOP__DOT__EX_io_hazard2),2);
        bufp->chgBit(oldp+60,(vlSelf->TOP__DOT__EX_io_stall));
        bufp->chgBit(oldp+61,(vlSelf->TOP__DOT__EX2MEMValid));
        bufp->chgIData(oldp+62,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_pc),32);
        bufp->chgIData(oldp+63,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_inst),32);
        bufp->chgCData(oldp+64,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3),3);
        bufp->chgBit(oldp+65,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite));
        bufp->chgBit(oldp+66,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead));
        bufp->chgCData(oldp+67,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd),5);
        bufp->chgIData(oldp+68,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2),32);
        bufp->chgBit(oldp+69,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite));
        bufp->chgBit(oldp+70,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_halt));
        bufp->chgBit(oldp+71,(vlSelf->TOP__DOT__MEM_io_MEM2WB_ready));
        bufp->chgBit(oldp+72,(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid));
        bufp->chgIData(oldp+73,((0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)),32);
        bufp->chgCData(oldp+74,((3U & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))),3);
        bufp->chgIData(oldp+75,(((2U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                                  ? VL_SHIFTL_III(32,32,32, 
                                                  ((1U 
                                                    & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
                                                    : vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2), 0x10U)
                                  : ((1U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                                      ? VL_SHIFTL_III(32,32,32, vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
                                      : vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2))),32);
        bufp->chgCData(oldp+76,(((8U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          << 3U) & 
                                         (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          << 2U)) | 
                                        (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                           << 2U) & 
                                          ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                           << 3U)) 
                                         | ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                            << 2U)))) 
                                 | ((4U & ((0xfffffffcU 
                                            & (((~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)) 
                                                << 2U) 
                                               & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                  << 1U))) 
                                           | (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                    << 1U))))) 
                                    | ((2U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                & (~ 
                                                   ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                    >> 1U))) 
                                               << 1U) 
                                              | ((((~ 
                                                    ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                     >> 1U)) 
                                                   & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                                  << 1U) 
                                                 | (0xfffffffeU 
                                                    & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))))) 
                                       | (IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))))))),4);
        bufp->chgBit(oldp+77,(vlSelf->TOP__DOT__MEM2WBValid));
        bufp->chgCData(oldp+78,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3),3);
        bufp->chgBit(oldp+79,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead));
        bufp->chgBit(oldp+80,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite));
        bufp->chgBit(oldp+81,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite));
        bufp->chgIData(oldp+82,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut),32);
        bufp->chgBit(oldp+83,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_halt));
        bufp->chgBit(oldp+84,(vlSelf->TOP__DOT__WB_io_WBout_valid));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelf->TOP__DOT__DataRam__DOT__rstate) 
                                     >> 2U))));
        bufp->chgIData(oldp+86,(vlSelf->TOP__DOT__DataRam__DOT__ReadDataReg),32);
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSelf->TOP__DOT__DataRam__DOT__wstate) 
                                     >> 2U))));
        bufp->chgBit(oldp+88,((1U & ((IData)(vlSelf->TOP__DOT__InstRam__DOT__wstate) 
                                     >> 2U))));
        bufp->chgBit(oldp+89,(vlSelf->TOP__DOT__Pre2IFValid));
        bufp->chgBit(oldp+90,(vlSelf->TOP__DOT__IFoutValid));
        bufp->chgBit(oldp+91,(vlSelf->TOP__DOT__IDoutValid));
        bufp->chgBit(oldp+92,(vlSelf->TOP__DOT__MEMRegWrite));
        bufp->chgBit(oldp+93,(vlSelf->TOP__DOT__WBRegWrite));
        bufp->chgBit(oldp+94,(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0));
        bufp->chgBit(oldp+95,(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0));
        bufp->chgBit(oldp+96,(vlSelf->TOP__DOT__hazard1_1));
        bufp->chgBit(oldp+97,(vlSelf->TOP__DOT__hazard2_1));
        bufp->chgBit(oldp+98,(vlSelf->TOP__DOT__EXoutValid));
        bufp->chgBit(oldp+99,(vlSelf->TOP__DOT__MEMoutValid));
        bufp->chgIData(oldp+100,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_pc),32);
        bufp->chgIData(oldp+101,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_inst),32);
        bufp->chgCData(oldp+102,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd),5);
        bufp->chgCData(oldp+103,(vlSelf->TOP__DOT__DataRam__DOT__rstate),3);
        bufp->chgCData(oldp+104,(vlSelf->TOP__DOT__DataRam__DOT__awstate),3);
        bufp->chgCData(oldp+105,(vlSelf->TOP__DOT__DataRam__DOT__wstate),3);
        bufp->chgCData(oldp+106,(vlSelf->TOP__DOT__DataRam__DOT__nxt_rstate),3);
        bufp->chgCData(oldp+107,(vlSelf->TOP__DOT__DataRam__DOT__nxt_wstate),3);
        bufp->chgIData(oldp+108,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din),32);
        bufp->chgIData(oldp+109,(vlSelf->TOP__DOT__EX__DOT__Alu_io_B),32);
        bufp->chgBit(oldp+110,((1U & (~ (IData)((0U 
                                                 != vlSelf->TOP__DOT__EX__DOT__Alu_io_Result))))));
        bufp->chgBit(oldp+111,((1U & ((~ (IData)((0xfU 
                                                  == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                      ^ (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                 >> 0x20U))))));
        bufp->chgIData(oldp+112,(vlSelf->TOP__DOT__EX__DOT__bypassReg),32);
        bufp->chgBit(oldp+113,(vlSelf->TOP__DOT__EX__DOT__hazard1Reg));
        bufp->chgBit(oldp+114,(vlSelf->TOP__DOT__EX__DOT__hazard2Reg));
        bufp->chgIData(oldp+115,(vlSelf->TOP__DOT__EX__DOT__data1),32);
        bufp->chgIData(oldp+116,((vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm 
                                  + vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc)),32);
        bufp->chgBit(oldp+117,(vlSelf->TOP__DOT__EX__DOT__brEnable));
        bufp->chgBit(oldp+118,(((IData)(((0U == (6U 
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
        bufp->chgBit(oldp+119,(vlSelf->TOP__DOT__EX__DOT__brTaken));
        bufp->chgBit(oldp+120,((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14))));
        bufp->chgBit(oldp+121,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18))));
        bufp->chgCData(oldp+122,((0x1fU & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),5);
        bufp->chgIData(oldp+123,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout),32);
        bufp->chgCData(oldp+124,((0xfU & (~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)))),4);
        bufp->chgBit(oldp+125,((1U & (~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)))));
        bufp->chgBit(oldp+126,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 1U)))));
        bufp->chgBit(oldp+127,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 2U)))));
        bufp->chgBit(oldp+128,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                         >> 3U)))));
        bufp->chgBit(oldp+129,((1U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp))));
        bufp->chgBit(oldp+130,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 1U))));
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 2U))));
        bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 3U))));
        bufp->chgSData(oldp+133,((((IData)((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18))) 
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
        bufp->chgBit(oldp+134,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T))));
        bufp->chgBit(oldp+135,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2))));
        bufp->chgBit(oldp+136,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4))));
        bufp->chgBit(oldp+137,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6))));
        bufp->chgBit(oldp+138,((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8))));
        bufp->chgBit(oldp+139,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10))));
        bufp->chgBit(oldp+140,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12))));
        bufp->chgBit(oldp+141,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16))));
        bufp->chgBit(oldp+142,((1U & (~ (IData)((0xfU 
                                                 == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))))));
        bufp->chgIData(oldp+143,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB),32);
        bufp->chgQData(oldp+144,((0x1ffffffffULL & vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)),33);
        bufp->chgIData(oldp+146,((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)),32);
        bufp->chgBit(oldp+147,((1U & (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+148,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  ^ vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+149,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  | vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+150,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+151,((1U & (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                         >> 0x1fU) 
                                        | (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                             ^ vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                            >> 0x1fU) 
                                           & (IData)(
                                                     (vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                      >> 0x1fU)))))),32);
        bufp->chgIData(oldp+152,((1U & ((~ (IData)(
                                                   (0xfU 
                                                    == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                        ^ (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                   >> 0x20U))))),32);
        bufp->chgBit(oldp+153,((1U & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)));
        bufp->chgCData(oldp+154,(((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 2U)) | 
                                  (3U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din))),4);
        bufp->chgCData(oldp+155,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 3U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          << 1U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 1U))))),4);
        bufp->chgCData(oldp+156,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 2U)) | 
                                  ((4U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                   | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 2U))))),4);
        bufp->chgCData(oldp+157,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 1U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 1U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 3U))))),4);
        bufp->chgCData(oldp+158,(((8U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 2U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 4U))))),4);
        bufp->chgCData(oldp+159,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 1U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 3U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 5U))))),4);
        bufp->chgCData(oldp+160,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 2U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 4U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 6U))))),4);
        bufp->chgCData(oldp+161,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 3U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 5U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 7U))))),4);
        bufp->chgCData(oldp+162,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 6U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 8U))))),4);
        bufp->chgCData(oldp+163,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 5U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 7U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 9U))))),4);
        bufp->chgCData(oldp+164,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 6U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 8U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xaU))))),4);
        bufp->chgCData(oldp+165,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 7U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 9U)) | 
                                   (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xbU))))),4);
        bufp->chgCData(oldp+166,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 8U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xaU)) 
                                   | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xcU))))),4);
        bufp->chgCData(oldp+167,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 9U)) | 
                                  ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0xbU)) 
                                   | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xdU))))),4);
        bufp->chgCData(oldp+168,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xaU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xcU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0xeU))))),4);
        bufp->chgCData(oldp+169,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xbU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xdU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0xfU))))),4);
        bufp->chgCData(oldp+170,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xcU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xeU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x10U))))),4);
        bufp->chgCData(oldp+171,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xdU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0xfU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x11U))))),4);
        bufp->chgCData(oldp+172,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xeU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x10U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x12U))))),4);
        bufp->chgCData(oldp+173,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xfU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x11U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x13U))))),4);
        bufp->chgCData(oldp+174,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x10U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x12U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x14U))))),4);
        bufp->chgCData(oldp+175,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x11U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x13U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x15U))))),4);
        bufp->chgCData(oldp+176,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x12U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x14U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x16U))))),4);
        bufp->chgCData(oldp+177,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x13U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x15U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x17U))))),4);
        bufp->chgCData(oldp+178,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x14U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x16U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x18U))))),4);
        bufp->chgCData(oldp+179,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x15U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x17U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x19U))))),4);
        bufp->chgCData(oldp+180,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x16U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x18U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1aU))))),4);
        bufp->chgCData(oldp+181,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x17U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x19U)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1bU))))),4);
        bufp->chgCData(oldp+182,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x18U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1aU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1cU))))),4);
        bufp->chgCData(oldp+183,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x19U)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1bU)) 
                                     | (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                              >> 0x1dU))))),4);
        bufp->chgCData(oldp+184,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1aU)) 
                                  | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1cU)) 
                                     | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1eU)))),4);
        bufp->chgCData(oldp+185,((((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x1bU)) 
                                   | (4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                            >> 0x1dU))) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                >> 0x1fU)))),4);
        bufp->chgIData(oldp+186,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
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
        bufp->chgBit(oldp+187,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 1U))));
        bufp->chgCData(oldp+188,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)))),4);
        bufp->chgCData(oldp+189,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1)))),4);
        bufp->chgCData(oldp+190,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2)))),4);
        bufp->chgCData(oldp+191,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3)))),4);
        bufp->chgCData(oldp+192,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4)))),4);
        bufp->chgCData(oldp+193,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5)))),4);
        bufp->chgCData(oldp+194,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6)))),4);
        bufp->chgCData(oldp+195,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7)))),4);
        bufp->chgCData(oldp+196,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8)))),4);
        bufp->chgCData(oldp+197,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9)))),4);
        bufp->chgCData(oldp+198,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10)))),4);
        bufp->chgCData(oldp+199,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11)))),4);
        bufp->chgCData(oldp+200,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12)))),4);
        bufp->chgCData(oldp+201,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13)))),4);
        bufp->chgCData(oldp+202,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14)))),4);
        bufp->chgCData(oldp+203,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15)))),4);
        bufp->chgCData(oldp+204,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16)))),4);
        bufp->chgCData(oldp+205,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17)))),4);
        bufp->chgCData(oldp+206,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18)))),4);
        bufp->chgCData(oldp+207,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19)))),4);
        bufp->chgCData(oldp+208,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20)))),4);
        bufp->chgCData(oldp+209,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21)))),4);
        bufp->chgCData(oldp+210,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22)))),4);
        bufp->chgCData(oldp+211,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23)))),4);
        bufp->chgCData(oldp+212,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24)))),4);
        bufp->chgCData(oldp+213,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25)))),4);
        bufp->chgCData(oldp+214,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26)))),4);
        bufp->chgCData(oldp+215,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27)))),4);
        bufp->chgCData(oldp+216,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28)))),4);
        bufp->chgCData(oldp+217,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29)))),4);
        bufp->chgCData(oldp+218,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30)))),4);
        bufp->chgCData(oldp+219,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31)))),4);
        bufp->chgIData(oldp+220,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
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
        bufp->chgBit(oldp+221,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 2U))));
        bufp->chgCData(oldp+222,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)))),4);
        bufp->chgCData(oldp+223,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1)))),4);
        bufp->chgCData(oldp+224,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2)))),4);
        bufp->chgCData(oldp+225,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3)))),4);
        bufp->chgCData(oldp+226,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4)))),4);
        bufp->chgCData(oldp+227,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5)))),4);
        bufp->chgCData(oldp+228,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6)))),4);
        bufp->chgCData(oldp+229,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7)))),4);
        bufp->chgCData(oldp+230,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8)))),4);
        bufp->chgCData(oldp+231,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9)))),4);
        bufp->chgCData(oldp+232,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10)))),4);
        bufp->chgCData(oldp+233,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11)))),4);
        bufp->chgCData(oldp+234,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12)))),4);
        bufp->chgCData(oldp+235,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13)))),4);
        bufp->chgCData(oldp+236,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14)))),4);
        bufp->chgCData(oldp+237,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15)))),4);
        bufp->chgCData(oldp+238,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16)))),4);
        bufp->chgCData(oldp+239,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17)))),4);
        bufp->chgCData(oldp+240,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18)))),4);
        bufp->chgCData(oldp+241,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19)))),4);
        bufp->chgCData(oldp+242,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20)))),4);
        bufp->chgCData(oldp+243,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21)))),4);
        bufp->chgCData(oldp+244,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22)))),4);
        bufp->chgCData(oldp+245,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23)))),4);
        bufp->chgCData(oldp+246,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24)))),4);
        bufp->chgCData(oldp+247,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25)))),4);
        bufp->chgCData(oldp+248,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26)))),4);
        bufp->chgCData(oldp+249,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27)))),4);
        bufp->chgCData(oldp+250,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28)))),4);
        bufp->chgCData(oldp+251,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29)))),4);
        bufp->chgCData(oldp+252,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30)))),4);
        bufp->chgCData(oldp+253,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31)))),4);
        bufp->chgIData(oldp+254,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
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
        bufp->chgBit(oldp+255,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 3U))));
        bufp->chgCData(oldp+256,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)))),4);
        bufp->chgCData(oldp+257,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1)))),4);
        bufp->chgCData(oldp+258,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2)))),4);
        bufp->chgCData(oldp+259,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3)))),4);
        bufp->chgCData(oldp+260,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4)))),4);
        bufp->chgCData(oldp+261,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5)))),4);
        bufp->chgCData(oldp+262,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6)))),4);
        bufp->chgCData(oldp+263,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7)))),4);
        bufp->chgCData(oldp+264,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8)))),4);
        bufp->chgCData(oldp+265,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9)))),4);
        bufp->chgCData(oldp+266,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10)))),4);
        bufp->chgCData(oldp+267,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11)))),4);
        bufp->chgCData(oldp+268,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12)))),4);
        bufp->chgCData(oldp+269,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13)))),4);
        bufp->chgCData(oldp+270,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14)))),4);
        bufp->chgCData(oldp+271,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15)))),4);
        bufp->chgCData(oldp+272,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16)))),4);
        bufp->chgCData(oldp+273,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17)))),4);
        bufp->chgCData(oldp+274,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18)))),4);
        bufp->chgCData(oldp+275,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19)))),4);
        bufp->chgCData(oldp+276,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20)))),4);
        bufp->chgCData(oldp+277,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21)))),4);
        bufp->chgCData(oldp+278,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22)))),4);
        bufp->chgCData(oldp+279,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23)))),4);
        bufp->chgCData(oldp+280,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24)))),4);
        bufp->chgCData(oldp+281,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25)))),4);
        bufp->chgCData(oldp+282,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26)))),4);
        bufp->chgCData(oldp+283,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27)))),4);
        bufp->chgCData(oldp+284,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28)))),4);
        bufp->chgCData(oldp+285,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29)))),4);
        bufp->chgCData(oldp+286,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30)))),4);
        bufp->chgCData(oldp+287,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31)))),4);
        bufp->chgIData(oldp+288,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
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
        bufp->chgBit(oldp+289,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 4U))));
        bufp->chgCData(oldp+290,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))),4);
        bufp->chgCData(oldp+291,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))),4);
        bufp->chgCData(oldp+292,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))),4);
        bufp->chgCData(oldp+293,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))),4);
        bufp->chgCData(oldp+294,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))),4);
        bufp->chgCData(oldp+295,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))),4);
        bufp->chgCData(oldp+296,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))),4);
        bufp->chgCData(oldp+297,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))),4);
        bufp->chgCData(oldp+298,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))),4);
        bufp->chgCData(oldp+299,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))),4);
        bufp->chgCData(oldp+300,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))),4);
        bufp->chgCData(oldp+301,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))),4);
        bufp->chgCData(oldp+302,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))),4);
        bufp->chgCData(oldp+303,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))),4);
        bufp->chgCData(oldp+304,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))),4);
        bufp->chgCData(oldp+305,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))),4);
        bufp->chgCData(oldp+306,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))),4);
        bufp->chgCData(oldp+307,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)))),4);
        bufp->chgCData(oldp+308,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)))),4);
        bufp->chgCData(oldp+309,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)))),4);
        bufp->chgCData(oldp+310,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)))),4);
        bufp->chgCData(oldp+311,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)))),4);
        bufp->chgCData(oldp+312,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)))),4);
        bufp->chgCData(oldp+313,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)))),4);
        bufp->chgCData(oldp+314,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)))),4);
        bufp->chgCData(oldp+315,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)))),4);
        bufp->chgCData(oldp+316,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)))),4);
        bufp->chgCData(oldp+317,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)))),4);
        bufp->chgCData(oldp+318,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)))),4);
        bufp->chgCData(oldp+319,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)))),4);
        bufp->chgCData(oldp+320,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)))),4);
        bufp->chgCData(oldp+321,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                    << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                      << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)))),4);
        bufp->chgBit(oldp+322,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
        bufp->chgBit(oldp+323,((1U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)));
        bufp->chgBit(oldp+324,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 1U))));
        bufp->chgBit(oldp+325,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 2U))));
        bufp->chgBit(oldp+326,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 3U))));
        bufp->chgBit(oldp+327,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 4U))));
        bufp->chgBit(oldp+328,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 5U))));
        bufp->chgBit(oldp+329,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 6U))));
        bufp->chgBit(oldp+330,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 7U))));
        bufp->chgBit(oldp+331,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 8U))));
        bufp->chgBit(oldp+332,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 9U))));
        bufp->chgBit(oldp+333,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xaU))));
        bufp->chgBit(oldp+334,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xbU))));
        bufp->chgBit(oldp+335,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xcU))));
        bufp->chgBit(oldp+336,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xdU))));
        bufp->chgBit(oldp+337,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU))));
        bufp->chgBit(oldp+338,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xfU))));
        bufp->chgBit(oldp+339,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x10U))));
        bufp->chgBit(oldp+340,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x11U))));
        bufp->chgBit(oldp+341,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x12U))));
        bufp->chgBit(oldp+342,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x13U))));
        bufp->chgBit(oldp+343,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x14U))));
        bufp->chgBit(oldp+344,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x15U))));
        bufp->chgBit(oldp+345,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x16U))));
        bufp->chgBit(oldp+346,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x17U))));
        bufp->chgBit(oldp+347,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x18U))));
        bufp->chgBit(oldp+348,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x19U))));
        bufp->chgBit(oldp+349,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+350,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+351,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+352,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+353,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+354,((3U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)),2);
        bufp->chgCData(oldp+355,((1U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)),2);
        bufp->chgCData(oldp+356,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 1U))),2);
        bufp->chgCData(oldp+357,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         << 1U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 1U)))),2);
        bufp->chgCData(oldp+358,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 2U))),2);
        bufp->chgCData(oldp+359,(((2U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 2U)))),2);
        bufp->chgCData(oldp+360,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 3U))),2);
        bufp->chgCData(oldp+361,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 1U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 3U)))),2);
        bufp->chgCData(oldp+362,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 4U))),2);
        bufp->chgCData(oldp+363,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 2U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U)))),2);
        bufp->chgCData(oldp+364,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 5U))),2);
        bufp->chgCData(oldp+365,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 3U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 5U)))),2);
        bufp->chgCData(oldp+366,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 6U))),2);
        bufp->chgCData(oldp+367,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 6U)))),2);
        bufp->chgCData(oldp+368,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 7U))),2);
        bufp->chgCData(oldp+369,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 5U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 7U)))),2);
        bufp->chgCData(oldp+370,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 8U))),2);
        bufp->chgCData(oldp+371,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 6U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 8U)))),2);
        bufp->chgCData(oldp+372,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 9U))),2);
        bufp->chgCData(oldp+373,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 7U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 9U)))),2);
        bufp->chgCData(oldp+374,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+375,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 8U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xaU)))),2);
        bufp->chgCData(oldp+376,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+377,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 9U)) | 
                                  (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xbU)))),2);
        bufp->chgCData(oldp+378,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+379,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0xcU)))),2);
        bufp->chgCData(oldp+380,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+381,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0xdU)))),2);
        bufp->chgCData(oldp+382,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xeU))),2);
        bufp->chgCData(oldp+383,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0xeU)))),2);
        bufp->chgCData(oldp+384,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+385,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0xfU)))),2);
        bufp->chgCData(oldp+386,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x10U))),2);
        bufp->chgCData(oldp+387,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x10U)))),2);
        bufp->chgCData(oldp+388,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x11U))),2);
        bufp->chgCData(oldp+389,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x11U)))),2);
        bufp->chgCData(oldp+390,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x12U))),2);
        bufp->chgCData(oldp+391,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x12U)))),2);
        bufp->chgCData(oldp+392,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x13U))),2);
        bufp->chgCData(oldp+393,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x11U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x13U)))),2);
        bufp->chgCData(oldp+394,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x14U))),2);
        bufp->chgCData(oldp+395,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x12U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x14U)))),2);
        bufp->chgCData(oldp+396,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x15U))),2);
        bufp->chgCData(oldp+397,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x13U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x15U)))),2);
        bufp->chgCData(oldp+398,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x16U))),2);
        bufp->chgCData(oldp+399,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x14U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x16U)))),2);
        bufp->chgCData(oldp+400,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x17U))),2);
        bufp->chgCData(oldp+401,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x15U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x17U)))),2);
        bufp->chgCData(oldp+402,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+403,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x16U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x18U)))),2);
        bufp->chgCData(oldp+404,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x19U))),2);
        bufp->chgCData(oldp+405,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x17U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x19U)))),2);
        bufp->chgCData(oldp+406,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1aU))),2);
        bufp->chgCData(oldp+407,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x18U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1aU)))),2);
        bufp->chgCData(oldp+408,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1bU))),2);
        bufp->chgCData(oldp+409,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x19U)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1bU)))),2);
        bufp->chgCData(oldp+410,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+411,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1cU)))),2);
        bufp->chgCData(oldp+412,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 0x1dU))),2);
        bufp->chgCData(oldp+413,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1dU)))),2);
        bufp->chgCData(oldp+414,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+415,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                           >> 0x1eU)))),2);
        bufp->chgCData(oldp+416,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                             >> 0x1fU))),2);
        bufp->chgCData(oldp+417,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1dU)) 
                                  | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x1fU))),2);
        bufp->chgBit(oldp+418,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0));
        bufp->chgBit(oldp+419,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2));
        bufp->chgBit(oldp+420,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1));
        bufp->chgBit(oldp+421,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3));
        bufp->chgBit(oldp+422,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4));
        bufp->chgBit(oldp+423,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5));
        bufp->chgBit(oldp+424,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6));
        bufp->chgBit(oldp+425,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7));
        bufp->chgBit(oldp+426,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8));
        bufp->chgBit(oldp+427,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9));
        bufp->chgBit(oldp+428,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10));
        bufp->chgBit(oldp+429,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11));
        bufp->chgBit(oldp+430,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12));
        bufp->chgBit(oldp+431,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13));
        bufp->chgBit(oldp+432,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14));
        bufp->chgBit(oldp+433,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15));
        bufp->chgBit(oldp+434,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16));
        bufp->chgBit(oldp+435,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17));
        bufp->chgBit(oldp+436,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18));
        bufp->chgBit(oldp+437,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19));
        bufp->chgBit(oldp+438,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20));
        bufp->chgBit(oldp+439,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21));
        bufp->chgBit(oldp+440,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22));
        bufp->chgBit(oldp+441,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23));
        bufp->chgBit(oldp+442,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24));
        bufp->chgBit(oldp+443,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25));
        bufp->chgBit(oldp+444,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26));
        bufp->chgBit(oldp+445,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27));
        bufp->chgBit(oldp+446,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28));
        bufp->chgBit(oldp+447,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29));
        bufp->chgBit(oldp+448,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30));
        bufp->chgBit(oldp+449,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31));
        bufp->chgCData(oldp+450,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))),2);
        bufp->chgCData(oldp+451,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0),2);
        bufp->chgCData(oldp+452,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1))),2);
        bufp->chgCData(oldp+453,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1),2);
        bufp->chgCData(oldp+454,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))),2);
        bufp->chgCData(oldp+455,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))),2);
        bufp->chgCData(oldp+456,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))),2);
        bufp->chgCData(oldp+457,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))),2);
        bufp->chgCData(oldp+458,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))),2);
        bufp->chgCData(oldp+459,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))),2);
        bufp->chgCData(oldp+460,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))),2);
        bufp->chgCData(oldp+461,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))),2);
        bufp->chgCData(oldp+462,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))),2);
        bufp->chgCData(oldp+463,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))),2);
        bufp->chgCData(oldp+464,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))),2);
        bufp->chgCData(oldp+465,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))),2);
        bufp->chgCData(oldp+466,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))),2);
        bufp->chgCData(oldp+467,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))),2);
        bufp->chgCData(oldp+468,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))),2);
        bufp->chgCData(oldp+469,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))),2);
        bufp->chgCData(oldp+470,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))),2);
        bufp->chgCData(oldp+471,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))),2);
        bufp->chgCData(oldp+472,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))),2);
        bufp->chgCData(oldp+473,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))),2);
        bufp->chgCData(oldp+474,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))),2);
        bufp->chgCData(oldp+475,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))),2);
        bufp->chgCData(oldp+476,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))),2);
        bufp->chgCData(oldp+477,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))),2);
        bufp->chgCData(oldp+478,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))),2);
        bufp->chgCData(oldp+479,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))),2);
        bufp->chgCData(oldp+480,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))),2);
        bufp->chgCData(oldp+481,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))),2);
        bufp->chgCData(oldp+482,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))),2);
        bufp->chgCData(oldp+483,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))),2);
        bufp->chgCData(oldp+484,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))),2);
        bufp->chgCData(oldp+485,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))),2);
        bufp->chgCData(oldp+486,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))),2);
        bufp->chgCData(oldp+487,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))),2);
        bufp->chgCData(oldp+488,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))),2);
        bufp->chgCData(oldp+489,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))),2);
        bufp->chgCData(oldp+490,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))),2);
        bufp->chgCData(oldp+491,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))),2);
        bufp->chgCData(oldp+492,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))),2);
        bufp->chgCData(oldp+493,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))),2);
        bufp->chgCData(oldp+494,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))),2);
        bufp->chgCData(oldp+495,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))),2);
        bufp->chgCData(oldp+496,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))),2);
        bufp->chgCData(oldp+497,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))),2);
        bufp->chgCData(oldp+498,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))),2);
        bufp->chgCData(oldp+499,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))),2);
        bufp->chgCData(oldp+500,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))),2);
        bufp->chgCData(oldp+501,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))),2);
        bufp->chgCData(oldp+502,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))),2);
        bufp->chgCData(oldp+503,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))),2);
        bufp->chgCData(oldp+504,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))),2);
        bufp->chgCData(oldp+505,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))),2);
        bufp->chgCData(oldp+506,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))),2);
        bufp->chgCData(oldp+507,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))),2);
        bufp->chgCData(oldp+508,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))),2);
        bufp->chgCData(oldp+509,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))),2);
        bufp->chgCData(oldp+510,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30))),2);
        bufp->chgCData(oldp+511,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30))),2);
        bufp->chgCData(oldp+512,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31))),2);
        bufp->chgCData(oldp+513,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31))),2);
        bufp->chgBit(oldp+514,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0));
        bufp->chgBit(oldp+515,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4));
        bufp->chgBit(oldp+516,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1));
        bufp->chgBit(oldp+517,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5));
        bufp->chgBit(oldp+518,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2));
        bufp->chgBit(oldp+519,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6));
        bufp->chgBit(oldp+520,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3));
        bufp->chgBit(oldp+521,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7));
        bufp->chgBit(oldp+522,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8));
        bufp->chgBit(oldp+523,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9));
        bufp->chgBit(oldp+524,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10));
        bufp->chgBit(oldp+525,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11));
        bufp->chgBit(oldp+526,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12));
        bufp->chgBit(oldp+527,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13));
        bufp->chgBit(oldp+528,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14));
        bufp->chgBit(oldp+529,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15));
        bufp->chgBit(oldp+530,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16));
        bufp->chgBit(oldp+531,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17));
        bufp->chgBit(oldp+532,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18));
        bufp->chgBit(oldp+533,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19));
        bufp->chgBit(oldp+534,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20));
        bufp->chgBit(oldp+535,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21));
        bufp->chgBit(oldp+536,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22));
        bufp->chgBit(oldp+537,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23));
        bufp->chgBit(oldp+538,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24));
        bufp->chgBit(oldp+539,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25));
        bufp->chgBit(oldp+540,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26));
        bufp->chgBit(oldp+541,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27));
        bufp->chgBit(oldp+542,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28));
        bufp->chgBit(oldp+543,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29));
        bufp->chgBit(oldp+544,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30));
        bufp->chgBit(oldp+545,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31));
        bufp->chgCData(oldp+546,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))),2);
        bufp->chgCData(oldp+547,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0),2);
        bufp->chgCData(oldp+548,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1))),2);
        bufp->chgCData(oldp+549,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1),2);
        bufp->chgCData(oldp+550,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2))),2);
        bufp->chgCData(oldp+551,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2),2);
        bufp->chgCData(oldp+552,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3))),2);
        bufp->chgCData(oldp+553,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3),2);
        bufp->chgCData(oldp+554,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))),2);
        bufp->chgCData(oldp+555,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))),2);
        bufp->chgCData(oldp+556,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))),2);
        bufp->chgCData(oldp+557,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))),2);
        bufp->chgCData(oldp+558,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))),2);
        bufp->chgCData(oldp+559,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))),2);
        bufp->chgCData(oldp+560,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))),2);
        bufp->chgCData(oldp+561,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))),2);
        bufp->chgCData(oldp+562,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))),2);
        bufp->chgCData(oldp+563,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))),2);
        bufp->chgCData(oldp+564,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))),2);
        bufp->chgCData(oldp+565,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))),2);
        bufp->chgCData(oldp+566,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))),2);
        bufp->chgCData(oldp+567,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))),2);
        bufp->chgCData(oldp+568,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))),2);
        bufp->chgCData(oldp+569,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))),2);
        bufp->chgCData(oldp+570,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))),2);
        bufp->chgCData(oldp+571,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))),2);
        bufp->chgCData(oldp+572,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))),2);
        bufp->chgCData(oldp+573,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))),2);
        bufp->chgCData(oldp+574,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))),2);
        bufp->chgCData(oldp+575,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))),2);
        bufp->chgCData(oldp+576,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))),2);
        bufp->chgCData(oldp+577,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))),2);
        bufp->chgCData(oldp+578,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))),2);
        bufp->chgCData(oldp+579,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))),2);
        bufp->chgCData(oldp+580,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))),2);
        bufp->chgCData(oldp+581,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))),2);
        bufp->chgCData(oldp+582,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))),2);
        bufp->chgCData(oldp+583,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))),2);
        bufp->chgCData(oldp+584,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))),2);
        bufp->chgCData(oldp+585,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))),2);
        bufp->chgCData(oldp+586,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))),2);
        bufp->chgCData(oldp+587,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))),2);
        bufp->chgCData(oldp+588,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))),2);
        bufp->chgCData(oldp+589,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))),2);
        bufp->chgCData(oldp+590,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))),2);
        bufp->chgCData(oldp+591,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))),2);
        bufp->chgCData(oldp+592,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))),2);
        bufp->chgCData(oldp+593,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))),2);
        bufp->chgCData(oldp+594,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))),2);
        bufp->chgCData(oldp+595,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))),2);
        bufp->chgCData(oldp+596,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))),2);
        bufp->chgCData(oldp+597,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))),2);
        bufp->chgCData(oldp+598,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))),2);
        bufp->chgCData(oldp+599,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))),2);
        bufp->chgCData(oldp+600,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))),2);
        bufp->chgCData(oldp+601,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))),2);
        bufp->chgCData(oldp+602,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28))),2);
        bufp->chgCData(oldp+603,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28))),2);
        bufp->chgCData(oldp+604,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29))),2);
        bufp->chgCData(oldp+605,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29))),2);
        bufp->chgCData(oldp+606,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30))),2);
        bufp->chgCData(oldp+607,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30))),2);
        bufp->chgCData(oldp+608,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31))),2);
        bufp->chgCData(oldp+609,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31))),2);
        bufp->chgBit(oldp+610,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0));
        bufp->chgBit(oldp+611,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8));
        bufp->chgBit(oldp+612,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1));
        bufp->chgBit(oldp+613,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9));
        bufp->chgBit(oldp+614,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2));
        bufp->chgBit(oldp+615,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10));
        bufp->chgBit(oldp+616,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3));
        bufp->chgBit(oldp+617,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11));
        bufp->chgBit(oldp+618,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4));
        bufp->chgBit(oldp+619,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12));
        bufp->chgBit(oldp+620,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5));
        bufp->chgBit(oldp+621,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13));
        bufp->chgBit(oldp+622,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6));
        bufp->chgBit(oldp+623,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14));
        bufp->chgBit(oldp+624,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7));
        bufp->chgBit(oldp+625,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15));
        bufp->chgBit(oldp+626,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16));
        bufp->chgBit(oldp+627,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17));
        bufp->chgBit(oldp+628,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18));
        bufp->chgBit(oldp+629,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19));
        bufp->chgBit(oldp+630,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20));
        bufp->chgBit(oldp+631,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21));
        bufp->chgBit(oldp+632,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22));
        bufp->chgBit(oldp+633,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23));
        bufp->chgBit(oldp+634,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24));
        bufp->chgBit(oldp+635,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25));
        bufp->chgBit(oldp+636,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26));
        bufp->chgBit(oldp+637,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27));
        bufp->chgBit(oldp+638,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28));
        bufp->chgBit(oldp+639,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29));
        bufp->chgBit(oldp+640,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30));
        bufp->chgBit(oldp+641,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31));
        bufp->chgCData(oldp+642,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))),2);
        bufp->chgCData(oldp+643,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0),2);
        bufp->chgCData(oldp+644,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1))),2);
        bufp->chgCData(oldp+645,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1),2);
        bufp->chgCData(oldp+646,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2))),2);
        bufp->chgCData(oldp+647,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2),2);
        bufp->chgCData(oldp+648,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3))),2);
        bufp->chgCData(oldp+649,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3),2);
        bufp->chgCData(oldp+650,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4))),2);
        bufp->chgCData(oldp+651,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4),2);
        bufp->chgCData(oldp+652,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5))),2);
        bufp->chgCData(oldp+653,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5),2);
        bufp->chgCData(oldp+654,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6))),2);
        bufp->chgCData(oldp+655,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6),2);
        bufp->chgCData(oldp+656,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7))),2);
        bufp->chgCData(oldp+657,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7),2);
        bufp->chgCData(oldp+658,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))),2);
        bufp->chgCData(oldp+659,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))),2);
        bufp->chgCData(oldp+660,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))),2);
        bufp->chgCData(oldp+661,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))),2);
        bufp->chgCData(oldp+662,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))),2);
        bufp->chgCData(oldp+663,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))),2);
        bufp->chgCData(oldp+664,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))),2);
        bufp->chgCData(oldp+665,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))),2);
        bufp->chgCData(oldp+666,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))),2);
        bufp->chgCData(oldp+667,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))),2);
        bufp->chgCData(oldp+668,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))),2);
        bufp->chgCData(oldp+669,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))),2);
        bufp->chgCData(oldp+670,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))),2);
        bufp->chgCData(oldp+671,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))),2);
        bufp->chgCData(oldp+672,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))),2);
        bufp->chgCData(oldp+673,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))),2);
        bufp->chgCData(oldp+674,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))),2);
        bufp->chgCData(oldp+675,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))),2);
        bufp->chgCData(oldp+676,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))),2);
        bufp->chgCData(oldp+677,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))),2);
        bufp->chgCData(oldp+678,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))),2);
        bufp->chgCData(oldp+679,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))),2);
        bufp->chgCData(oldp+680,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))),2);
        bufp->chgCData(oldp+681,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))),2);
        bufp->chgCData(oldp+682,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))),2);
        bufp->chgCData(oldp+683,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))),2);
        bufp->chgCData(oldp+684,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))),2);
        bufp->chgCData(oldp+685,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))),2);
        bufp->chgCData(oldp+686,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))),2);
        bufp->chgCData(oldp+687,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))),2);
        bufp->chgCData(oldp+688,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))),2);
        bufp->chgCData(oldp+689,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))),2);
        bufp->chgCData(oldp+690,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24))),2);
        bufp->chgCData(oldp+691,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24))),2);
        bufp->chgCData(oldp+692,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25))),2);
        bufp->chgCData(oldp+693,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25))),2);
        bufp->chgCData(oldp+694,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26))),2);
        bufp->chgCData(oldp+695,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26))),2);
        bufp->chgCData(oldp+696,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27))),2);
        bufp->chgCData(oldp+697,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27))),2);
        bufp->chgCData(oldp+698,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28))),2);
        bufp->chgCData(oldp+699,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28))),2);
        bufp->chgCData(oldp+700,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29))),2);
        bufp->chgCData(oldp+701,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29))),2);
        bufp->chgCData(oldp+702,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30))),2);
        bufp->chgCData(oldp+703,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30))),2);
        bufp->chgCData(oldp+704,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31))),2);
        bufp->chgCData(oldp+705,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31))),2);
        bufp->chgBit(oldp+706,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0));
        bufp->chgBit(oldp+707,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16));
        bufp->chgBit(oldp+708,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1));
        bufp->chgBit(oldp+709,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17));
        bufp->chgBit(oldp+710,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2));
        bufp->chgBit(oldp+711,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18));
        bufp->chgBit(oldp+712,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3));
        bufp->chgBit(oldp+713,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19));
        bufp->chgBit(oldp+714,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4));
        bufp->chgBit(oldp+715,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20));
        bufp->chgBit(oldp+716,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5));
        bufp->chgBit(oldp+717,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21));
        bufp->chgBit(oldp+718,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6));
        bufp->chgBit(oldp+719,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22));
        bufp->chgBit(oldp+720,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7));
        bufp->chgBit(oldp+721,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23));
        bufp->chgBit(oldp+722,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8));
        bufp->chgBit(oldp+723,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24));
        bufp->chgBit(oldp+724,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9));
        bufp->chgBit(oldp+725,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25));
        bufp->chgBit(oldp+726,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10));
        bufp->chgBit(oldp+727,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26));
        bufp->chgBit(oldp+728,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11));
        bufp->chgBit(oldp+729,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27));
        bufp->chgBit(oldp+730,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12));
        bufp->chgBit(oldp+731,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28));
        bufp->chgBit(oldp+732,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13));
        bufp->chgBit(oldp+733,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29));
        bufp->chgBit(oldp+734,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14));
        bufp->chgBit(oldp+735,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30));
        bufp->chgBit(oldp+736,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15));
        bufp->chgBit(oldp+737,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31));
        bufp->chgCData(oldp+738,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))),2);
        bufp->chgCData(oldp+739,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0),2);
        bufp->chgCData(oldp+740,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1))),2);
        bufp->chgCData(oldp+741,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1),2);
        bufp->chgCData(oldp+742,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2))),2);
        bufp->chgCData(oldp+743,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2),2);
        bufp->chgCData(oldp+744,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3))),2);
        bufp->chgCData(oldp+745,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3),2);
        bufp->chgCData(oldp+746,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4))),2);
        bufp->chgCData(oldp+747,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4),2);
        bufp->chgCData(oldp+748,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5))),2);
        bufp->chgCData(oldp+749,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5),2);
        bufp->chgCData(oldp+750,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6))),2);
        bufp->chgCData(oldp+751,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6),2);
        bufp->chgCData(oldp+752,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7))),2);
        bufp->chgCData(oldp+753,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7),2);
        bufp->chgCData(oldp+754,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8))),2);
        bufp->chgCData(oldp+755,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8),2);
        bufp->chgCData(oldp+756,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9))),2);
        bufp->chgCData(oldp+757,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9),2);
        bufp->chgCData(oldp+758,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10))),2);
        bufp->chgCData(oldp+759,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10),2);
        bufp->chgCData(oldp+760,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11))),2);
        bufp->chgCData(oldp+761,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11),2);
        bufp->chgCData(oldp+762,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12))),2);
        bufp->chgCData(oldp+763,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12),2);
        bufp->chgCData(oldp+764,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13))),2);
        bufp->chgCData(oldp+765,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13),2);
        bufp->chgCData(oldp+766,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14))),2);
        bufp->chgCData(oldp+767,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14),2);
        bufp->chgCData(oldp+768,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15))),2);
        bufp->chgCData(oldp+769,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15),2);
        bufp->chgCData(oldp+770,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))),2);
        bufp->chgCData(oldp+771,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))),2);
        bufp->chgCData(oldp+772,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))),2);
        bufp->chgCData(oldp+773,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))),2);
        bufp->chgCData(oldp+774,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))),2);
        bufp->chgCData(oldp+775,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))),2);
        bufp->chgCData(oldp+776,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))),2);
        bufp->chgCData(oldp+777,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))),2);
        bufp->chgCData(oldp+778,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))),2);
        bufp->chgCData(oldp+779,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))),2);
        bufp->chgCData(oldp+780,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))),2);
        bufp->chgCData(oldp+781,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))),2);
        bufp->chgCData(oldp+782,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))),2);
        bufp->chgCData(oldp+783,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))),2);
        bufp->chgCData(oldp+784,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))),2);
        bufp->chgCData(oldp+785,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))),2);
        bufp->chgCData(oldp+786,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))),2);
        bufp->chgCData(oldp+787,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))),2);
        bufp->chgCData(oldp+788,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))),2);
        bufp->chgCData(oldp+789,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))),2);
        bufp->chgCData(oldp+790,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))),2);
        bufp->chgCData(oldp+791,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))),2);
        bufp->chgCData(oldp+792,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))),2);
        bufp->chgCData(oldp+793,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))),2);
        bufp->chgCData(oldp+794,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))),2);
        bufp->chgCData(oldp+795,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))),2);
        bufp->chgCData(oldp+796,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))),2);
        bufp->chgCData(oldp+797,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))),2);
        bufp->chgCData(oldp+798,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))),2);
        bufp->chgCData(oldp+799,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))),2);
        bufp->chgCData(oldp+800,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))),2);
        bufp->chgCData(oldp+801,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))),2);
        bufp->chgBit(oldp+802,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL));
        bufp->chgBit(oldp+803,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR));
        bufp->chgBit(oldp+804,((1U & (~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B))));
        bufp->chgCData(oldp+805,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
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
        bufp->chgSData(oldp+806,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
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
        bufp->chgCData(oldp+807,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
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
        bufp->chgSData(oldp+808,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
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
        bufp->chgBit(oldp+809,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL));
        bufp->chgBit(oldp+810,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR));
        bufp->chgBit(oldp+811,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 1U)))));
        bufp->chgCData(oldp+812,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
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
        bufp->chgSData(oldp+813,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
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
        bufp->chgCData(oldp+814,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
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
        bufp->chgSData(oldp+815,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
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
        bufp->chgBit(oldp+816,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL));
        bufp->chgBit(oldp+817,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR));
        bufp->chgBit(oldp+818,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 2U)))));
        bufp->chgCData(oldp+819,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
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
        bufp->chgSData(oldp+820,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
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
        bufp->chgCData(oldp+821,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
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
        bufp->chgSData(oldp+822,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
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
        bufp->chgBit(oldp+823,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL));
        bufp->chgBit(oldp+824,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR));
        bufp->chgBit(oldp+825,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 3U)))));
        bufp->chgCData(oldp+826,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
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
        bufp->chgSData(oldp+827,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
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
        bufp->chgCData(oldp+828,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
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
        bufp->chgSData(oldp+829,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
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
        bufp->chgBit(oldp+830,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL));
        bufp->chgBit(oldp+831,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR));
        bufp->chgBit(oldp+832,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 4U)))));
        bufp->chgBit(oldp+833,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))));
        bufp->chgBit(oldp+834,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)))));
        bufp->chgBit(oldp+835,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)))));
        bufp->chgBit(oldp+836,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)))));
        bufp->chgBit(oldp+837,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)))));
        bufp->chgBit(oldp+838,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)))));
        bufp->chgBit(oldp+839,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)))));
        bufp->chgBit(oldp+840,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)))));
        bufp->chgBit(oldp+841,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)))));
        bufp->chgBit(oldp+842,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)))));
        bufp->chgBit(oldp+843,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)))));
        bufp->chgBit(oldp+844,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)))));
        bufp->chgBit(oldp+845,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)))));
        bufp->chgBit(oldp+846,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)))));
        bufp->chgBit(oldp+847,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)))));
        bufp->chgBit(oldp+848,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)))));
        bufp->chgBit(oldp+849,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))));
        bufp->chgBit(oldp+850,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1))))));
        bufp->chgBit(oldp+851,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2))))));
        bufp->chgBit(oldp+852,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3))))));
        bufp->chgBit(oldp+853,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4))))));
        bufp->chgBit(oldp+854,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5))))));
        bufp->chgBit(oldp+855,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6))))));
        bufp->chgBit(oldp+856,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7))))));
        bufp->chgBit(oldp+857,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8))))));
        bufp->chgBit(oldp+858,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9))))));
        bufp->chgBit(oldp+859,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10))))));
        bufp->chgBit(oldp+860,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11))))));
        bufp->chgBit(oldp+861,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12))))));
        bufp->chgBit(oldp+862,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13))))));
        bufp->chgBit(oldp+863,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14))))));
        bufp->chgBit(oldp+864,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15))))));
        bufp->chgCData(oldp+865,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
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
        bufp->chgSData(oldp+866,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
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
        bufp->chgCData(oldp+867,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                   << 7U) | (((((~ 
                                                 (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                  >> 4U)) 
                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                               | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                  | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                              << 6U) 
                                             | (((((~ 
                                                    (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                     >> 4U)) 
                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                  | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                     | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                 << 5U) 
                                                | (((((~ 
                                                       (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                     | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                        | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                    << 4U) 
                                                   | (((((~ 
                                                          (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                           >> 4U)) 
                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                        | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                       << 3U) 
                                                      | (((((~ 
                                                             (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                              >> 4U)) 
                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                           | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                          << 2U) 
                                                         | (((((~ 
                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                 >> 4U)) 
                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                              | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                             << 1U) 
                                                            | (((~ 
                                                                 (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                  >> 4U)) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                               | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                  | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))),8);
        bufp->chgSData(oldp+868,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                         >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))) 
                                   << 0xfU) | (((((~ 
                                                   (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))) 
                                                << 0xeU) 
                                               | (((((~ 
                                                      (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                                    | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))) 
                                                   << 0xdU) 
                                                  | (((((~ 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                                       | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))) 
                                                      << 0xcU) 
                                                     | (((((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                             >> 4U)) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                                          | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))) 
                                                         << 0xbU) 
                                                        | (((((~ 
                                                               (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                >> 4U)) 
                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))) 
                                                            << 0xaU) 
                                                           | (((((~ 
                                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                   >> 4U)) 
                                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))) 
                                                               << 9U) 
                                                              | (((((~ 
                                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                      >> 4U)) 
                                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                                                   | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))) 
                                                                  << 8U) 
                                                                 | (((((~ 
                                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                         >> 4U)) 
                                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                                                      | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                                                     << 7U) 
                                                                    | (((((~ 
                                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                            >> 4U)) 
                                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                                                         | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                                                        << 6U) 
                                                                       | (((((~ 
                                                                              (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                               >> 4U)) 
                                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                                            | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                                           << 5U) 
                                                                          | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                                               | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                                              << 4U) 
                                                                             | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                                                << 3U) 
                                                                                | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                                                << 2U) 
                                                                                | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                                                << 1U) 
                                                                                | (((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))))))))))),16);
        bufp->chgIData(oldp+869,((~ vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)),32);
        bufp->chgBit(oldp+870,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 2U)))));
        bufp->chgBit(oldp+871,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 5U)))));
        bufp->chgBit(oldp+872,((1U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)));
        bufp->chgBit(oldp+873,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 1U))));
        bufp->chgBit(oldp+874,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 3U)))));
        bufp->chgBit(oldp+875,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 4U)))));
        bufp->chgBit(oldp+876,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 6U)))));
        bufp->chgBit(oldp+877,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+878,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+879,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+880,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 2U))));
        bufp->chgBit(oldp+881,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 3U))));
        bufp->chgBit(oldp+882,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 4U))));
        bufp->chgBit(oldp+883,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+884,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+885,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+886,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+887,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+888,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1fU)))));
        bufp->chgCData(oldp+889,(((0x40U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0xeU)) 
                                            << 6U)) 
                                  | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0))),7);
        bufp->chgBit(oldp+890,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x1eU)))));
        bufp->chgCData(oldp+891,(((0x20U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
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
        bufp->chgBit(oldp+892,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 5U))));
        bufp->chgBit(oldp+893,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 6U))));
        bufp->chgBit(oldp+894,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 7U)))));
        bufp->chgBit(oldp+895,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 8U)))));
        bufp->chgBit(oldp+896,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 9U)))));
        bufp->chgBit(oldp+897,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+898,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+899,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+900,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+901,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+902,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+903,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+904,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+905,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+906,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+907,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+908,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 0x18U)))));
        bufp->chgCData(oldp+909,(((0x80U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x18U)) 
                                            << 7U)) 
                                  | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0))),8);
        bufp->chgSData(oldp+910,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
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
        bufp->chgCData(oldp+911,(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9),8);
        bufp->chgBit(oldp+912,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xcU))));
        bufp->chgBit(oldp+913,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xdU))));
        bufp->chgBit(oldp+914,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xeU))));
        bufp->chgCData(oldp+915,(((0x40U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 8U)) 
                                  | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0))),7);
        bufp->chgBit(oldp+916,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x14U))));
        bufp->chgSData(oldp+917,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
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
        bufp->chgBit(oldp+918,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x15U))));
        bufp->chgBit(oldp+919,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+920,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1dU))));
        bufp->chgCData(oldp+921,(((0x80U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
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
        bufp->chgSData(oldp+922,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
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
        bufp->chgBit(oldp+923,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+924,((((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7))) 
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
        bufp->chgSData(oldp+925,((((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36))) 
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
        bufp->chgCData(oldp+926,((((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                   << 4U) | (((IData)(
                                                      (7U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))) 
                                              << 3U) 
                                             | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23))) 
                                                 << 2U) 
                                                | (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2))))),5);
        bufp->chgIData(oldp+927,(vlSelf->TOP__DOT__ID__DOT__DecoderOut_orMatrixOutputs),22);
        bufp->chgCData(oldp+928,(vlSelf->TOP__DOT__ID__DOT__Type),3);
        bufp->chgBit(oldp+929,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen));
        bufp->chgIData(oldp+930,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0),32);
        bufp->chgIData(oldp+931,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1),32);
        bufp->chgIData(oldp+932,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2),32);
        bufp->chgIData(oldp+933,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3),32);
        bufp->chgIData(oldp+934,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4),32);
        bufp->chgIData(oldp+935,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5),32);
        bufp->chgIData(oldp+936,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6),32);
        bufp->chgIData(oldp+937,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7),32);
        bufp->chgIData(oldp+938,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8),32);
        bufp->chgIData(oldp+939,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9),32);
        bufp->chgIData(oldp+940,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10),32);
        bufp->chgIData(oldp+941,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11),32);
        bufp->chgIData(oldp+942,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12),32);
        bufp->chgIData(oldp+943,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13),32);
        bufp->chgIData(oldp+944,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14),32);
        bufp->chgIData(oldp+945,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15),32);
        bufp->chgIData(oldp+946,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16),32);
        bufp->chgIData(oldp+947,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17),32);
        bufp->chgIData(oldp+948,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18),32);
        bufp->chgIData(oldp+949,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19),32);
        bufp->chgIData(oldp+950,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20),32);
        bufp->chgIData(oldp+951,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21),32);
        bufp->chgIData(oldp+952,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22),32);
        bufp->chgIData(oldp+953,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23),32);
        bufp->chgIData(oldp+954,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24),32);
        bufp->chgIData(oldp+955,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25),32);
        bufp->chgIData(oldp+956,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26),32);
        bufp->chgIData(oldp+957,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27),32);
        bufp->chgIData(oldp+958,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28),32);
        bufp->chgIData(oldp+959,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29),32);
        bufp->chgIData(oldp+960,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30),32);
        bufp->chgIData(oldp+961,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31),32);
        bufp->chgBit(oldp+962,(vlSelf->TOP__DOT__IF__DOT__pcBrEnableReg));
        bufp->chgBit(oldp+963,(vlSelf->TOP__DOT__IF__DOT__pcBrRecordReg));
        bufp->chgIData(oldp+964,(vlSelf->TOP__DOT__IF__DOT__brBuffer),32);
        bufp->chgBit(oldp+965,(vlSelf->TOP__DOT__IF__DOT__brBufferValid));
        bufp->chgIData(oldp+966,(((IData)(4U) + vlSelf->TOP__DOT__IF__DOT__pcReg)),32);
        bufp->chgIData(oldp+967,(((IData)(vlSelf->TOP__DOT__IF_io_pcBrEnable)
                                   ? vlSelf->TOP__DOT__IF_io_pcBr
                                   : ((IData)(4U) + vlSelf->TOP__DOT__IF__DOT__pcReg))),32);
        bufp->chgBit(oldp+968,(vlSelf->TOP__DOT__IF__DOT__rFireReg));
        bufp->chgIData(oldp+969,(vlSelf->TOP__DOT__IF__DOT__rdataReg),32);
        bufp->chgCData(oldp+970,(vlSelf->TOP__DOT__InstRam__DOT__rstate),3);
        bufp->chgCData(oldp+971,(vlSelf->TOP__DOT__InstRam__DOT__awstate),3);
        bufp->chgCData(oldp+972,(vlSelf->TOP__DOT__InstRam__DOT__wstate),3);
        bufp->chgCData(oldp+973,(vlSelf->TOP__DOT__InstRam__DOT__nxt_wstate),3);
        bufp->chgCData(oldp+974,((3U & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))),2);
        bufp->chgIData(oldp+975,(((1U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                                   ? VL_SHIFTL_III(32,32,32, vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
                                   : vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2)),32);
        bufp->chgCData(oldp+976,(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput),4);
        bufp->chgCData(oldp+977,((0xfU & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))),4);
        bufp->chgBit(oldp+978,((1U & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))));
        bufp->chgBit(oldp+979,((1U & (~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                         >> 1U)))));
        bufp->chgBit(oldp+980,((1U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)));
        bufp->chgBit(oldp+981,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                      >> 1U))));
        bufp->chgBit(oldp+982,((1U & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))));
        bufp->chgBit(oldp+983,((1U & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                      >> 1U))));
        bufp->chgCData(oldp+984,(((2U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                           & (~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                 >> 1U))) 
                                          << 1U) | 
                                         ((((~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                >> 1U)) 
                                            & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                           << 1U) | 
                                          (0xfffffffeU 
                                           & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))))) 
                                  | (IData)((0U == 
                                             (3U & (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))))),2);
        bufp->chgCData(oldp+985,(((2U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                           << 1U) & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut) 
                                         | ((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                             & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                << 1U)) 
                                            | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)))) 
                                  | (1U & (((~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)) 
                                            & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                               >> 1U)) 
                                           | ((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                               & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                              | ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                 >> 1U)))))),2);
        bufp->chgBit(oldp+986,(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg));
        bufp->chgBit(oldp+987,(vlSelf->TOP__DOT__MEM__DOT__awFireReg));
        bufp->chgBit(oldp+988,(vlSelf->TOP__DOT__MEM__DOT__wFireReg));
        bufp->chgBit(oldp+989,(((IData)(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg) 
                                | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead))));
        bufp->chgBit(oldp+990,(((IData)(vlSelf->TOP__DOT__MEM__DOT__awFireReg) 
                                | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite))));
        bufp->chgBit(oldp+991,(((IData)(vlSelf->TOP__DOT__MEM__DOT__wFireReg) 
                                | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite))));
        bufp->chgIData(oldp+992,(vlSelf->TOP__DOT__WB__DOT__rdataShift0),32);
        bufp->chgIData(oldp+993,(vlSelf->TOP__DOT__WB__DOT__rdataShift1),32);
        bufp->chgBit(oldp+994,(vlSelf->TOP__DOT__WB__DOT__rdataSignal));
        bufp->chgIData(oldp+995,(((1U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                   ? ((((IData)(vlSelf->TOP__DOT__WB__DOT__rdataSignal)
                                         ? 0xffffU : 0U) 
                                       << 0x10U) | 
                                      (0xffffU & vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                   : ((0U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                       ? ((((IData)(vlSelf->TOP__DOT__WB__DOT__rdataSignal)
                                             ? 0xffffffU
                                             : 0U) 
                                           << 8U) | 
                                          (0xffU & vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                       : vlSelf->TOP__DOT__WB__DOT__rdataShift1))),32);
        bufp->chgBit(oldp+996,(vlSelf->TOP__DOT__WB__DOT__rDataFireReg));
        bufp->chgBit(oldp+997,(vlSelf->TOP__DOT__WB__DOT__bFireReg));
        bufp->chgBit(oldp+998,(((IData)(vlSelf->TOP__DOT__WB__DOT__rDataFireReg) 
                                | ((IData)(vlSelf->TOP__DOT__DataRam__DOT__rstate) 
                                   >> 2U))));
        bufp->chgBit(oldp+999,(((IData)(vlSelf->TOP__DOT__WB__DOT__bFireReg) 
                                | ((IData)(vlSelf->TOP__DOT__DataRam__DOT__wstate) 
                                   >> 2U))));
    }
    bufp->chgBit(oldp+1000,(vlSelf->clock));
    bufp->chgBit(oldp+1001,(vlSelf->reset));
    bufp->chgIData(oldp+1002,(vlSelf->io_commit_pc),32);
    bufp->chgIData(oldp+1003,(vlSelf->io_commit_inst),32);
    bufp->chgCData(oldp+1004,(vlSelf->io_commit_rd),5);
    bufp->chgBit(oldp+1005,(vlSelf->io_commit_wen));
    bufp->chgIData(oldp+1006,(vlSelf->io_commit_wdata),32);
    bufp->chgBit(oldp+1007,(vlSelf->io_commit_commit));
    bufp->chgBit(oldp+1008,(vlSelf->io_commit_halt));
    bufp->chgBit(oldp+1009,(vlSelf->TOP__DOT__IF_io_Pre2IF_valid));
    bufp->chgIData(oldp+1010,(((0U == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0xfU)))
                                ? 0U : ((((0x1fU & 
                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                         & (IData)(vlSelf->io_commit_wen))
                                         ? vlSelf->io_commit_wdata
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
    bufp->chgIData(oldp+1011,(((0U == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x14U)))
                                ? 0U : ((((0x1fU & 
                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 0x14U)) 
                                          == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                         & (IData)(vlSelf->io_commit_wen))
                                         ? vlSelf->io_commit_wdata
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
    bufp->chgBit(oldp+1012,(vlSelf->TOP__DOT__InstRam_arvalid));
    bufp->chgCData(oldp+1013,(vlSelf->TOP__DOT__InstRam__DOT__nxt_rstate),3);
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
}
