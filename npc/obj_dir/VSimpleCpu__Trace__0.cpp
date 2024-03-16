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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((IData)(((0x23U == (0x3fU 
                                                  & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                       & (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                              | (IData)(((0x23U == 
                                          (0x7fU & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                         & (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0)))))));
        bufp->chgBit(oldp+1,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))));
        bufp->chgCData(oldp+2,((3U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0xcU))),2);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 7U))),5);
        bufp->chgBit(oldp+6,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))));
        bufp->chgIData(oldp+7,(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg),32);
        bufp->chgIData(oldp+8,(vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm),32);
        bufp->chgCData(oldp+9,((0xfU & (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 9U))),4);
        bufp->chgCData(oldp+10,(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1),2);
        bufp->chgCData(oldp+11,(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2),2);
        bufp->chgCData(oldp+12,(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc),2);
        bufp->chgIData(oldp+13,(vlSelf->SimpleCpu__DOT__RF_io_rdata1),32);
        bufp->chgIData(oldp+14,(((0U == (0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0x14U)))
                                  ? 0U : ((0x1fU == 
                                           (0x1fU & 
                                            (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                             >> 0x14U)))
                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                      >> 0x14U)))
                                               ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0x14U)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x14U)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                         >> 0x14U)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27
                                                     : vlSelf->SimpleCpu__DOT__RF__DOT___GEN_90))))))),32);
        bufp->chgIData(oldp+15,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din),32);
        bufp->chgIData(oldp+16,(vlSelf->SimpleCpu__DOT__Alu_io_B),32);
        bufp->chgIData(oldp+17,(vlSelf->SimpleCpu__DOT__Alu_io_Result),32);
        bufp->chgIData(oldp+18,(vlSelf->SimpleCpu__DOT__PcReg),32);
        bufp->chgIData(oldp+19,((3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)),32);
        bufp->chgCData(oldp+20,(((8U & ((0x3ffff8U 
                                         & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 0xaU)) 
                                        | (0xfffffff8U 
                                           & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                              << 2U)))) 
                                 | ((4U & ((0x1ffffcU 
                                            & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                               >> 0xbU)) 
                                           | (((3U 
                                                == (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6)) 
                                               | ((~ 
                                                   ((IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput) 
                                                    >> 2U)) 
                                                  & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                     >> 1U))) 
                                              << 2U))) 
                                    | ((2U & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0x3000U 
                                                         & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                       | (3U 
                                                          == (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6)))) 
                                              << 1U)) 
                                       | (IData)((0U 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput)))))))),4);
        bufp->chgIData(oldp+21,(((IData)(4U) + vlSelf->SimpleCpu__DOT__PcReg)),32);
        bufp->chgIData(oldp+22,((vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                 + vlSelf->SimpleCpu__DOT__PcReg)),32);
        bufp->chgCData(oldp+23,(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput),4);
        bufp->chgCData(oldp+24,((0xfU & (~ (IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput)))),4);
        bufp->chgBit(oldp+25,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput) 
                                        >> 2U)))));
        bufp->chgBit(oldp+26,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput) 
                                        >> 3U)))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0xcU))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0xdU))));
        bufp->chgBit(oldp+29,((1U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
        bufp->chgBit(oldp+30,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                     >> 1U))));
        bufp->chgCData(oldp+31,(((2U & ((IData)(((0U 
                                                  != 
                                                  (0x3000U 
                                                   & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6)))) 
                                        << 1U)) | (IData)(
                                                          (0U 
                                                           == 
                                                           (0xcU 
                                                            & (IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput)))))),2);
        bufp->chgCData(oldp+32,(((2U & ((0xffffeU & 
                                         (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                          >> 0xcU)) 
                                        | (0xfffffffeU 
                                           & vlSelf->SimpleCpu__DOT__Alu_io_Result))) 
                                 | (1U & ((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                           >> 0xdU) 
                                          | ((3U == (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6)) 
                                             | ((~ 
                                                 ((IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput) 
                                                  >> 2U)) 
                                                & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                   >> 1U))))))),2);
        bufp->chgBit(oldp+33,((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14))));
        bufp->chgBit(oldp+34,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18))));
        bufp->chgCData(oldp+35,((0x1fU & vlSelf->SimpleCpu__DOT__Alu_io_B)),5);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.io_dout),32);
        bufp->chgCData(oldp+37,((0xfU & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                            >> 9U)))),4);
        bufp->chgBit(oldp+38,((1U & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 9U)))));
        bufp->chgBit(oldp+39,((1U & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+40,((1U & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+41,((1U & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+42,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))));
        bufp->chgBit(oldp+43,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))));
        bufp->chgBit(oldp+44,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))));
        bufp->chgBit(oldp+45,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35))));
        bufp->chgSData(oldp+46,((((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18))) 
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
                                                        | ((((0U 
                                                              != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13)) 
                                                             & (0U 
                                                                != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
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
        bufp->chgBit(oldp+47,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T))));
        bufp->chgBit(oldp+48,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2))));
        bufp->chgBit(oldp+49,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4))));
        bufp->chgBit(oldp+50,((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8))));
        bufp->chgBit(oldp+51,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10))));
        bufp->chgBit(oldp+52,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12))));
        bufp->chgBit(oldp+53,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16))));
        bufp->chgBit(oldp+54,((1U & (~ (IData)((0xfU 
                                                == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))))));
        bufp->chgIData(oldp+55,(vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB),32);
        bufp->chgQData(oldp+56,((0x1ffffffffULL & vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1)),33);
        bufp->chgIData(oldp+58,((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1)),32);
        bufp->chgIData(oldp+59,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 ^ vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+60,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 | vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+61,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 & vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+62,((1U & (((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1) 
                                        & (vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB 
                                           >> 0x1fU)) 
                                       | (((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1) 
                                           ^ (vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB 
                                              >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
                                                     >> 0x1fU)))))),32);
        bufp->chgBit(oldp+63,((1U & vlSelf->SimpleCpu__DOT__Alu_io_B)));
        bufp->chgBit(oldp+64,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0));
        bufp->chgBit(oldp+65,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1));
        bufp->chgBit(oldp+66,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1));
        bufp->chgBit(oldp+67,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1));
        bufp->chgBit(oldp+68,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1));
        bufp->chgBit(oldp+69,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1));
        bufp->chgBit(oldp+70,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1));
        bufp->chgBit(oldp+71,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1));
        bufp->chgBit(oldp+72,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1));
        bufp->chgBit(oldp+73,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1));
        bufp->chgBit(oldp+74,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1));
        bufp->chgBit(oldp+75,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1));
        bufp->chgBit(oldp+76,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1));
        bufp->chgBit(oldp+77,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1));
        bufp->chgBit(oldp+78,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1));
        bufp->chgBit(oldp+79,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1));
        bufp->chgBit(oldp+80,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1));
        bufp->chgBit(oldp+81,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1));
        bufp->chgBit(oldp+82,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1));
        bufp->chgBit(oldp+83,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1));
        bufp->chgBit(oldp+84,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1));
        bufp->chgBit(oldp+85,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1));
        bufp->chgBit(oldp+86,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1));
        bufp->chgBit(oldp+87,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1));
        bufp->chgBit(oldp+88,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1));
        bufp->chgBit(oldp+89,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1));
        bufp->chgBit(oldp+90,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1));
        bufp->chgBit(oldp+91,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1));
        bufp->chgBit(oldp+92,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1));
        bufp->chgBit(oldp+93,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1));
        bufp->chgBit(oldp+94,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1));
        bufp->chgBit(oldp+95,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1));
        bufp->chgBit(oldp+96,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1));
        bufp->chgIData(oldp+97,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout),32);
        bufp->chgBit(oldp+98,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                     >> 1U))));
        bufp->chgBit(oldp+99,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)));
        bufp->chgBit(oldp+100,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+101,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+102,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+103,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+104,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+105,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+106,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+107,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+108,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+109,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+110,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+111,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+112,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+113,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+114,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+115,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+116,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+117,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+118,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+119,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+120,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+121,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+122,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+123,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+124,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+125,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+126,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+127,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+128,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+130,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+131,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout),32);
        bufp->chgBit(oldp+132,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 2U))));
        bufp->chgBit(oldp+133,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)));
        bufp->chgBit(oldp+134,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+135,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+136,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+137,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+138,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+139,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+140,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+142,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+143,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+144,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+145,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+146,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+148,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+149,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+150,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+151,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+152,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+153,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+154,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+155,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+156,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+157,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+158,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+159,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+160,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+161,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+162,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+163,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+164,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+165,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout),32);
        bufp->chgBit(oldp+166,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 3U))));
        bufp->chgBit(oldp+167,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)));
        bufp->chgBit(oldp+168,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+170,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+171,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+173,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+174,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+175,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+177,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+178,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+179,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+180,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+181,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+182,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+183,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+184,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+185,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+186,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+187,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+188,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+189,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+190,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+191,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+192,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+193,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+194,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+195,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+196,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+197,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+198,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+199,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout),32);
        bufp->chgBit(oldp+200,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 4U))));
        bufp->chgBit(oldp+201,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)));
        bufp->chgBit(oldp+202,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+203,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+204,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+205,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+206,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+207,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+208,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+209,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+210,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+211,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+212,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+213,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+214,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+215,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+216,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+217,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+218,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+219,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+220,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+221,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+222,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+223,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+224,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+225,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+226,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+227,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+228,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+229,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+230,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+231,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+232,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+233,((~ vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)),32);
        bufp->chgBit(oldp+234,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 2U)))));
        bufp->chgBit(oldp+235,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 5U)))));
        bufp->chgBit(oldp+236,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+237,((1U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)));
        bufp->chgBit(oldp+238,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 1U))));
        bufp->chgBit(oldp+239,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 3U)))));
        bufp->chgBit(oldp+240,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 4U)))));
        bufp->chgBit(oldp+241,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 6U)))));
        bufp->chgBit(oldp+242,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+243,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+244,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 2U))));
        bufp->chgBit(oldp+245,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 3U))));
        bufp->chgBit(oldp+246,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 4U))));
        bufp->chgBit(oldp+247,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+248,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+249,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+250,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+251,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+252,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1fU)))));
        bufp->chgCData(oldp+253,(((0x40U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0xeU)) 
                                            << 6U)) 
                                  | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0))),7);
        bufp->chgBit(oldp+254,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x1eU)))));
        bufp->chgCData(oldp+255,(((0x20U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
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
                                           | ((2U & 
                                               ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0x1eU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x1fU))))))))),6);
        bufp->chgBit(oldp+256,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 5U))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 6U))));
        bufp->chgBit(oldp+258,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0xeU))));
        bufp->chgCData(oldp+259,(((0x40U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 8U)) 
                                  | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0))),7);
        bufp->chgBit(oldp+260,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 7U)))));
        bufp->chgBit(oldp+261,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 8U)))));
        bufp->chgBit(oldp+262,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 9U)))));
        bufp->chgBit(oldp+263,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+264,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+265,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+266,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+267,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+268,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+269,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+270,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0x14U))));
        bufp->chgBit(oldp+271,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+272,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+273,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+274,((1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         >> 0x18U)))));
        bufp->chgCData(oldp+275,(((0x80U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x18U)) 
                                            << 7U)) 
                                  | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0))),8);
        bufp->chgSData(oldp+276,(((0x8000U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
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
                                              | ((0x400U 
                                                  & ((~ 
                                                      (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0x15U)) 
                                                     << 0xaU)) 
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
                                                          | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0))))))))))),16);
        bufp->chgCData(oldp+277,(((0x80U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 8U)) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 9U)) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                    >> 0xaU)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 0xbU)) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xcU)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0xdU)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                          >> 0xeU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0xfU))))))))))),8);
        bufp->chgBit(oldp+278,((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0x1eU))));
        bufp->chgSData(oldp+279,((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31))) 
                                   << 9U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29))) 
                                              << 8U) 
                                             | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_27))) 
                                                 << 7U) 
                                                | (((IData)(
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
                                                                     != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15)))))))))))),10);
        bufp->chgIData(oldp+280,(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs),20);
        bufp->chgCData(oldp+281,(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type),3);
        bufp->chgIData(oldp+282,(((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x14U))),32);
        bufp->chgIData(oldp+283,(((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 7U))))),32);
        bufp->chgIData(oldp+284,(((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0x800U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 7U)))))),32);
        bufp->chgIData(oldp+285,(((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0x1fU) ? 0xfffU
                                     : 0U) << 0x14U) 
                                  | ((0xff000U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
                                     | ((0x800U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 0x14U)))))),32);
        bufp->chgIData(oldp+286,((0xfffff000U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)),32);
        bufp->chgBit(oldp+287,(vlSelf->SimpleCpu__DOT__RF__DOT__Wen));
        bufp->chgIData(oldp+288,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0),32);
        bufp->chgIData(oldp+289,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1),32);
        bufp->chgIData(oldp+290,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2),32);
        bufp->chgIData(oldp+291,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3),32);
        bufp->chgIData(oldp+292,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4),32);
        bufp->chgIData(oldp+293,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5),32);
        bufp->chgIData(oldp+294,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6),32);
        bufp->chgIData(oldp+295,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7),32);
        bufp->chgIData(oldp+296,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8),32);
        bufp->chgIData(oldp+297,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9),32);
        bufp->chgIData(oldp+298,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10),32);
        bufp->chgIData(oldp+299,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11),32);
        bufp->chgIData(oldp+300,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12),32);
        bufp->chgIData(oldp+301,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13),32);
        bufp->chgIData(oldp+302,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14),32);
        bufp->chgIData(oldp+303,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15),32);
        bufp->chgIData(oldp+304,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16),32);
        bufp->chgIData(oldp+305,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17),32);
        bufp->chgIData(oldp+306,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18),32);
        bufp->chgIData(oldp+307,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19),32);
        bufp->chgIData(oldp+308,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20),32);
        bufp->chgIData(oldp+309,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21),32);
        bufp->chgIData(oldp+310,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22),32);
        bufp->chgIData(oldp+311,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23),32);
        bufp->chgIData(oldp+312,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24),32);
        bufp->chgIData(oldp+313,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25),32);
        bufp->chgIData(oldp+314,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26),32);
        bufp->chgIData(oldp+315,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27),32);
        bufp->chgIData(oldp+316,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28),32);
        bufp->chgIData(oldp+317,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29),32);
        bufp->chgIData(oldp+318,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30),32);
        bufp->chgIData(oldp+319,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31),32);
        bufp->chgBit(oldp+320,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0)) 
                                | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                   & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1)))));
        bufp->chgBit(oldp+321,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0))))));
        bufp->chgBit(oldp+322,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1))))));
        bufp->chgBit(oldp+323,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1))))));
        bufp->chgBit(oldp+324,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1))))));
        bufp->chgBit(oldp+325,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1))))));
        bufp->chgBit(oldp+326,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1))))));
        bufp->chgBit(oldp+327,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1))))));
        bufp->chgBit(oldp+328,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1))))));
        bufp->chgBit(oldp+329,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1))))));
        bufp->chgBit(oldp+330,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1))))));
        bufp->chgBit(oldp+331,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1))))));
        bufp->chgBit(oldp+332,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1))))));
        bufp->chgBit(oldp+333,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1))))));
        bufp->chgBit(oldp+334,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1))))));
        bufp->chgBit(oldp+335,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1))))));
        bufp->chgBit(oldp+336,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1))))));
        bufp->chgBit(oldp+337,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1))))));
        bufp->chgBit(oldp+338,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1))))));
        bufp->chgBit(oldp+339,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1))))));
        bufp->chgBit(oldp+340,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1))))));
        bufp->chgBit(oldp+341,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1))))));
        bufp->chgBit(oldp+342,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1))))));
        bufp->chgBit(oldp+343,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1))))));
        bufp->chgBit(oldp+344,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1))))));
        bufp->chgBit(oldp+345,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1))))));
        bufp->chgBit(oldp+346,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1))))));
        bufp->chgBit(oldp+347,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1))))));
        bufp->chgBit(oldp+348,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1))))));
        bufp->chgBit(oldp+349,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1))))));
        bufp->chgBit(oldp+350,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1))))));
        bufp->chgBit(oldp+351,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1))))));
        bufp->chgCData(oldp+352,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+353,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+355,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+358,((1U & (~ vlSelf->SimpleCpu__DOT__Alu_io_B))));
        bufp->chgBit(oldp+359,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                            >> 2U))))));
        bufp->chgBit(oldp+360,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 3U))))));
        bufp->chgBit(oldp+361,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 2U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 4U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout))))));
        bufp->chgBit(oldp+362,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 3U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 5U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+363,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 4U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 6U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 2U)))))));
        bufp->chgBit(oldp+364,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 5U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 7U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 3U)))))));
        bufp->chgBit(oldp+365,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 6U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 8U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 4U)))))));
        bufp->chgBit(oldp+366,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 7U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 9U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 5U)))))));
        bufp->chgBit(oldp+367,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 0xaU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 6U)))))));
        bufp->chgBit(oldp+368,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 0xbU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 7U)))))));
        bufp->chgBit(oldp+369,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xcU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+370,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xdU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+371,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xeU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+372,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xfU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+373,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x10U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+374,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x11U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+375,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+376,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+377,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+378,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+379,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+380,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+381,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+382,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+383,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+384,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x17U)))))));
        bufp->chgBit(oldp+385,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+386,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+387,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1aU)))))));
        bufp->chgBit(oldp+388,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1bU)))))));
        bufp->chgBit(oldp+389,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1cU)))))));
        bufp->chgBit(oldp+390,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1dU)))))));
        bufp->chgCData(oldp+391,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+392,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+393,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+394,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+395,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+397,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 1U)))));
        bufp->chgBit(oldp+398,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                            >> 4U))))));
        bufp->chgBit(oldp+399,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 5U))))));
        bufp->chgBit(oldp+400,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 6U))))));
        bufp->chgBit(oldp+401,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 7U))))));
        bufp->chgBit(oldp+402,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 4U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 8U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout))))));
        bufp->chgBit(oldp+403,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 5U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 9U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+404,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 6U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xaU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 2U)))))));
        bufp->chgBit(oldp+405,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 7U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xbU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 3U)))))));
        bufp->chgBit(oldp+406,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xcU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 4U)))))));
        bufp->chgBit(oldp+407,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xdU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 5U)))))));
        bufp->chgBit(oldp+408,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0xeU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+409,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0xfU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+410,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x10U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+411,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x11U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+412,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+413,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+414,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+415,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+416,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+417,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+418,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+419,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+420,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+421,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+422,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+423,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+424,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+425,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x17U)))))));
        bufp->chgBit(oldp+426,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+427,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+428,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x1aU)))))));
        bufp->chgBit(oldp+429,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x1bU)))))));
        bufp->chgCData(oldp+430,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+431,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+432,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+433,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+436,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 2U)))));
        bufp->chgBit(oldp+437,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                            >> 8U))))));
        bufp->chgBit(oldp+438,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 9U))))));
        bufp->chgBit(oldp+439,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xaU))))));
        bufp->chgBit(oldp+440,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xbU))))));
        bufp->chgBit(oldp+441,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 4U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xcU))))));
        bufp->chgBit(oldp+442,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 5U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xdU))))));
        bufp->chgBit(oldp+443,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 6U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xeU))))));
        bufp->chgBit(oldp+444,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 7U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+445,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                           >> 0x10U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout))))));
        bufp->chgBit(oldp+446,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                           >> 0x11U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+447,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 2U)))))));
        bufp->chgBit(oldp+448,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 3U)))))));
        bufp->chgBit(oldp+449,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 4U)))))));
        bufp->chgBit(oldp+450,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 5U)))))));
        bufp->chgBit(oldp+451,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+452,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+453,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+454,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+455,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+456,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+457,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+458,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+459,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+460,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+461,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+462,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+463,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+464,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+465,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+466,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+467,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+468,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x17U)))))));
        bufp->chgCData(oldp+469,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+470,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+471,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+472,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+473,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+474,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+475,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 3U)))));
        bufp->chgBit(oldp+476,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+477,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+478,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+479,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+480,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 4U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+481,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 5U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+482,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 6U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+483,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 7U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+484,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 8U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+485,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 9U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+486,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xaU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+487,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xbU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+488,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xcU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+489,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xdU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+490,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xeU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+491,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xfU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+492,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))));
        bufp->chgBit(oldp+493,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 1U)))))));
        bufp->chgBit(oldp+494,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 2U)))))));
        bufp->chgBit(oldp+495,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 3U)))))));
        bufp->chgBit(oldp+496,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 4U)))))));
        bufp->chgBit(oldp+497,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 5U)))))));
        bufp->chgBit(oldp+498,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+499,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+500,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+501,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+502,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+503,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+504,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+505,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+506,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+507,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xfU)))))));
        bufp->chgCData(oldp+508,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+509,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+510,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+511,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+512,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+514,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 4U)))));
    }
    bufp->chgBit(oldp+515,(vlSelf->clock));
    bufp->chgBit(oldp+516,(vlSelf->reset));
    bufp->chgBit(oldp+517,(vlSelf->Halt));
    bufp->chgIData(oldp+518,(vlSelf->SimpleCpu__DOT__RF_io_wdata),32);
    bufp->chgIData(oldp+519,(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg),32);
    bufp->chgSData(oldp+520,((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
                               << 9U) | (((IData)((7U 
                                                   == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
                                          << 8U) | 
                                         (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                           << 7U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))) 
                                            << 6U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))) 
                                               << 5U) 
                                              | ((0x10U 
                                                  & ((~ 
                                                      (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0xeU)) 
                                                     << 4U)) 
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
                                                    | ((6U 
                                                        & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0xbU)) 
                                                       | (IData)(vlSelf->Halt)))))))))),10);
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
}
