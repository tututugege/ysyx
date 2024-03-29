// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimpleCpu__Syms.h"


void VSimpleCpu___024root__trace_chg_0_sub_0(VSimpleCpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimpleCpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root__trace_chg_0\n"); );
    // Init
    VSimpleCpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleCpu___024root*>(voidSelf);
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimpleCpu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSimpleCpu___024root__trace_chg_0_sub_0(VSimpleCpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->SimpleCpu__DOT__RF_io_wdata),32);
        bufp->chgIData(oldp+1,((((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0))) 
                                 & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                     << 8U) | (0xffU 
                                               & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                | (((- (IData)((0U 
                                                != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)))) 
                                    & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                   | ((- (IData)((1U 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0xdU)))) 
                                      & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw)))),32);
        bufp->chgIData(oldp+2,(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg),32);
        bufp->chgIData(oldp+3,(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw),32);
        bufp->chgBit(oldp+4,(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+5,(((IData)(((0x23U == (0x3fU 
                                                  & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                       & (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                              | (IData)(((0x23U == 
                                          (0x7fU & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                         & (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0)))))));
        bufp->chgBit(oldp+6,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))));
        bufp->chgBit(oldp+7,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))));
        bufp->chgCData(oldp+8,(((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                       >> 0xcU)) | 
                                (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)))),2);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                          >> 7U))),5);
        bufp->chgBit(oldp+12,(((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10)) 
                               | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrRead))));
        bufp->chgIData(oldp+13,(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg),32);
        bufp->chgIData(oldp+14,(vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm),32);
        bufp->chgCData(oldp+15,(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp),4);
        bufp->chgCData(oldp+16,(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1),2);
        bufp->chgCData(oldp+17,((3U & (vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h7a85f64f__0 
                                       >> 0xdU))),2);
        bufp->chgCData(oldp+18,(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc),2);
        bufp->chgCData(oldp+19,(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond),2);
        bufp->chgCData(oldp+20,(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype),2);
        bufp->chgBit(oldp+21,(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrRead));
        bufp->chgBit(oldp+22,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29))));
        bufp->chgBit(oldp+23,((0xffffffffU == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36)));
        bufp->chgBit(oldp+24,((0xffffffffU == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_74)));
        bufp->chgIData(oldp+25,(vlSelf->SimpleCpu__DOT__RF_io_rdata1),32);
        bufp->chgIData(oldp+26,(vlSelf->SimpleCpu__DOT__RF_io_rdata2),32);
        bufp->chgIData(oldp+27,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din),32);
        bufp->chgIData(oldp+28,(vlSelf->SimpleCpu__DOT__Alu_io_B),32);
        bufp->chgIData(oldp+29,(vlSelf->SimpleCpu__DOT__Alu_io_Result),32);
        bufp->chgBit(oldp+30,((1U & (~ (IData)((0U 
                                                != vlSelf->SimpleCpu__DOT__Alu_io_Result))))));
        bufp->chgBit(oldp+31,((1U & ((~ (IData)((0xfU 
                                                 == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))) 
                                     ^ (IData)((vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
                                                >> 0x20U))))));
        bufp->chgIData(oldp+32,(vlSelf->SimpleCpu__DOT__PcReg),32);
        bufp->chgCData(oldp+33,(((8U & ((0x3ffff8U 
                                         & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 0xaU)) 
                                        | ((((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                             & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                >> 1U)) 
                                            << 3U) 
                                           | (0xfffffff8U 
                                              & ((vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                  << 3U) 
                                                 & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                    << 2U)))))) 
                                 | ((4U & ((0x1ffffcU 
                                            & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                               >> 0xbU)) 
                                           | ((((0U 
                                                 != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                                & vlSelf->SimpleCpu__DOT__Alu_io_Result) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (((~ 
                                                      ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                       >> 2U)) 
                                                     << 2U) 
                                                    & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                       << 1U)))))) 
                                    | ((2U & ((((0U 
                                                 != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                                & (~ 
                                                   ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                    >> 3U))) 
                                               << 1U) 
                                              | ((0xffffeU 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0xcU)) 
                                                 | ((vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                     & (~ 
                                                        ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                         >> 3U))) 
                                                    << 1U)))) 
                                       | (IData)((0U 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput)))))))),4);
        bufp->chgSData(oldp+34,((0xfffU & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm)),12);
        bufp->chgIData(oldp+35,(((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
                                  ? 0U : ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
                                           ? 0xffffffffU
                                           : ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
                                               ? vlSelf->SimpleCpu__DOT__CsrData
                                               : 0U)))),32);
        bufp->chgIData(oldp+36,(((2U & (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
                                  ? vlSelf->SimpleCpu__DOT__CsrData
                                  : 0xffffffffU)),32);
        bufp->chgBit(oldp+37,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))));
        bufp->chgIData(oldp+38,(((0x343U == (0xfffU 
                                             & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                  ? vlSelf->SimpleCpu__DOT__Csr__DOT__mtvalReg
                                  : ((0x342U == (0xfffU 
                                                 & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                      ? vlSelf->SimpleCpu__DOT__Csr__DOT__mcauseReg
                                      : ((0x341U == 
                                          (0xfffU & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                          ? vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg
                                          : ((0x305U 
                                              == (0xfffU 
                                                  & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                              ? vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg
                                              : ((0x300U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                  ? vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg
                                                  : 0U)))))),32);
        bufp->chgIData(oldp+39,(vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg),32);
        bufp->chgIData(oldp+40,(vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg),32);
        bufp->chgBit(oldp+41,((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))));
        bufp->chgBit(oldp+42,((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))));
        bufp->chgIData(oldp+43,(((IData)(4U) + vlSelf->SimpleCpu__DOT__PcReg)),32);
        bufp->chgIData(oldp+44,((vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                 + vlSelf->SimpleCpu__DOT__PcReg)),32);
        bufp->chgIData(oldp+45,(((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))
                                  ? vlSelf->SimpleCpu__DOT__RF_io_rdata1
                                  : (vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                     + vlSelf->SimpleCpu__DOT__PcReg))),32);
        bufp->chgBit(oldp+46,((1U & ((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond)) 
                                     | ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                         ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                         : ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                             ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                             : ((~ (IData)(
                                                           (0U 
                                                            != vlSelf->SimpleCpu__DOT__Alu_io_Result))) 
                                                ^ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xcU))))))));
        bufp->chgBit(oldp+47,(((((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond)) 
                                 | ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                     ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                     : ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                         ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                         : ((~ (IData)(
                                                       (0U 
                                                        != vlSelf->SimpleCpu__DOT__Alu_io_Result))) 
                                            ^ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                               >> 0xcU))))) 
                                & (1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))) 
                               | (2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc)))));
        bufp->chgIData(oldp+48,((((((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond)) 
                                    | ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                        ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                        : ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                            ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                            : ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->SimpleCpu__DOT__Alu_io_Result))) 
                                               ^ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xcU))))) 
                                   & (1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))) 
                                  | (2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc)))
                                  ? ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))
                                      ? vlSelf->SimpleCpu__DOT__RF_io_rdata1
                                      : (vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                         + vlSelf->SimpleCpu__DOT__PcReg))
                                  : ((IData)(4U) + vlSelf->SimpleCpu__DOT__PcReg))),32);
        bufp->chgCData(oldp+49,(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput),4);
        bufp->chgCData(oldp+50,((0xfU & (~ (IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput)))),4);
        bufp->chgBit(oldp+51,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                        >> 2U)))));
        bufp->chgBit(oldp+52,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                        >> 3U)))));
        bufp->chgBit(oldp+53,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0xdU))));
        bufp->chgBit(oldp+55,((1U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
        bufp->chgBit(oldp+56,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                     >> 1U))));
        bufp->chgCData(oldp+57,(((2U & ((((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                          & (~ ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                >> 3U))) 
                                         << 1U) | (
                                                   (0xffffeU 
                                                    & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0xcU)) 
                                                   | ((vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                       & (~ 
                                                          ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                           >> 3U))) 
                                                      << 1U)))) 
                                 | (IData)((0U == (0xcU 
                                                   & (IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput)))))),2);
        bufp->chgCData(oldp+58,(((2U & ((0xffffeU & 
                                         (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                          >> 0xcU)) 
                                        | ((((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                             & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                >> 1U)) 
                                            << 1U) 
                                           | (0xfffffffeU 
                                              & ((vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                  << 1U) 
                                                 & vlSelf->SimpleCpu__DOT__Alu_io_Result))))) 
                                 | (1U & ((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                           >> 0xdU) 
                                          | (((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                              & vlSelf->SimpleCpu__DOT__Alu_io_Result) 
                                             | ((~ 
                                                 ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                  >> 2U)) 
                                                & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                   >> 1U))))))),2);
        bufp->chgIData(oldp+59,(vlSelf->SimpleCpu__DOT__CsrData),32);
        bufp->chgBit(oldp+60,((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14))));
        bufp->chgBit(oldp+61,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18))));
        bufp->chgCData(oldp+62,((0x1fU & vlSelf->SimpleCpu__DOT__Alu_io_B)),5);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.io_dout),32);
        bufp->chgCData(oldp+64,((0xfU & (~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)))),4);
        bufp->chgBit(oldp+65,((1U & (~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)))));
        bufp->chgBit(oldp+66,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                        >> 1U)))));
        bufp->chgBit(oldp+67,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                        >> 2U)))));
        bufp->chgBit(oldp+68,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                        >> 3U)))));
        bufp->chgBit(oldp+69,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))));
        bufp->chgBit(oldp+70,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))));
        bufp->chgBit(oldp+71,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19))));
        bufp->chgBit(oldp+72,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41))));
        bufp->chgSData(oldp+73,((((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18))) 
                                  << 9U) | (((IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16))) 
                                             << 8U) 
                                            | (((IData)(
                                                        (7U 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14))) 
                                                << 7U) 
                                               | (((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12))) 
                                                   << 6U) 
                                                  | (((IData)(
                                                              (3U 
                                                               == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10))) 
                                                      << 5U) 
                                                     | (((IData)(
                                                                 (7U 
                                                                  == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8))) 
                                                         << 4U) 
                                                        | (((IData)(
                                                                    (3U 
                                                                     == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_6))) 
                                                            << 3U) 
                                                           | (((IData)(
                                                                       (0xfU 
                                                                        == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4))) 
                                                               << 2U) 
                                                              | (((IData)(
                                                                          (0xfU 
                                                                           == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2))) 
                                                                  << 1U) 
                                                                 | (0xfU 
                                                                    == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))))))))))),10);
        bufp->chgBit(oldp+74,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T))));
        bufp->chgBit(oldp+75,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2))));
        bufp->chgBit(oldp+76,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4))));
        bufp->chgBit(oldp+77,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_6))));
        bufp->chgBit(oldp+78,((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8))));
        bufp->chgBit(oldp+79,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10))));
        bufp->chgBit(oldp+80,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12))));
        bufp->chgBit(oldp+81,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16))));
        bufp->chgBit(oldp+82,((1U & (~ (IData)((0xfU 
                                                == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))))));
        bufp->chgIData(oldp+83,(vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB),32);
        bufp->chgQData(oldp+84,((0x1ffffffffULL & vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1)),33);
        bufp->chgIData(oldp+86,((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1)),32);
        bufp->chgBit(oldp+87,((1U & (IData)((vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
                                             >> 0x20U)))));
        bufp->chgIData(oldp+88,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 ^ vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+89,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 | vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+90,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 & vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+91,((1U & (((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1) 
                                        & (vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB 
                                           >> 0x1fU)) 
                                       | (((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1) 
                                           ^ (vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB 
                                              >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
                                                     >> 0x1fU)))))),32);
        bufp->chgIData(oldp+92,((1U & ((~ (IData)((0xfU 
                                                   == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))) 
                                       ^ (IData)((vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
                                                  >> 0x20U))))),32);
        bufp->chgBit(oldp+93,((1U & vlSelf->SimpleCpu__DOT__Alu_io_B)));
        bufp->chgBit(oldp+94,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0));
        bufp->chgBit(oldp+95,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1));
        bufp->chgBit(oldp+96,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1));
        bufp->chgBit(oldp+97,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1));
        bufp->chgBit(oldp+98,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1));
        bufp->chgBit(oldp+99,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1));
        bufp->chgBit(oldp+100,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1));
        bufp->chgBit(oldp+101,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1));
        bufp->chgBit(oldp+102,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1));
        bufp->chgBit(oldp+103,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1));
        bufp->chgBit(oldp+104,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1));
        bufp->chgBit(oldp+105,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1));
        bufp->chgBit(oldp+106,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1));
        bufp->chgBit(oldp+107,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1));
        bufp->chgBit(oldp+108,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1));
        bufp->chgBit(oldp+109,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1));
        bufp->chgBit(oldp+110,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1));
        bufp->chgBit(oldp+111,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1));
        bufp->chgBit(oldp+112,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1));
        bufp->chgBit(oldp+113,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1));
        bufp->chgBit(oldp+114,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1));
        bufp->chgBit(oldp+115,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1));
        bufp->chgBit(oldp+116,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1));
        bufp->chgBit(oldp+117,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1));
        bufp->chgBit(oldp+118,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1));
        bufp->chgBit(oldp+119,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1));
        bufp->chgBit(oldp+120,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1));
        bufp->chgBit(oldp+121,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1));
        bufp->chgBit(oldp+122,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1));
        bufp->chgBit(oldp+123,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1));
        bufp->chgBit(oldp+124,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1));
        bufp->chgBit(oldp+125,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1));
        bufp->chgBit(oldp+126,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1));
        bufp->chgIData(oldp+127,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout),32);
        bufp->chgBit(oldp+128,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 1U))));
        bufp->chgBit(oldp+129,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)));
        bufp->chgBit(oldp+130,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+131,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+132,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+133,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+134,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+135,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+136,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+137,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+138,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+139,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+140,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+142,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+143,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+144,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+145,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+146,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+148,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+149,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+150,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+151,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+152,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+153,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+154,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+155,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+156,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+157,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+158,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+159,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+160,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+161,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout),32);
        bufp->chgBit(oldp+162,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 2U))));
        bufp->chgBit(oldp+163,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)));
        bufp->chgBit(oldp+164,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+165,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+166,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+167,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+168,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+170,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+171,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+173,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+174,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+175,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+177,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+178,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+179,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+180,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+181,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+182,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+183,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+184,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+185,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+186,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+187,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+188,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+189,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+190,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+191,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+192,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+193,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+194,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+195,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout),32);
        bufp->chgBit(oldp+196,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 3U))));
        bufp->chgBit(oldp+197,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)));
        bufp->chgBit(oldp+198,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+199,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+200,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+201,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+202,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+203,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+204,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+205,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+206,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+207,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+208,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+209,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+210,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+211,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+212,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+213,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+214,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+215,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+216,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+217,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+218,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+219,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+220,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+221,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+222,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+223,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+224,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+225,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+226,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+227,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+228,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+229,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout),32);
        bufp->chgBit(oldp+230,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 4U))));
        bufp->chgBit(oldp+231,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)));
        bufp->chgBit(oldp+232,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+233,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+234,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+235,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+236,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+237,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+238,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+239,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+240,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+241,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+242,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+243,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+244,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+245,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+246,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+247,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+248,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+249,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+250,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+251,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+252,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+253,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+254,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+255,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+256,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+257,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+258,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+259,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+260,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+261,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+262,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+263,(vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg),32);
        bufp->chgIData(oldp+264,(vlSelf->SimpleCpu__DOT__Csr__DOT__mcauseReg),32);
        bufp->chgIData(oldp+265,(vlSelf->SimpleCpu__DOT__Csr__DOT__mtvalReg),32);
        bufp->chgIData(oldp+266,((vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T 
                                  | (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T_1 
                                     & vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg))),32);
        bufp->chgIData(oldp+267,(vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecWdata),32);
        bufp->chgBit(oldp+268,(((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
                                & (0x300U == (0xfffU 
                                              & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm)))));
        bufp->chgBit(oldp+269,(((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
                                & (0x305U == (0xfffU 
                                              & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm)))));
        bufp->chgBit(oldp+270,((((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
                                 & (0x341U == (0xfffU 
                                               & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))) 
                                | (0xffffffffU == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36))));
        bufp->chgBit(oldp+271,((((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
                                 & (0x342U == (0xfffU 
                                               & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))) 
                                | (0xffffffffU == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36))));
        bufp->chgBit(oldp+272,(((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
                                & (0x343U == (0xfffU 
                                              & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm)))));
        bufp->chgIData(oldp+273,((~ vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)),32);
        bufp->chgBit(oldp+274,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 2U)))));
        bufp->chgBit(oldp+275,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 5U)))));
        bufp->chgBit(oldp+276,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 4U)))));
        bufp->chgBit(oldp+277,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+278,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+279,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+280,((1U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)));
        bufp->chgBit(oldp+281,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 1U))));
        bufp->chgBit(oldp+282,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 3U)))));
        bufp->chgBit(oldp+283,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 6U)))));
        bufp->chgBit(oldp+284,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 2U))));
        bufp->chgBit(oldp+285,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 3U))));
        bufp->chgBit(oldp+286,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 4U))));
        bufp->chgBit(oldp+287,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+288,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+289,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+290,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+291,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+292,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1fU)))));
        bufp->chgCData(oldp+293,(((0x40U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0xeU)) 
                                            << 6U)) 
                                  | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0))),7);
        bufp->chgBit(oldp+294,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1eU)))));
        bufp->chgCData(oldp+295,(((0x20U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x1aU)) 
                                            << 5U)) 
                                  | ((0x10U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x1bU)) 
                                               << 4U)) 
                                     | ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x1cU)) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                    >> 0x1dU)) 
                                                  << 2U)) 
                                           | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5f0b060b__0)))))),6);
        bufp->chgBit(oldp+296,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 5U))));
        bufp->chgBit(oldp+297,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 6U))));
        bufp->chgBit(oldp+298,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 7U)))));
        bufp->chgBit(oldp+299,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 8U)))));
        bufp->chgBit(oldp+300,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 9U)))));
        bufp->chgBit(oldp+301,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+302,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+303,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+304,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+305,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+306,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+307,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+308,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+309,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+310,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+311,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+312,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x18U)))));
        bufp->chgCData(oldp+313,(((0x80U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x18U)) 
                                            << 7U)) 
                                  | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0))),8);
        bufp->chgSData(oldp+314,(((0x8000U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0x10U)) 
                                              << 0xfU)) 
                                  | ((0x4000U & ((~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x11U)) 
                                                 << 0xeU)) 
                                     | ((0x2000U & 
                                         ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                              >> 0x12U)) 
                                          << 0xdU)) 
                                        | ((0x1000U 
                                            & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x13U)) 
                                               << 0xcU)) 
                                           | ((0x800U 
                                               & ((~ 
                                                   (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                    >> 0x14U)) 
                                                  << 0xbU)) 
                                              | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hcac90371__0))))))),16);
        bufp->chgCData(oldp+315,(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_hi_lo_9),8);
        bufp->chgBit(oldp+316,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0xcU))));
        bufp->chgBit(oldp+317,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0xeU))));
        bufp->chgCData(oldp+318,(((0x40U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 8U)) 
                                  | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0))),7);
        bufp->chgBit(oldp+319,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0x14U))));
        bufp->chgSData(oldp+320,(((0x8000U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0x10U)) 
                                              << 0xfU)) 
                                  | ((0x4000U & ((~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x11U)) 
                                                 << 0xeU)) 
                                     | ((0x2000U & 
                                         ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                              >> 0x12U)) 
                                          << 0xdU)) 
                                        | ((0x1000U 
                                            & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x13U)) 
                                               << 0xcU)) 
                                           | ((0x800U 
                                               & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 9U)) 
                                              | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hcac90371__0))))))),16);
        bufp->chgBit(oldp+321,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0x15U))));
        bufp->chgBit(oldp+322,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+323,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0x1dU))));
        bufp->chgCData(oldp+324,(((0x80U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x18U)) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x19U)) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                    >> 0x1aU)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 0x1bU)) 
                                             << 4U)) 
                                           | ((8U & 
                                               (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x19U)) 
                                              | ((4U 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x1bU)) 
                                                 | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5f0b060b__0)))))))),8);
        bufp->chgSData(oldp+325,(((0x8000U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0x10U)) 
                                              << 0xfU)) 
                                  | ((0x4000U & ((~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x11U)) 
                                                 << 0xeU)) 
                                     | ((0x2000U & 
                                         ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                              >> 0x12U)) 
                                          << 0xdU)) 
                                        | ((0x1000U 
                                            & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x13U)) 
                                               << 0xcU)) 
                                           | ((0x800U 
                                               & ((~ 
                                                   (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                    >> 0x14U)) 
                                                  << 0xbU)) 
                                              | ((0x400U 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0xbU)) 
                                                 | ((0x200U 
                                                     & ((~ 
                                                         (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                          >> 0x16U)) 
                                                        << 9U)) 
                                                    | ((0x100U 
                                                        & ((~ 
                                                            (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                             >> 0x17U)) 
                                                           << 8U)) 
                                                       | ((0x80U 
                                                           & ((~ 
                                                               (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                >> 0x18U)) 
                                                              << 7U)) 
                                                          | ((0x40U 
                                                              & ((~ 
                                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                   >> 0x19U)) 
                                                                 << 6U)) 
                                                             | ((0x20U 
                                                                 & ((~ 
                                                                     (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                      >> 0x1aU)) 
                                                                    << 5U)) 
                                                                | ((0x10U 
                                                                    & ((~ 
                                                                        (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                         >> 0x1bU)) 
                                                                       << 4U)) 
                                                                   | ((8U 
                                                                       & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                          >> 0x19U)) 
                                                                      | ((4U 
                                                                          & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                             >> 0x1bU)) 
                                                                         | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5f0b060b__0)))))))))))))))),16);
        bufp->chgBit(oldp+326,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+327,((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_34))) 
                                   << 6U) | (((IData)(
                                                      (0xffU 
                                                       == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_50))) 
                                              << 5U) 
                                             | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31))) 
                                                 << 4U) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29))) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (7U 
                                                                == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                                          << 1U) 
                                                         | (1U 
                                                            & ((0x1fU 
                                                                == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2)) 
                                                               | ((7U 
                                                                   == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8)) 
                                                                  | (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                     >> 3U))))))))))),7);
        bufp->chgIData(oldp+328,((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_46))) 
                                   << 0x1bU) | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_44))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_42))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0xffffffffU 
                                                                == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36)) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0xffffffffU 
                                                                   == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_74)) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_38))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_36))) 
                                                                << 0x15U) 
                                                               | vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h7a85f64f__0)))))))),28);
        bufp->chgCData(oldp+329,(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type),3);
        bufp->chgIData(oldp+330,(((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x14U))),32);
        bufp->chgIData(oldp+331,(((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 7U))))),32);
        bufp->chgIData(oldp+332,(((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0x800U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 7U)))))),32);
        bufp->chgIData(oldp+333,(((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x1fU) ? 0xfffU
                                     : 0U) << 0x14U) 
                                  | ((0xff000U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
                                     | ((0x800U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 0x14U)))))),32);
        bufp->chgIData(oldp+334,((0xfffff000U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)),32);
        bufp->chgCData(oldp+335,((((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h7e8a5b94__0) 
                                   << 3U) | (((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h9506ca72__0) 
                                              << 2U) 
                                             | (((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_he1e97e09__0) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h195eb17c__0))))),4);
        bufp->chgIData(oldp+336,((((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h195eb17c__0))) 
                                   & vlSelf->SimpleCpu__DOT__RF_io_rdata2) 
                                  | (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_he1e97e09__0))) 
                                      & VL_SHIFTL_III(32,32,32, vlSelf->SimpleCpu__DOT__RF_io_rdata2, 8U)) 
                                     | (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h9506ca72__0))) 
                                         & VL_SHIFTL_III(32,32,32, vlSelf->SimpleCpu__DOT__RF_io_rdata2, 0x10U)) 
                                        | ((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h7e8a5b94__0))) 
                                           & VL_SHIFTL_III(32,32,32, vlSelf->SimpleCpu__DOT__RF_io_rdata2, 0x18U)))))),32);
        bufp->chgIData(oldp+337,((0xffU | (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0xdU)))) 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0xdU)))) 
                                                  << 0x10U)) 
                                              | (0xff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((0U 
                                                                    != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                                                   | (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                      >> 0xdU))))) 
                                                    << 8U)))))),32);
        bufp->chgBit(oldp+338,(vlSelf->SimpleCpu__DOT__RF__DOT__Wen));
        bufp->chgIData(oldp+339,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0),32);
        bufp->chgIData(oldp+340,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1),32);
        bufp->chgIData(oldp+341,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2),32);
        bufp->chgIData(oldp+342,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3),32);
        bufp->chgIData(oldp+343,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4),32);
        bufp->chgIData(oldp+344,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5),32);
        bufp->chgIData(oldp+345,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6),32);
        bufp->chgIData(oldp+346,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7),32);
        bufp->chgIData(oldp+347,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8),32);
        bufp->chgIData(oldp+348,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9),32);
        bufp->chgIData(oldp+349,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10),32);
        bufp->chgIData(oldp+350,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11),32);
        bufp->chgIData(oldp+351,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12),32);
        bufp->chgIData(oldp+352,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13),32);
        bufp->chgIData(oldp+353,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14),32);
        bufp->chgIData(oldp+354,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15),32);
        bufp->chgIData(oldp+355,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16),32);
        bufp->chgIData(oldp+356,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17),32);
        bufp->chgIData(oldp+357,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18),32);
        bufp->chgIData(oldp+358,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19),32);
        bufp->chgIData(oldp+359,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20),32);
        bufp->chgIData(oldp+360,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21),32);
        bufp->chgIData(oldp+361,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22),32);
        bufp->chgIData(oldp+362,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23),32);
        bufp->chgIData(oldp+363,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24),32);
        bufp->chgIData(oldp+364,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25),32);
        bufp->chgIData(oldp+365,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26),32);
        bufp->chgIData(oldp+366,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27),32);
        bufp->chgIData(oldp+367,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28),32);
        bufp->chgIData(oldp+368,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29),32);
        bufp->chgIData(oldp+369,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30),32);
        bufp->chgIData(oldp+370,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31),32);
        bufp->chgBit(oldp+371,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0)) 
                                | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                   & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1)))));
        bufp->chgBit(oldp+372,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0))))));
        bufp->chgBit(oldp+373,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1))))));
        bufp->chgBit(oldp+374,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1))))));
        bufp->chgBit(oldp+375,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1))))));
        bufp->chgBit(oldp+376,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1))))));
        bufp->chgBit(oldp+377,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1))))));
        bufp->chgBit(oldp+378,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1))))));
        bufp->chgBit(oldp+379,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1))))));
        bufp->chgBit(oldp+380,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1))))));
        bufp->chgBit(oldp+381,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1))))));
        bufp->chgBit(oldp+382,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1))))));
        bufp->chgBit(oldp+383,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1))))));
        bufp->chgBit(oldp+384,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1))))));
        bufp->chgBit(oldp+385,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1))))));
        bufp->chgBit(oldp+386,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1))))));
        bufp->chgBit(oldp+387,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1))))));
        bufp->chgBit(oldp+388,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1))))));
        bufp->chgBit(oldp+389,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1))))));
        bufp->chgBit(oldp+390,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1))))));
        bufp->chgBit(oldp+391,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1))))));
        bufp->chgBit(oldp+392,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1))))));
        bufp->chgBit(oldp+393,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1))))));
        bufp->chgBit(oldp+394,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1))))));
        bufp->chgBit(oldp+395,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1))))));
        bufp->chgBit(oldp+396,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1))))));
        bufp->chgBit(oldp+397,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1))))));
        bufp->chgBit(oldp+398,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1))))));
        bufp->chgBit(oldp+399,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1))))));
        bufp->chgBit(oldp+400,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1))))));
        bufp->chgBit(oldp+401,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1))))));
        bufp->chgBit(oldp+402,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1))))));
        bufp->chgCData(oldp+403,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+404,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+405,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+406,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+407,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+409,((1U & (~ vlSelf->SimpleCpu__DOT__Alu_io_B))));
        bufp->chgBit(oldp+410,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                            >> 2U))))));
        bufp->chgBit(oldp+411,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 3U))))));
        bufp->chgBit(oldp+412,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 2U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 4U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout))))));
        bufp->chgBit(oldp+413,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 3U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 5U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+414,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 4U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 6U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 2U)))))));
        bufp->chgBit(oldp+415,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 5U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 7U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 3U)))))));
        bufp->chgBit(oldp+416,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 6U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 8U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 4U)))))));
        bufp->chgBit(oldp+417,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 7U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 9U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 5U)))))));
        bufp->chgBit(oldp+418,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 0xaU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 6U)))))));
        bufp->chgBit(oldp+419,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 0xbU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 7U)))))));
        bufp->chgBit(oldp+420,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xcU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+421,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xdU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+422,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xeU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+423,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xfU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+424,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x10U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+425,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x11U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+426,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+427,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+428,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+429,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+430,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+431,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+432,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+433,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+434,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+435,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x17U)))))));
        bufp->chgBit(oldp+436,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+437,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+438,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1aU)))))));
        bufp->chgBit(oldp+439,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1bU)))))));
        bufp->chgBit(oldp+440,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1cU)))))));
        bufp->chgBit(oldp+441,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1dU)))))));
        bufp->chgCData(oldp+442,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+443,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+444,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+445,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+446,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+447,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+448,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 1U)))));
        bufp->chgBit(oldp+449,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                            >> 4U))))));
        bufp->chgBit(oldp+450,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 5U))))));
        bufp->chgBit(oldp+451,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 6U))))));
        bufp->chgBit(oldp+452,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 7U))))));
        bufp->chgBit(oldp+453,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 4U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 8U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout))))));
        bufp->chgBit(oldp+454,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 5U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 9U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+455,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 6U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xaU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 2U)))))));
        bufp->chgBit(oldp+456,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 7U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xbU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 3U)))))));
        bufp->chgBit(oldp+457,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xcU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 4U)))))));
        bufp->chgBit(oldp+458,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xdU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 5U)))))));
        bufp->chgBit(oldp+459,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0xeU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+460,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0xfU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+461,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x10U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+462,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x11U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+463,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+464,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+465,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+466,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+467,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+468,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+469,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+470,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+471,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+472,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+473,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+474,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+475,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+476,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x17U)))))));
        bufp->chgBit(oldp+477,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+478,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+479,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x1aU)))))));
        bufp->chgBit(oldp+480,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x1bU)))))));
        bufp->chgCData(oldp+481,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+482,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+483,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+484,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+485,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+487,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 2U)))));
        bufp->chgBit(oldp+488,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                            >> 8U))))));
        bufp->chgBit(oldp+489,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 9U))))));
        bufp->chgBit(oldp+490,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xaU))))));
        bufp->chgBit(oldp+491,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xbU))))));
        bufp->chgBit(oldp+492,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 4U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xcU))))));
        bufp->chgBit(oldp+493,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 5U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xdU))))));
        bufp->chgBit(oldp+494,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 6U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xeU))))));
        bufp->chgBit(oldp+495,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 7U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+496,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                           >> 0x10U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout))))));
        bufp->chgBit(oldp+497,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                           >> 0x11U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+498,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 2U)))))));
        bufp->chgBit(oldp+499,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 3U)))))));
        bufp->chgBit(oldp+500,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 4U)))))));
        bufp->chgBit(oldp+501,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 5U)))))));
        bufp->chgBit(oldp+502,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+503,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+504,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+505,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+506,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+507,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+508,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+509,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+510,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+511,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+512,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+513,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+514,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+515,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+516,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+517,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+518,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+519,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x17U)))))));
        bufp->chgCData(oldp+520,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+521,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+523,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+524,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+525,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+526,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 3U)))));
        bufp->chgBit(oldp+527,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+528,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+529,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+530,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+531,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 4U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+532,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 5U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+533,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 6U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+534,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 7U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+535,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 8U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+536,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 9U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+537,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xaU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+538,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xbU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+539,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xcU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+540,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xdU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+541,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xeU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+542,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xfU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+543,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))));
        bufp->chgBit(oldp+544,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 1U)))))));
        bufp->chgBit(oldp+545,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 2U)))))));
        bufp->chgBit(oldp+546,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 3U)))))));
        bufp->chgBit(oldp+547,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 4U)))))));
        bufp->chgBit(oldp+548,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 5U)))))));
        bufp->chgBit(oldp+549,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+550,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+551,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+552,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+553,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+554,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+555,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+556,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+557,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+558,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xfU)))))));
        bufp->chgCData(oldp+559,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+560,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+561,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+562,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+563,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+565,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 4U)))));
    }
    bufp->chgBit(oldp+566,(vlSelf->clock));
    bufp->chgBit(oldp+567,(vlSelf->reset));
    bufp->chgBit(oldp+568,(vlSelf->Halt));
    bufp->chgBit(oldp+569,(((~ (IData)(vlSelf->reset)) 
                            & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8)))));
    bufp->chgBit(oldp+570,(((~ (IData)(vlSelf->reset)) 
                            & ((IData)(((0x23U == (0x3fU 
                                                   & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                        & (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                               | (IData)(((0x23U == 
                                           (0x7fU & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                          & (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0))))))));
    bufp->chgCData(oldp+571,((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                               << 6U) | (((IData)((0U 
                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))) 
                                          << 5U) | 
                                         (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))) 
                                           << 4U) | 
                                          ((((IData)(
                                                     ((0x23U 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                      & (7U 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                                             | (IData)(
                                                       ((0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0))))) 
                                            << 3U) 
                                           | ((4U & 
                                               (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0xbU)) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->Halt)))))))),7);
    bufp->chgSData(oldp+572,(((((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T)) 
                                | ((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10)) 
                                   | ((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21)) 
                                      | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))))) 
                               << 0xdU) | (((IData)(
                                                    (0xfU 
                                                     == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41))) 
                                            << 0xcU) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19))) 
                                               << 0xbU) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))) 
                                                  << 0xaU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
                                                     << 9U) 
                                                    | (((IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8))) 
                                                        << 8U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_12))) 
                                                           << 7U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                                              << 6U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))) 
                                                                 << 5U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))) 
                                                                    << 4U) 
                                                                   | ((((IData)(
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                                                                        | (IData)(
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                                                & (3U 
                                                                                == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0))))) 
                                                                       << 3U) 
                                                                      | ((4U 
                                                                          & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->Halt))))))))))))))),14);
}

void VSimpleCpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root__trace_cleanup\n"); );
    // Init
    VSimpleCpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleCpu___024root*>(voidSelf);
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
