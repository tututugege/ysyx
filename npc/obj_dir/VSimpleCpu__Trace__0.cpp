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
        bufp->chgBit(oldp+0,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))));
        bufp->chgIData(oldp+1,(vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm),32);
        bufp->chgCData(oldp+2,((0xfU & (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 9U))),4);
        bufp->chgCData(oldp+3,(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1),2);
        bufp->chgCData(oldp+4,(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2),2);
        bufp->chgCData(oldp+5,(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc),2);
        bufp->chgBit(oldp+6,((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14))));
        bufp->chgBit(oldp+7,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18))));
        bufp->chgCData(oldp+8,((0xfU & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                           >> 9U)))),4);
        bufp->chgBit(oldp+9,((1U & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                       >> 9U)))));
        bufp->chgBit(oldp+10,((1U & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+11,((1U & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+12,((1U & (~ (vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+13,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))));
        bufp->chgBit(oldp+14,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))));
        bufp->chgBit(oldp+15,((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))));
        bufp->chgBit(oldp+16,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35))));
        bufp->chgSData(oldp+17,((((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18))) 
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
        bufp->chgBit(oldp+18,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T))));
        bufp->chgBit(oldp+19,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2))));
        bufp->chgBit(oldp+20,((0xfU == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4))));
        bufp->chgBit(oldp+21,((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8))));
        bufp->chgBit(oldp+22,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10))));
        bufp->chgBit(oldp+23,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12))));
        bufp->chgBit(oldp+24,((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16))));
        bufp->chgBit(oldp+25,((1U & (~ (IData)((0xfU 
                                                == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))))));
        bufp->chgSData(oldp+26,((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31))) 
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
        bufp->chgIData(oldp+27,(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs),20);
        bufp->chgCData(oldp+28,(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+29,(vlSelf->SimpleCpu__DOT__RF_io_wdata),32);
        bufp->chgIData(oldp+30,(vlSelf->SimpleCpu__DOT__RF_io_rdata1),32);
        bufp->chgIData(oldp+31,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din),32);
        bufp->chgIData(oldp+32,(vlSelf->SimpleCpu__DOT__Alu_io_B),32);
        bufp->chgIData(oldp+33,(vlSelf->SimpleCpu__DOT__Alu_io_Result),32);
        bufp->chgIData(oldp+34,((vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                 + vlSelf->SimpleCpu__DOT__PcReg)),32);
        bufp->chgCData(oldp+35,(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput),4);
        bufp->chgCData(oldp+36,((0xfU & (~ (IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput)))),4);
        bufp->chgBit(oldp+37,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput) 
                                        >> 2U)))));
        bufp->chgBit(oldp+38,((1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput) 
                                        >> 3U)))));
        bufp->chgBit(oldp+39,((1U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
        bufp->chgBit(oldp+40,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                     >> 1U))));
        bufp->chgCData(oldp+41,((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_5))) 
                                  << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_3)))),2);
        bufp->chgCData(oldp+42,((0x1fU & vlSelf->SimpleCpu__DOT__Alu_io_B)),5);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.io_dout),32);
        bufp->chgIData(oldp+44,(vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB),32);
        bufp->chgQData(oldp+45,((0x1ffffffffULL & vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1)),33);
        bufp->chgIData(oldp+47,((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1)),32);
        bufp->chgIData(oldp+48,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 ^ vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+49,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 | vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+50,((vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                 & vlSelf->SimpleCpu__DOT__Alu_io_B)),32);
        bufp->chgIData(oldp+51,((1U & (((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1) 
                                        & (vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB 
                                           >> 0x1fU)) 
                                       | (((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1) 
                                           ^ (vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB 
                                              >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
                                                     >> 0x1fU)))))),32);
        bufp->chgBit(oldp+52,((1U & vlSelf->SimpleCpu__DOT__Alu_io_B)));
        bufp->chgBit(oldp+53,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0));
        bufp->chgBit(oldp+54,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1));
        bufp->chgBit(oldp+55,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1));
        bufp->chgBit(oldp+56,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1));
        bufp->chgBit(oldp+57,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1));
        bufp->chgBit(oldp+58,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1));
        bufp->chgBit(oldp+59,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1));
        bufp->chgBit(oldp+60,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1));
        bufp->chgBit(oldp+61,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1));
        bufp->chgBit(oldp+62,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1));
        bufp->chgBit(oldp+63,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1));
        bufp->chgBit(oldp+64,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1));
        bufp->chgBit(oldp+65,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1));
        bufp->chgBit(oldp+66,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1));
        bufp->chgBit(oldp+67,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1));
        bufp->chgBit(oldp+68,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1));
        bufp->chgBit(oldp+69,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1));
        bufp->chgBit(oldp+70,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1));
        bufp->chgBit(oldp+71,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1));
        bufp->chgBit(oldp+72,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1));
        bufp->chgBit(oldp+73,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1));
        bufp->chgBit(oldp+74,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1));
        bufp->chgBit(oldp+75,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1));
        bufp->chgBit(oldp+76,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1));
        bufp->chgBit(oldp+77,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1));
        bufp->chgBit(oldp+78,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1));
        bufp->chgBit(oldp+79,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1));
        bufp->chgBit(oldp+80,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1));
        bufp->chgBit(oldp+81,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1));
        bufp->chgBit(oldp+82,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1));
        bufp->chgBit(oldp+83,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1));
        bufp->chgBit(oldp+84,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1));
        bufp->chgBit(oldp+85,(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1));
        bufp->chgIData(oldp+86,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout),32);
        bufp->chgBit(oldp+87,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                     >> 1U))));
        bufp->chgBit(oldp+88,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)));
        bufp->chgBit(oldp+89,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 2U))));
        bufp->chgBit(oldp+90,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 1U))));
        bufp->chgBit(oldp+91,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 3U))));
        bufp->chgBit(oldp+92,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 4U))));
        bufp->chgBit(oldp+93,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 5U))));
        bufp->chgBit(oldp+94,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 6U))));
        bufp->chgBit(oldp+95,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 7U))));
        bufp->chgBit(oldp+96,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 8U))));
        bufp->chgBit(oldp+97,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 9U))));
        bufp->chgBit(oldp+98,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 0xaU))));
        bufp->chgBit(oldp+99,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                     >> 0xbU))));
        bufp->chgBit(oldp+100,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+101,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+102,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+103,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+104,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+105,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+106,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+107,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+108,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+109,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+110,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+111,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+112,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+113,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+114,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+115,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+116,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+117,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+118,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+119,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+120,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout),32);
        bufp->chgBit(oldp+121,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 2U))));
        bufp->chgBit(oldp+122,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)));
        bufp->chgBit(oldp+123,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+124,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+125,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+126,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+127,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+128,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+130,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+131,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+132,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+133,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+134,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+135,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+136,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+137,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+138,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+139,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+140,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+142,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+143,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+144,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+145,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+146,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+148,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+149,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+150,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+151,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+152,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+153,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+154,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout),32);
        bufp->chgBit(oldp+155,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 3U))));
        bufp->chgBit(oldp+156,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)));
        bufp->chgBit(oldp+157,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+158,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+159,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+160,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+161,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+162,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+163,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+164,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+165,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+166,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+167,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+168,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+170,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+171,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+173,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+174,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+175,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+177,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+178,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+179,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+180,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+181,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+182,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+183,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+184,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+185,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+186,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+187,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                >> 0x1fU)));
        bufp->chgIData(oldp+188,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout),32);
        bufp->chgBit(oldp+189,((1U & (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                      >> 4U))));
        bufp->chgBit(oldp+190,((1U & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)));
        bufp->chgBit(oldp+191,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+192,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 1U))));
        bufp->chgBit(oldp+193,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+194,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 2U))));
        bufp->chgBit(oldp+195,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+196,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 3U))));
        bufp->chgBit(oldp+197,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+198,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 4U))));
        bufp->chgBit(oldp+199,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+200,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 5U))));
        bufp->chgBit(oldp+201,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+202,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 6U))));
        bufp->chgBit(oldp+203,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x16U))));
        bufp->chgBit(oldp+204,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 7U))));
        bufp->chgBit(oldp+205,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x17U))));
        bufp->chgBit(oldp+206,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 8U))));
        bufp->chgBit(oldp+207,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x18U))));
        bufp->chgBit(oldp+208,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 9U))));
        bufp->chgBit(oldp+209,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x19U))));
        bufp->chgBit(oldp+210,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+211,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+212,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+213,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+214,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+215,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+216,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+217,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+218,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+219,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+220,((1U & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+221,((vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                >> 0x1fU)));
        bufp->chgBit(oldp+222,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0)) 
                                | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                   & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1)))));
        bufp->chgBit(oldp+223,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0))))));
        bufp->chgBit(oldp+224,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1))))));
        bufp->chgBit(oldp+225,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1))))));
        bufp->chgBit(oldp+226,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1))))));
        bufp->chgBit(oldp+227,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1))))));
        bufp->chgBit(oldp+228,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1))))));
        bufp->chgBit(oldp+229,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1))))));
        bufp->chgBit(oldp+230,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1))))));
        bufp->chgBit(oldp+231,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1))))));
        bufp->chgBit(oldp+232,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1))))));
        bufp->chgBit(oldp+233,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1))))));
        bufp->chgBit(oldp+234,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1))))));
        bufp->chgBit(oldp+235,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1))))));
        bufp->chgBit(oldp+236,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1))))));
        bufp->chgBit(oldp+237,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1))))));
        bufp->chgBit(oldp+238,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1))))));
        bufp->chgBit(oldp+239,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1))))));
        bufp->chgBit(oldp+240,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1))))));
        bufp->chgBit(oldp+241,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1))))));
        bufp->chgBit(oldp+242,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1))))));
        bufp->chgBit(oldp+243,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1))))));
        bufp->chgBit(oldp+244,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1))))));
        bufp->chgBit(oldp+245,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1))))));
        bufp->chgBit(oldp+246,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1))))));
        bufp->chgBit(oldp+247,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1))))));
        bufp->chgBit(oldp+248,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1))))));
        bufp->chgBit(oldp+249,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1))))));
        bufp->chgBit(oldp+250,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1))))));
        bufp->chgBit(oldp+251,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1))))));
        bufp->chgBit(oldp+252,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1))))));
        bufp->chgBit(oldp+253,((((~ vlSelf->SimpleCpu__DOT__Alu_io_B) 
                                 & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)) 
                                | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR) 
                                    & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                   | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL) 
                                      & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1))))));
        bufp->chgCData(oldp+254,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+255,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+256,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+257,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+258,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+260,((1U & (~ vlSelf->SimpleCpu__DOT__Alu_io_B))));
        bufp->chgBit(oldp+261,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                            >> 2U))))));
        bufp->chgBit(oldp+262,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 3U))))));
        bufp->chgBit(oldp+263,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 2U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 4U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout))))));
        bufp->chgBit(oldp+264,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 3U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 5U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+265,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 4U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 6U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 2U)))))));
        bufp->chgBit(oldp+266,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 5U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 7U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 3U)))))));
        bufp->chgBit(oldp+267,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 6U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 8U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 4U)))))));
        bufp->chgBit(oldp+268,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 7U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 9U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 5U)))))));
        bufp->chgBit(oldp+269,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 0xaU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 6U)))))));
        bufp->chgBit(oldp+270,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                           >> 0xbU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 7U)))))));
        bufp->chgBit(oldp+271,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xcU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+272,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xdU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+273,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xeU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+274,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0xfU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+275,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x10U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+276,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x11U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+277,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+278,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+279,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+280,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+281,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+282,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+283,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+284,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+285,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+286,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x17U)))))));
        bufp->chgBit(oldp+287,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+288,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+289,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1aU)))))));
        bufp->chgBit(oldp+290,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1bU)))))));
        bufp->chgBit(oldp+291,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1cU)))))));
        bufp->chgBit(oldp+292,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                               >> 0x1dU)))))));
        bufp->chgCData(oldp+293,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+294,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+296,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+297,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+299,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 1U)))));
        bufp->chgBit(oldp+300,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                            >> 4U))))));
        bufp->chgBit(oldp+301,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 5U))))));
        bufp->chgBit(oldp+302,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 6U))))));
        bufp->chgBit(oldp+303,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 7U))))));
        bufp->chgBit(oldp+304,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 4U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 8U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout))))));
        bufp->chgBit(oldp+305,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 5U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 9U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+306,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 6U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xaU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 2U)))))));
        bufp->chgBit(oldp+307,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 7U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xbU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 3U)))))));
        bufp->chgBit(oldp+308,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xcU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 4U)))))));
        bufp->chgBit(oldp+309,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                           >> 0xdU)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 5U)))))));
        bufp->chgBit(oldp+310,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0xeU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+311,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0xfU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+312,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x10U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+313,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x11U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+314,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+315,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+316,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+317,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+318,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+319,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+320,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+321,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+322,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+323,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+324,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+325,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+326,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+327,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x17U)))))));
        bufp->chgBit(oldp+328,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+329,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+330,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x1aU)))))));
        bufp->chgBit(oldp+331,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 2U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                               >> 0x1bU)))))));
        bufp->chgCData(oldp+332,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+333,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+334,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+335,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+336,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+338,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 2U)))));
        bufp->chgBit(oldp+339,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                            >> 8U))))));
        bufp->chgBit(oldp+340,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 9U))))));
        bufp->chgBit(oldp+341,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xaU))))));
        bufp->chgBit(oldp+342,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xbU))))));
        bufp->chgBit(oldp+343,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 4U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xcU))))));
        bufp->chgBit(oldp+344,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 5U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xdU))))));
        bufp->chgBit(oldp+345,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 6U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xeU))))));
        bufp->chgBit(oldp+346,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 7U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+347,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 8U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                           >> 0x10U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout))))));
        bufp->chgBit(oldp+348,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 9U)) | 
                                      (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                           >> 0x11U)) 
                                       | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 1U)))))));
        bufp->chgBit(oldp+349,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xaU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x12U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 2U)))))));
        bufp->chgBit(oldp+350,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xbU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x13U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 3U)))))));
        bufp->chgBit(oldp+351,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xcU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x14U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 4U)))))));
        bufp->chgBit(oldp+352,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xdU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x15U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 5U)))))));
        bufp->chgBit(oldp+353,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xeU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x16U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+354,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0xfU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x17U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+355,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x18U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+356,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x19U)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+357,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+358,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+359,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1cU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+360,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1dU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+361,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1eU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+362,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+363,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+364,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+365,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+366,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+367,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+368,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+369,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+370,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 3U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                               >> 0x17U)))))));
        bufp->chgCData(oldp+371,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+372,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+374,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+375,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+377,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 3U)))));
        bufp->chgBit(oldp+378,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+379,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+380,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+381,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+382,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 4U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+383,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 5U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+384,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 6U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+385,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 7U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+386,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 8U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+387,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 9U)) | 
                                      ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+388,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xaU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+389,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xbU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+390,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xcU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+391,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xdU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+392,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xeU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+393,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0xfU)) 
                                      | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+394,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))));
        bufp->chgBit(oldp+395,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x11U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 1U)))))));
        bufp->chgBit(oldp+396,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x12U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 2U)))))));
        bufp->chgBit(oldp+397,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x13U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 3U)))))));
        bufp->chgBit(oldp+398,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x14U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 4U)))))));
        bufp->chgBit(oldp+399,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x15U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 5U)))))));
        bufp->chgBit(oldp+400,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x16U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 6U)))))));
        bufp->chgBit(oldp+401,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x17U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 7U)))))));
        bufp->chgBit(oldp+402,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x18U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 8U)))))));
        bufp->chgBit(oldp+403,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x19U)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 9U)))))));
        bufp->chgBit(oldp+404,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1aU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+405,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1bU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+406,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1cU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+407,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1dU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+408,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+409,((1U & (((~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                           >> 4U)) 
                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                          >> 0x1fU)) 
                                      | (((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                         | ((IData)(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL) 
                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                               >> 0xfU)))))));
        bufp->chgCData(oldp+410,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_lo_lo),8);
        bufp->chgSData(oldp+411,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_lo),16);
        bufp->chgCData(oldp+412,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_hi_lo),8);
        bufp->chgSData(oldp+413,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__io_dout_hi),16);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftL));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__PVT__sel_10__DOT__ShiftR));
        bufp->chgBit(oldp+416,((1U & (~ (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                         >> 4U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+417,(vlSelf->SimpleCpu__DOT__PcReg),32);
        bufp->chgIData(oldp+418,(((IData)(4U) + vlSelf->SimpleCpu__DOT__PcReg)),32);
        bufp->chgIData(oldp+419,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0),32);
        bufp->chgIData(oldp+420,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1),32);
        bufp->chgIData(oldp+421,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2),32);
        bufp->chgIData(oldp+422,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3),32);
        bufp->chgIData(oldp+423,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4),32);
        bufp->chgIData(oldp+424,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5),32);
        bufp->chgIData(oldp+425,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6),32);
        bufp->chgIData(oldp+426,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7),32);
        bufp->chgIData(oldp+427,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8),32);
        bufp->chgIData(oldp+428,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9),32);
        bufp->chgIData(oldp+429,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10),32);
        bufp->chgIData(oldp+430,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11),32);
        bufp->chgIData(oldp+431,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12),32);
        bufp->chgIData(oldp+432,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13),32);
        bufp->chgIData(oldp+433,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14),32);
        bufp->chgIData(oldp+434,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15),32);
        bufp->chgIData(oldp+435,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16),32);
        bufp->chgIData(oldp+436,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17),32);
        bufp->chgIData(oldp+437,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18),32);
        bufp->chgIData(oldp+438,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19),32);
        bufp->chgIData(oldp+439,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20),32);
        bufp->chgIData(oldp+440,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21),32);
        bufp->chgIData(oldp+441,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22),32);
        bufp->chgIData(oldp+442,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23),32);
        bufp->chgIData(oldp+443,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24),32);
        bufp->chgIData(oldp+444,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25),32);
        bufp->chgIData(oldp+445,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26),32);
        bufp->chgIData(oldp+446,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27),32);
        bufp->chgIData(oldp+447,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28),32);
        bufp->chgIData(oldp+448,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29),32);
        bufp->chgIData(oldp+449,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30),32);
        bufp->chgIData(oldp+450,(vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31),32);
    }
    bufp->chgBit(oldp+451,(vlSelf->clock));
    bufp->chgBit(oldp+452,(vlSelf->reset));
    bufp->chgBit(oldp+453,(vlSelf->Memory_MemWrite));
    bufp->chgBit(oldp+454,(vlSelf->Memory_MemRead));
    bufp->chgCData(oldp+455,(vlSelf->Memory_MemAddr),2);
    bufp->chgIData(oldp+456,(vlSelf->Memory_MemReadData),32);
    bufp->chgIData(oldp+457,(vlSelf->Memory_MemWriteData),32);
    bufp->chgCData(oldp+458,(vlSelf->Memory_MemWriteStrb),4);
    bufp->chgIData(oldp+459,(vlSelf->Fetch_PC),32);
    bufp->chgIData(oldp+460,(vlSelf->Fetch_Inst),32);
    bufp->chgBit(oldp+461,(vlSelf->Halt));
    bufp->chgIData(oldp+462,(vlSelf->Ret),32);
    bufp->chgCData(oldp+463,((3U & (vlSelf->Fetch_Inst 
                                    >> 0xcU))),2);
    bufp->chgCData(oldp+464,((0x1fU & (vlSelf->Fetch_Inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+465,((0x1fU & (vlSelf->Fetch_Inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+466,((0x1fU & (vlSelf->Fetch_Inst 
                                       >> 7U))),5);
    bufp->chgBit(oldp+467,((1U & (vlSelf->Fetch_Inst 
                                  >> 0xcU))));
    bufp->chgBit(oldp+468,((1U & (vlSelf->Fetch_Inst 
                                  >> 0xdU))));
    bufp->chgCData(oldp+469,(((2U & ((IData)(((0U != 
                                               (0x3000U 
                                                & vlSelf->Fetch_Inst)) 
                                              | (3U 
                                                 == (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6)))) 
                                     << 1U)) | (IData)(
                                                       (0U 
                                                        == 
                                                        (0xcU 
                                                         & (IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput)))))),2);
    bufp->chgIData(oldp+470,((~ vlSelf->Fetch_Inst)),32);
    bufp->chgBit(oldp+471,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 2U)))));
    bufp->chgBit(oldp+472,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 5U)))));
    bufp->chgBit(oldp+473,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0xeU)))));
    bufp->chgBit(oldp+474,((1U & vlSelf->Fetch_Inst)));
    bufp->chgBit(oldp+475,((1U & (vlSelf->Fetch_Inst 
                                  >> 1U))));
    bufp->chgBit(oldp+476,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 3U)))));
    bufp->chgBit(oldp+477,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 4U)))));
    bufp->chgBit(oldp+478,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 6U)))));
    bufp->chgBit(oldp+479,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0xdU)))));
    bufp->chgBit(oldp+480,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0xcU)))));
    bufp->chgBit(oldp+481,((1U & (vlSelf->Fetch_Inst 
                                  >> 2U))));
    bufp->chgBit(oldp+482,((1U & (vlSelf->Fetch_Inst 
                                  >> 3U))));
    bufp->chgBit(oldp+483,((1U & (vlSelf->Fetch_Inst 
                                  >> 4U))));
    bufp->chgBit(oldp+484,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x19U)))));
    bufp->chgBit(oldp+485,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x1aU)))));
    bufp->chgBit(oldp+486,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x1bU)))));
    bufp->chgBit(oldp+487,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x1cU)))));
    bufp->chgBit(oldp+488,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x1dU)))));
    bufp->chgBit(oldp+489,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x1fU)))));
    bufp->chgCData(oldp+490,(((0x40U & ((~ (vlSelf->Fetch_Inst 
                                            >> 0xeU)) 
                                        << 6U)) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0))),7);
    bufp->chgBit(oldp+491,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x1eU)))));
    bufp->chgCData(oldp+492,(((0x20U & ((~ (vlSelf->Fetch_Inst 
                                            >> 0x1aU)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        (vlSelf->Fetch_Inst 
                                                         >> 0x1bU)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           (vlSelf->Fetch_Inst 
                                                            >> 0x1cU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              (vlSelf->Fetch_Inst 
                                                               >> 0x1dU)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 (vlSelf->Fetch_Inst 
                                                                  >> 0x1eU)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  (vlSelf->Fetch_Inst 
                                                                   >> 0x1fU))))))))),6);
    bufp->chgBit(oldp+493,((1U & (vlSelf->Fetch_Inst 
                                  >> 5U))));
    bufp->chgBit(oldp+494,((1U & (vlSelf->Fetch_Inst 
                                  >> 6U))));
    bufp->chgBit(oldp+495,((1U & (vlSelf->Fetch_Inst 
                                  >> 0xeU))));
    bufp->chgCData(oldp+496,(((0x40U & (vlSelf->Fetch_Inst 
                                        >> 8U)) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0))),7);
    bufp->chgBit(oldp+497,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 7U)))));
    bufp->chgBit(oldp+498,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 8U)))));
    bufp->chgBit(oldp+499,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 9U)))));
    bufp->chgBit(oldp+500,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0xaU)))));
    bufp->chgBit(oldp+501,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0xbU)))));
    bufp->chgBit(oldp+502,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0xfU)))));
    bufp->chgBit(oldp+503,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x10U)))));
    bufp->chgBit(oldp+504,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x11U)))));
    bufp->chgBit(oldp+505,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x12U)))));
    bufp->chgBit(oldp+506,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x13U)))));
    bufp->chgBit(oldp+507,((1U & (vlSelf->Fetch_Inst 
                                  >> 0x14U))));
    bufp->chgBit(oldp+508,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x15U)))));
    bufp->chgBit(oldp+509,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x16U)))));
    bufp->chgBit(oldp+510,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x17U)))));
    bufp->chgBit(oldp+511,((1U & (~ (vlSelf->Fetch_Inst 
                                     >> 0x18U)))));
    bufp->chgCData(oldp+512,(((0x80U & ((~ (vlSelf->Fetch_Inst 
                                            >> 0x18U)) 
                                        << 7U)) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0))),8);
    bufp->chgSData(oldp+513,(((0x8000U & ((~ (vlSelf->Fetch_Inst 
                                              >> 0x10U)) 
                                          << 0xfU)) 
                              | ((0x4000U & ((~ (vlSelf->Fetch_Inst 
                                                 >> 0x11U)) 
                                             << 0xeU)) 
                                 | ((0x2000U & ((~ 
                                                 (vlSelf->Fetch_Inst 
                                                  >> 0x12U)) 
                                                << 0xdU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->Fetch_Inst 
                                                     >> 0x13U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->Fetch_Inst 
                                            >> 9U)) 
                                          | ((0x400U 
                                              & ((~ 
                                                  (vlSelf->Fetch_Inst 
                                                   >> 0x15U)) 
                                                 << 0xaU)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->Fetch_Inst 
                                                      >> 0x16U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->Fetch_Inst 
                                                         >> 0x17U)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->Fetch_Inst 
                                                            >> 0x18U)) 
                                                          << 7U)) 
                                                      | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0))))))))))),16);
    bufp->chgCData(oldp+514,(((0x80U & ((~ (vlSelf->Fetch_Inst 
                                            >> 8U)) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((~ 
                                                        (vlSelf->Fetch_Inst 
                                                         >> 9U)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((~ 
                                                           (vlSelf->Fetch_Inst 
                                                            >> 0xaU)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((~ 
                                                              (vlSelf->Fetch_Inst 
                                                               >> 0xbU)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((~ 
                                                                 (vlSelf->Fetch_Inst 
                                                                  >> 0xcU)) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((~ 
                                                                    (vlSelf->Fetch_Inst 
                                                                     >> 0xdU)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((~ 
                                                                       (vlSelf->Fetch_Inst 
                                                                        >> 0xeU)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (~ 
                                                                        (vlSelf->Fetch_Inst 
                                                                         >> 0xfU))))))))))),8);
    bufp->chgBit(oldp+515,((1U & (vlSelf->Fetch_Inst 
                                  >> 0x1eU))));
    bufp->chgSData(oldp+516,((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
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
                                                       | (IData)(vlSelf->Halt)))))))))),10);
    bufp->chgIData(oldp+517,(((((vlSelf->Fetch_Inst 
                                 >> 0x1fU) ? 0xfffffU
                                 : 0U) << 0xcU) | (vlSelf->Fetch_Inst 
                                                   >> 0x14U))),32);
    bufp->chgIData(oldp+518,(((((vlSelf->Fetch_Inst 
                                 >> 0x1fU) ? 0xfffffU
                                 : 0U) << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->Fetch_Inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->Fetch_Inst 
                                                         >> 7U))))),32);
    bufp->chgIData(oldp+519,(((((vlSelf->Fetch_Inst 
                                 >> 0x1fU) ? 0xfffffU
                                 : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelf->Fetch_Inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->Fetch_Inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->Fetch_Inst 
                                                            >> 7U)))))),32);
    bufp->chgIData(oldp+520,(((((vlSelf->Fetch_Inst 
                                 >> 0x1fU) ? 0xfffU
                                 : 0U) << 0x14U) | 
                              ((0xff000U & vlSelf->Fetch_Inst) 
                               | ((0x800U & (vlSelf->Fetch_Inst 
                                             >> 9U)) 
                                  | (0x7feU & (vlSelf->Fetch_Inst 
                                               >> 0x14U)))))),32);
    bufp->chgIData(oldp+521,((0xfffff000U & vlSelf->Fetch_Inst)),32);
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
