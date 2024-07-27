// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiplier__Syms.h"


void VMultiplier___024root__trace_chg_0_sub_0(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMultiplier___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_chg_0\n"); );
    // Init
    VMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiplier___024root*>(voidSelf);
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMultiplier___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMultiplier___024root__trace_chg_0_sub_0(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->Multiplier__DOT__extX),33);
        bufp->chgQData(oldp+2,((0x1ffffffffULL & (~ vlSelf->Multiplier__DOT__extX))),33);
        bufp->chgQData(oldp+4,(vlSelf->Multiplier__DOT__casez_tmp),33);
        bufp->chgBit(oldp+6,(vlSelf->Multiplier__DOT__signal));
        bufp->chgCData(oldp+7,(vlSelf->Multiplier__DOT___c22_io_out),2);
        bufp->chgCData(oldp+8,(vlSelf->Multiplier__DOT___c22_1_io_out),2);
        bufp->chgCData(oldp+9,(vlSelf->Multiplier__DOT___c22_10_io_out),2);
        bufp->chgCData(oldp+10,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_30_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_49_io_out)))),2);
        bufp->chgCData(oldp+11,(vlSelf->Multiplier__DOT___c22_100_io_out),2);
        bufp->chgCData(oldp+12,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_49_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_50_io_out)))),2);
        bufp->chgCData(oldp+13,(vlSelf->Multiplier__DOT___c22_101_io_out),2);
        bufp->chgCData(oldp+14,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_50_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_51_io_out)))),2);
        bufp->chgCData(oldp+15,(vlSelf->Multiplier__DOT___c22_102_io_out),2);
        bufp->chgCData(oldp+16,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_51_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_52_io_out)))),2);
        bufp->chgCData(oldp+17,(vlSelf->Multiplier__DOT___c22_103_io_out),2);
        bufp->chgCData(oldp+18,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_52_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c32_31_io_out)))),2);
        bufp->chgCData(oldp+19,(vlSelf->Multiplier__DOT___c22_104_io_out),2);
        bufp->chgCData(oldp+20,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_31_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_53_io_out)))),2);
        bufp->chgCData(oldp+21,(vlSelf->Multiplier__DOT___c22_105_io_out),2);
        bufp->chgCData(oldp+22,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_53_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_54_io_out)))),2);
        bufp->chgCData(oldp+23,(vlSelf->Multiplier__DOT___c22_106_io_out),2);
        bufp->chgCData(oldp+24,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_54_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_55_io_out)))),2);
        bufp->chgCData(oldp+25,(vlSelf->Multiplier__DOT___c22_107_io_out),2);
        bufp->chgCData(oldp+26,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_55_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_56_io_out)))),2);
        bufp->chgCData(oldp+27,(vlSelf->Multiplier__DOT___c22_108_io_out),2);
        bufp->chgCData(oldp+28,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_56_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_57_io_out)))),2);
        bufp->chgCData(oldp+29,((3U & ((1U & (IData)(vlSelf->Multiplier__DOT___c22_57_io_out)) 
                                       + VL_SHIFTR_III(2,2,32, 
                                                       ((2U 
                                                         & (IData)(vlSelf->Multiplier__DOT___c22_56_io_out)) 
                                                        | (1U 
                                                           & (IData)(vlSelf->Multiplier__DOT___c22_57_io_out))), 1U)))),2);
        bufp->chgCData(oldp+30,(vlSelf->Multiplier__DOT___c22_11_io_out),2);
        bufp->chgCData(oldp+31,(vlSelf->Multiplier__DOT___c22_12_io_out),2);
        bufp->chgCData(oldp+32,(vlSelf->Multiplier__DOT___c22_13_io_out),2);
        bufp->chgCData(oldp+33,(vlSelf->Multiplier__DOT___c22_14_io_out),2);
        bufp->chgCData(oldp+34,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_1_io_out)))),2);
        bufp->chgCData(oldp+35,(vlSelf->Multiplier__DOT___c22_15_io_out),2);
        bufp->chgCData(oldp+36,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_1_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c32_io_out)))),2);
        bufp->chgCData(oldp+37,(vlSelf->Multiplier__DOT___c22_16_io_out),2);
        bufp->chgCData(oldp+38,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c32_1_io_out)))),2);
        bufp->chgCData(oldp+39,(vlSelf->Multiplier__DOT___c22_17_io_out),2);
        bufp->chgCData(oldp+40,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_1_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+41,(vlSelf->Multiplier__DOT___c22_18_io_out),2);
        bufp->chgCData(oldp+42,(((2U & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+43,(vlSelf->Multiplier__DOT___c22_19_io_out),2);
        bufp->chgCData(oldp+44,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5102e58c__0) 
                                  << 1U) | (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_69)))),2);
        bufp->chgCData(oldp+45,(vlSelf->Multiplier__DOT___c22_2_io_out),2);
        bufp->chgCData(oldp+46,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_4_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+47,(vlSelf->Multiplier__DOT___c22_20_io_out),2);
        bufp->chgCData(oldp+48,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_5_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+49,(vlSelf->Multiplier__DOT___c22_21_io_out),2);
        bufp->chgCData(oldp+50,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_4_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+51,(vlSelf->Multiplier__DOT___c22_22_io_out),2);
        bufp->chgCData(oldp+52,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_5_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+53,(vlSelf->Multiplier__DOT___c22_23_io_out),2);
        bufp->chgCData(oldp+54,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+55,(vlSelf->Multiplier__DOT___c22_24_io_out),2);
        bufp->chgCData(oldp+56,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+57,(vlSelf->Multiplier__DOT___c22_25_io_out),2);
        bufp->chgCData(oldp+58,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+59,(vlSelf->Multiplier__DOT___c22_26_io_out),2);
        bufp->chgCData(oldp+60,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_10_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+61,(vlSelf->Multiplier__DOT___c22_27_io_out),2);
        bufp->chgCData(oldp+62,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_11_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+63,(vlSelf->Multiplier__DOT___c22_28_io_out),2);
        bufp->chgCData(oldp+64,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_10_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+65,(vlSelf->Multiplier__DOT___c22_29_io_out),2);
        bufp->chgCData(oldp+66,(vlSelf->Multiplier__DOT___c22_3_io_out),2);
        bufp->chgCData(oldp+67,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_11_io_out)) 
                                 | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out) 
                                          >> 1U)))),2);
        bufp->chgCData(oldp+68,(vlSelf->Multiplier__DOT___c22_30_io_out),2);
        bufp->chgCData(oldp+69,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_2_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+70,(vlSelf->Multiplier__DOT___c22_31_io_out),2);
        bufp->chgCData(oldp+71,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+72,(vlSelf->Multiplier__DOT___c22_32_io_out),2);
        bufp->chgCData(oldp+73,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_14_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c32_15_io_out)))),2);
        bufp->chgCData(oldp+74,(vlSelf->Multiplier__DOT___c22_33_io_out),2);
        bufp->chgCData(oldp+75,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_15_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_14_io_out)))),2);
        bufp->chgCData(oldp+76,(vlSelf->Multiplier__DOT___c22_34_io_out),2);
        bufp->chgCData(oldp+77,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_15_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_16_io_out)))),2);
        bufp->chgCData(oldp+78,(vlSelf->Multiplier__DOT___c22_35_io_out),2);
        bufp->chgCData(oldp+79,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_16_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_17_io_out)))),2);
        bufp->chgCData(oldp+80,(vlSelf->Multiplier__DOT___c22_36_io_out),2);
        bufp->chgCData(oldp+81,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_17_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_18_io_out)))),2);
        bufp->chgCData(oldp+82,(vlSelf->Multiplier__DOT___c22_37_io_out),2);
        bufp->chgCData(oldp+83,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_18_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c22_19_io_out)))),2);
        bufp->chgCData(oldp+84,(vlSelf->Multiplier__DOT___c22_38_io_out),2);
        bufp->chgCData(oldp+85,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_19_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c32_16_io_out)))),2);
        bufp->chgCData(oldp+86,(vlSelf->Multiplier__DOT___c22_39_io_out),2);
        bufp->chgCData(oldp+87,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5feb7463__0) 
                                  << 1U) | (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_125)))),2);
        bufp->chgCData(oldp+88,(vlSelf->Multiplier__DOT___c22_4_io_out),2);
        bufp->chgCData(oldp+89,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_16_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c32_17_io_out)))),2);
        bufp->chgCData(oldp+90,(vlSelf->Multiplier__DOT___c22_40_io_out),2);
        bufp->chgCData(oldp+91,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_17_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT___c32_18_io_out)))),2);
        bufp->chgCData(oldp+92,(vlSelf->Multiplier__DOT___c22_41_io_out),2);
        bufp->chgCData(oldp+93,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_18_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+94,(vlSelf->Multiplier__DOT___c22_42_io_out),2);
        bufp->chgCData(oldp+95,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+96,(vlSelf->Multiplier__DOT___c22_43_io_out),2);
        bufp->chgCData(oldp+97,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+98,(vlSelf->Multiplier__DOT___c22_44_io_out),2);
        bufp->chgCData(oldp+99,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out)) 
                                 | (1U & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+100,(vlSelf->Multiplier__DOT___c22_45_io_out),2);
        bufp->chgCData(oldp+101,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+102,(vlSelf->Multiplier__DOT___c22_46_io_out),2);
        bufp->chgCData(oldp+103,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+104,(vlSelf->Multiplier__DOT___c22_47_io_out),2);
        bufp->chgCData(oldp+105,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+106,(vlSelf->Multiplier__DOT___c22_48_io_out),2);
        bufp->chgCData(oldp+107,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+108,(vlSelf->Multiplier__DOT___c22_49_io_out),2);
        bufp->chgCData(oldp+109,(vlSelf->Multiplier__DOT___c22_5_io_out),2);
        bufp->chgCData(oldp+110,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+111,(vlSelf->Multiplier__DOT___c22_50_io_out),2);
        bufp->chgCData(oldp+112,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+113,(vlSelf->Multiplier__DOT___c22_51_io_out),2);
        bufp->chgCData(oldp+114,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+115,(vlSelf->Multiplier__DOT___c22_52_io_out),2);
        bufp->chgCData(oldp+116,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_24_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_31_io_out)))),2);
        bufp->chgCData(oldp+117,(vlSelf->Multiplier__DOT___c22_53_io_out),2);
        bufp->chgCData(oldp+118,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_31_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_32_io_out)))),2);
        bufp->chgCData(oldp+119,(vlSelf->Multiplier__DOT___c22_54_io_out),2);
        bufp->chgCData(oldp+120,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_32_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c32_25_io_out)))),2);
        bufp->chgCData(oldp+121,(vlSelf->Multiplier__DOT___c22_55_io_out),2);
        bufp->chgCData(oldp+122,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_25_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_33_io_out)))),2);
        bufp->chgCData(oldp+123,(vlSelf->Multiplier__DOT___c22_56_io_out),2);
        bufp->chgCData(oldp+124,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_33_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_34_io_out)))),2);
        bufp->chgCData(oldp+125,(vlSelf->Multiplier__DOT___c22_57_io_out),2);
        bufp->chgCData(oldp+126,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_35_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_36_io_out)))),2);
        bufp->chgCData(oldp+127,(vlSelf->Multiplier__DOT___c22_58_io_out),2);
        bufp->chgCData(oldp+128,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_36_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_37_io_out)))),2);
        bufp->chgCData(oldp+129,(vlSelf->Multiplier__DOT___c22_59_io_out),2);
        bufp->chgCData(oldp+130,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_hb76a2bdc__0) 
                                   << 1U) | (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_181)))),2);
        bufp->chgCData(oldp+131,(vlSelf->Multiplier__DOT___c22_6_io_out),2);
        bufp->chgCData(oldp+132,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_37_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_38_io_out)))),2);
        bufp->chgCData(oldp+133,(vlSelf->Multiplier__DOT___c22_60_io_out),2);
        bufp->chgCData(oldp+134,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_38_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_39_io_out)))),2);
        bufp->chgCData(oldp+135,(vlSelf->Multiplier__DOT___c22_61_io_out),2);
        bufp->chgCData(oldp+136,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_39_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_40_io_out)))),2);
        bufp->chgCData(oldp+137,(vlSelf->Multiplier__DOT___c22_62_io_out),2);
        bufp->chgCData(oldp+138,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_40_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_41_io_out)))),2);
        bufp->chgCData(oldp+139,(vlSelf->Multiplier__DOT___c22_63_io_out),2);
        bufp->chgCData(oldp+140,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_41_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_42_io_out)))),2);
        bufp->chgCData(oldp+141,(vlSelf->Multiplier__DOT___c22_64_io_out),2);
        bufp->chgCData(oldp+142,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_42_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_43_io_out)))),2);
        bufp->chgCData(oldp+143,(vlSelf->Multiplier__DOT___c22_65_io_out),2);
        bufp->chgCData(oldp+144,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_43_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_44_io_out)))),2);
        bufp->chgCData(oldp+145,(vlSelf->Multiplier__DOT___c22_66_io_out),2);
        bufp->chgCData(oldp+146,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_44_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_45_io_out)))),2);
        bufp->chgCData(oldp+147,(vlSelf->Multiplier__DOT___c22_67_io_out),2);
        bufp->chgCData(oldp+148,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_45_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_46_io_out)))),2);
        bufp->chgCData(oldp+149,(vlSelf->Multiplier__DOT___c22_68_io_out),2);
        bufp->chgCData(oldp+150,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_46_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c32_26_io_out)))),2);
        bufp->chgCData(oldp+151,(vlSelf->Multiplier__DOT___c22_69_io_out),2);
        bufp->chgCData(oldp+152,(vlSelf->Multiplier__DOT___c22_7_io_out),2);
        bufp->chgCData(oldp+153,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_26_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c32_27_io_out)))),2);
        bufp->chgCData(oldp+154,(vlSelf->Multiplier__DOT___c22_70_io_out),2);
        bufp->chgCData(oldp+155,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_27_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c32_28_io_out)))),2);
        bufp->chgCData(oldp+156,(vlSelf->Multiplier__DOT___c22_71_io_out),2);
        bufp->chgCData(oldp+157,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_28_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c32_29_io_out)))),2);
        bufp->chgCData(oldp+158,(vlSelf->Multiplier__DOT___c22_72_io_out),2);
        bufp->chgCData(oldp+159,(((2U & (IData)(vlSelf->Multiplier__DOT___c32_29_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+160,(vlSelf->Multiplier__DOT___c22_73_io_out),2);
        bufp->chgCData(oldp+161,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+162,(vlSelf->Multiplier__DOT___c22_74_io_out),2);
        bufp->chgCData(oldp+163,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+164,(vlSelf->Multiplier__DOT___c22_75_io_out),2);
        bufp->chgCData(oldp+165,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+166,(vlSelf->Multiplier__DOT___c22_76_io_out),2);
        bufp->chgCData(oldp+167,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+168,(vlSelf->Multiplier__DOT___c22_77_io_out),2);
        bufp->chgCData(oldp+169,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+170,(vlSelf->Multiplier__DOT___c22_78_io_out),2);
        bufp->chgCData(oldp+171,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+172,(vlSelf->Multiplier__DOT___c22_79_io_out),2);
        bufp->chgCData(oldp+173,(vlSelf->Multiplier__DOT___c22_8_io_out),2);
        bufp->chgCData(oldp+174,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+175,(vlSelf->Multiplier__DOT___c22_80_io_out),2);
        bufp->chgCData(oldp+176,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+177,(vlSelf->Multiplier__DOT___c22_81_io_out),2);
        bufp->chgCData(oldp+178,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+179,(vlSelf->Multiplier__DOT___c22_82_io_out),2);
        bufp->chgCData(oldp+180,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+181,(vlSelf->Multiplier__DOT___c22_83_io_out),2);
        bufp->chgCData(oldp+182,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+183,(vlSelf->Multiplier__DOT___c22_84_io_out),2);
        bufp->chgCData(oldp+184,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+185,(vlSelf->Multiplier__DOT___c22_85_io_out),2);
        bufp->chgCData(oldp+186,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+187,(vlSelf->Multiplier__DOT___c22_86_io_out),2);
        bufp->chgCData(oldp+188,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+189,(vlSelf->Multiplier__DOT___c22_87_io_out),2);
        bufp->chgCData(oldp+190,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+191,(vlSelf->Multiplier__DOT___c22_88_io_out),2);
        bufp->chgCData(oldp+192,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+193,(vlSelf->Multiplier__DOT___c22_89_io_out),2);
        bufp->chgCData(oldp+194,(vlSelf->Multiplier__DOT___c22_9_io_out),2);
        bufp->chgCData(oldp+195,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+196,(vlSelf->Multiplier__DOT___c22_90_io_out),2);
        bufp->chgCData(oldp+197,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+198,(vlSelf->Multiplier__DOT___c22_91_io_out),2);
        bufp->chgCData(oldp+199,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+200,(vlSelf->Multiplier__DOT___c22_92_io_out),2);
        bufp->chgCData(oldp+201,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+202,(vlSelf->Multiplier__DOT___c22_93_io_out),2);
        bufp->chgCData(oldp+203,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+204,(vlSelf->Multiplier__DOT___c22_94_io_out),2);
        bufp->chgCData(oldp+205,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+206,(vlSelf->Multiplier__DOT___c22_95_io_out),2);
        bufp->chgCData(oldp+207,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+208,(vlSelf->Multiplier__DOT___c22_96_io_out),2);
        bufp->chgCData(oldp+209,(((2U & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out)))),2);
        bufp->chgCData(oldp+210,(vlSelf->Multiplier__DOT___c22_97_io_out),2);
        bufp->chgCData(oldp+211,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_47_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c22_48_io_out)))),2);
        bufp->chgCData(oldp+212,(vlSelf->Multiplier__DOT___c22_98_io_out),2);
        bufp->chgCData(oldp+213,(((2U & (IData)(vlSelf->Multiplier__DOT___c22_48_io_out)) 
                                  | (1U & (IData)(vlSelf->Multiplier__DOT___c32_30_io_out)))),2);
        bufp->chgCData(oldp+214,(vlSelf->Multiplier__DOT___c22_99_io_out),2);
        bufp->chgCData(oldp+215,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h557bf8db__0) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_27) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT__casez_tmp 
                                                           >> 2U)))))),3);
        bufp->chgCData(oldp+216,(vlSelf->Multiplier__DOT___c32_io_out),2);
        bufp->chgCData(oldp+217,(vlSelf->Multiplier__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+218,(vlSelf->Multiplier__DOT___c32_10_io_out),2);
        bufp->chgCData(oldp+219,(vlSelf->Multiplier__DOT___c32_11_io_out),2);
        bufp->chgCData(oldp+220,(vlSelf->Multiplier__DOT___c32_12_io_out),2);
        bufp->chgCData(oldp+221,(vlSelf->Multiplier__DOT___c32_13_io_out),2);
        bufp->chgCData(oldp+222,(vlSelf->Multiplier__DOT___c32_14_io_out),2);
        bufp->chgCData(oldp+223,(vlSelf->Multiplier__DOT___c32_15_io_out),2);
        bufp->chgCData(oldp+224,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  (((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha690227c__0) 
                                    << 1U) | (1U & (IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+225,(vlSelf->Multiplier__DOT___c32_16_io_out),2);
        bufp->chgCData(oldp+226,(vlSelf->Multiplier__DOT___c32_17_io_out),2);
        bufp->chgCData(oldp+227,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+228,(vlSelf->Multiplier__DOT___c32_18_io_out),2);
        bufp->chgCData(oldp+229,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+230,(vlSelf->Multiplier__DOT___c32_19_io_out),2);
        bufp->chgCData(oldp+231,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h514988d4__0) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_83) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                           >> 2U)))))),3);
        bufp->chgCData(oldp+232,(vlSelf->Multiplier__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+233,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+234,(vlSelf->Multiplier__DOT___c32_20_io_out),2);
        bufp->chgCData(oldp+235,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+236,(vlSelf->Multiplier__DOT___c32_21_io_out),2);
        bufp->chgCData(oldp+237,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+238,(vlSelf->Multiplier__DOT___c32_22_io_out),2);
        bufp->chgCData(oldp+239,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+240,(vlSelf->Multiplier__DOT___c32_23_io_out),2);
        bufp->chgCData(oldp+241,(vlSelf->Multiplier__DOT___c32_24_io_out),2);
        bufp->chgCData(oldp+242,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c32_14_io_out))))),3);
        bufp->chgCData(oldp+243,(vlSelf->Multiplier__DOT___c32_25_io_out),2);
        bufp->chgCData(oldp+244,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+245,(vlSelf->Multiplier__DOT___c32_26_io_out),2);
        bufp->chgCData(oldp+246,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+247,(vlSelf->Multiplier__DOT___c32_27_io_out),2);
        bufp->chgCData(oldp+248,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+249,(vlSelf->Multiplier__DOT___c32_28_io_out),2);
        bufp->chgCData(oldp+250,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_20_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+251,(vlSelf->Multiplier__DOT___c32_29_io_out),2);
        bufp->chgCData(oldp+252,(vlSelf->Multiplier__DOT___c32_3_io_out),2);
        bufp->chgCData(oldp+253,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+254,(vlSelf->Multiplier__DOT___c32_30_io_out),2);
        bufp->chgCData(oldp+255,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c32_24_io_out))))),3);
        bufp->chgCData(oldp+256,(vlSelf->Multiplier__DOT___c32_31_io_out),2);
        bufp->chgCData(oldp+257,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+258,(vlSelf->Multiplier__DOT___c32_32_io_out),2);
        bufp->chgCData(oldp+259,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+260,(vlSelf->Multiplier__DOT___c32_33_io_out),2);
        bufp->chgCData(oldp+261,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+262,(vlSelf->Multiplier__DOT___c32_34_io_out),2);
        bufp->chgCData(oldp+263,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+264,(vlSelf->Multiplier__DOT___c32_35_io_out),2);
        bufp->chgCData(oldp+265,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+266,(vlSelf->Multiplier__DOT___c32_36_io_out),2);
        bufp->chgCData(oldp+267,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+268,(vlSelf->Multiplier__DOT___c32_37_io_out),2);
        bufp->chgCData(oldp+269,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+270,(vlSelf->Multiplier__DOT___c32_38_io_out),2);
        bufp->chgCData(oldp+271,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+272,(vlSelf->Multiplier__DOT___c32_39_io_out),2);
        bufp->chgCData(oldp+273,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha28613e5__0) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_139) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                           >> 2U)))))),3);
        bufp->chgCData(oldp+274,(vlSelf->Multiplier__DOT___c32_4_io_out),2);
        bufp->chgCData(oldp+275,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c22_47_io_out))))),3);
        bufp->chgCData(oldp+276,(vlSelf->Multiplier__DOT___c32_40_io_out),2);
        bufp->chgCData(oldp+277,(vlSelf->Multiplier__DOT___c32_5_io_out),2);
        bufp->chgCData(oldp+278,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5be92e1d__0) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_195) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 2U)))))),3);
        bufp->chgCData(oldp+279,(vlSelf->Multiplier__DOT___c32_6_io_out),2);
        bufp->chgCData(oldp+280,(vlSelf->Multiplier__DOT___c32_7_io_out),2);
        bufp->chgCData(oldp+281,(vlSelf->Multiplier__DOT___c32_8_io_out),2);
        bufp->chgCData(oldp+282,(vlSelf->Multiplier__DOT___c32_9_io_out),2);
        bufp->chgCData(oldp+283,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0) 
                                   << 3U) | ((4U & 
                                              ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_41) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                             >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->Multiplier__DOT__casez_tmp 
                                                              >> 4U))))))),5);
        bufp->chgCData(oldp+284,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+285,(((4U & ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_41) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 2U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 4U)))))),3);
        bufp->chgCData(oldp+286,(vlSelf->Multiplier__DOT__c53__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+287,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_1_io_out) 
                                         << 2U)) | (IData)(vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0))),3);
        bufp->chgCData(oldp+288,(vlSelf->Multiplier__DOT__c53__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+289,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+290,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                  >> 1U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 3U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 5U)))))),3);
        bufp->chgCData(oldp+291,(vlSelf->Multiplier__DOT__c53_1__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+292,(vlSelf->Multiplier__DOT__c53_1__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+293,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 7U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                        >> 9U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0xbU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT__casez_tmp 
                                                            >> 0xdU)))))))),5);
        bufp->chgCData(oldp+294,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+295,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                  >> 9U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 0xbU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 0xdU)))))),3);
        bufp->chgCData(oldp+296,(vlSelf->Multiplier__DOT__c53_10__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+297,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                    >> 7U)))))),3);
        bufp->chgCData(oldp+298,(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+299,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+300,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+301,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+302,(vlSelf->Multiplier__DOT__c53_100__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+303,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+304,(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+305,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 0xcU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                        >> 0xeU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 0x10U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                            >> 0x12U)))))))),5);
        bufp->chgCData(oldp+306,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+307,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+308,(vlSelf->Multiplier__DOT__c53_101__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+309,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                    >> 0xcU)))))),3);
        bufp->chgCData(oldp+310,(vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+311,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+312,(vlSelf->Multiplier__DOT__c53_102__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+313,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+314,(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+315,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+316,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+317,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+318,(vlSelf->Multiplier__DOT__c53_103__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+319,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+320,(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+321,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+322,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0xdU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 0xfU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                  >> 0x11U)))))),3);
        bufp->chgCData(oldp+323,(vlSelf->Multiplier__DOT__c53_104__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+324,(vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+325,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+326,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+327,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+328,(vlSelf->Multiplier__DOT__c53_105__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+329,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+330,(vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+331,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+332,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+333,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+334,(vlSelf->Multiplier__DOT__c53_106__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+335,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+336,(vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+337,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+338,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+339,(vlSelf->Multiplier__DOT__c53_107__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+340,(vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+341,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+342,(vlSelf->Multiplier__DOT__c53_108__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+343,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+344,(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+345,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+346,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+347,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+348,(vlSelf->Multiplier__DOT__c53_109__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+349,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+350,(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+351,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+352,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                  >> 1U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                   >> 3U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                  >> 5U)))))),3);
        bufp->chgCData(oldp+353,(vlSelf->Multiplier__DOT__c53_11__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+354,(vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+355,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+356,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+357,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+358,(vlSelf->Multiplier__DOT__c53_110__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+359,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+360,(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+361,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+362,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+363,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+364,(vlSelf->Multiplier__DOT__c53_111__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+365,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+366,(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+367,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+368,(vlSelf->Multiplier__DOT__c53_112__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+369,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+370,(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+371,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+372,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+373,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+374,(vlSelf->Multiplier__DOT__c53_113__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+375,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+376,(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+377,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+378,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+379,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+380,(vlSelf->Multiplier__DOT__c53_114__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+381,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+382,(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+383,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+384,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+385,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+386,(vlSelf->Multiplier__DOT__c53_115__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+387,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+388,(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+389,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+390,(vlSelf->Multiplier__DOT__c53_116__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+391,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+392,(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+393,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+394,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+395,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+396,(vlSelf->Multiplier__DOT__c53_117__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+397,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+398,(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+399,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+400,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+401,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+402,(vlSelf->Multiplier__DOT__c53_118__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+403,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+404,(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+405,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+406,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+407,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+408,(vlSelf->Multiplier__DOT__c53_119__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+409,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+410,(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+411,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 8U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                        >> 0xaU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0xcU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT__casez_tmp 
                                                            >> 0xeU)))))))),5);
        bufp->chgCData(oldp+412,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+413,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                  >> 0xaU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 0xcU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 0xeU)))))),3);
        bufp->chgCData(oldp+414,(vlSelf->Multiplier__DOT__c53_12__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+415,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                    >> 8U)))))),3);
        bufp->chgCData(oldp+416,(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+417,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+418,(vlSelf->Multiplier__DOT__c53_120__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+419,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+420,(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+421,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+422,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+423,(vlSelf->Multiplier__DOT__c53_121__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+424,(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+425,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+426,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+427,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+428,(vlSelf->Multiplier__DOT__c53_122__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+429,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+430,(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+431,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+432,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+433,(vlSelf->Multiplier__DOT__c53_123__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+434,(vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+435,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+436,(vlSelf->Multiplier__DOT__c53_124__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+437,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+438,(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+439,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+440,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+441,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+442,(vlSelf->Multiplier__DOT__c53_125__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+443,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+444,(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+445,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+446,(vlSelf->Multiplier__DOT__c53_126__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+447,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+448,(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+449,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+450,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+451,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+452,(vlSelf->Multiplier__DOT__c53_127__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+453,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+454,(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+455,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+456,(vlSelf->Multiplier__DOT__c53_128__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+457,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+458,(vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+459,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+460,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+461,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+462,(vlSelf->Multiplier__DOT__c53_129__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+463,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+464,(vlSelf->Multiplier__DOT__c53_129__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+465,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_111) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                        >> 2U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 4U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                            >> 6U)))))))),5);
        bufp->chgCData(oldp+466,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+467,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                  >> 2U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                   >> 4U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                  >> 6U)))))),3);
        bufp->chgCData(oldp+468,(vlSelf->Multiplier__DOT__c53_13__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+469,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_111))))),3);
        bufp->chgCData(oldp+470,(vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+471,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+472,(vlSelf->Multiplier__DOT__c53_130__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+473,(vlSelf->Multiplier__DOT__c53_130__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+474,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+475,((1U | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+476,(vlSelf->Multiplier__DOT__c53_131__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+477,(vlSelf->Multiplier__DOT__c53_131__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+478,(((8U & ((IData)(vlSelf->Multiplier__DOT___c22_2_io_out) 
                                         << 2U)) | 
                                  ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_3_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out)))))),5);
        bufp->chgCData(oldp+479,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+480,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_3_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+481,(vlSelf->Multiplier__DOT__c53_132__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+482,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_2_io_out), 1U)))),3);
        bufp->chgCData(oldp+483,(vlSelf->Multiplier__DOT__c53_132__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+484,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_3_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+485,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+486,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+487,(vlSelf->Multiplier__DOT__c53_133__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+488,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_132__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_3_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+489,(vlSelf->Multiplier__DOT__c53_133__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+490,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_3_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+491,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+492,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_3_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+493,(vlSelf->Multiplier__DOT__c53_134__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+494,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_133__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+495,(vlSelf->Multiplier__DOT__c53_134__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+496,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_3_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+497,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+498,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+499,(vlSelf->Multiplier__DOT__c53_135__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+500,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_134__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_3_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+501,(vlSelf->Multiplier__DOT__c53_135__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+502,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+503,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+504,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+505,(vlSelf->Multiplier__DOT__c53_136__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+506,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_135__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+507,(vlSelf->Multiplier__DOT__c53_136__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+508,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | (((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0) 
                                         << 2U) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+509,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+510,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_2_io_out) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+511,(vlSelf->Multiplier__DOT__c53_137__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+512,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_136__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_10__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+513,(vlSelf->Multiplier__DOT__c53_137__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+514,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+515,(vlSelf->Multiplier__DOT__c53_138__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+516,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+517,(vlSelf->Multiplier__DOT__c53_138__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+518,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT___c22_4_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+519,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+520,(((4U & ((IData)(vlSelf->Multiplier__DOT___c22_4_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+521,(vlSelf->Multiplier__DOT__c53_139__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+522,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_138__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+523,(vlSelf->Multiplier__DOT__c53_139__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+524,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 9U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                        >> 0xbU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0xdU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT__casez_tmp 
                                                            >> 0xfU)))))))),5);
        bufp->chgCData(oldp+525,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+526,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                  >> 0xbU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 0xdU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 0xfU)))))),3);
        bufp->chgCData(oldp+527,(vlSelf->Multiplier__DOT__c53_14__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+528,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                    >> 9U)))))),3);
        bufp->chgCData(oldp+529,(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+530,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT___c22_5_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+531,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+532,(((4U & ((IData)(vlSelf->Multiplier__DOT___c22_5_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+533,(vlSelf->Multiplier__DOT__c53_140__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+534,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_139__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+535,(vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+536,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT___c32_4_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+537,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+538,(((4U & ((IData)(vlSelf->Multiplier__DOT___c32_4_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+539,(vlSelf->Multiplier__DOT__c53_141__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+540,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+541,(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+542,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT___c32_5_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+543,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+544,(((4U & ((IData)(vlSelf->Multiplier__DOT___c32_5_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+545,(vlSelf->Multiplier__DOT__c53_142__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+546,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+547,(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+548,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+549,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+550,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+551,(vlSelf->Multiplier__DOT__c53_143__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+552,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+553,(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+554,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+555,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+556,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+557,(vlSelf->Multiplier__DOT__c53_144__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+558,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+559,(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+560,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | (((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0) 
                                      << 3U) | ((4U 
                                                 & ((IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+561,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+562,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+563,(vlSelf->Multiplier__DOT__c53_145__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+564,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_1_io_out)) 
                                   | (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0)))),3);
        bufp->chgCData(oldp+565,(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+566,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+567,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+568,(vlSelf->Multiplier__DOT__c53_146__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+569,(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+570,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_6_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+571,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+572,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+573,(vlSelf->Multiplier__DOT__c53_147__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+574,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c22_6_io_out))))),3);
        bufp->chgCData(oldp+575,(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+576,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_7_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+577,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+578,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+579,(vlSelf->Multiplier__DOT__c53_148__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+580,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c22_7_io_out))))),3);
        bufp->chgCData(oldp+581,(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+582,(((8U & ((IData)(vlSelf->Multiplier__DOT___c22_6_io_out) 
                                         << 2U)) | 
                                  ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out) 
                                             >> 1U)))))),5);
        bufp->chgCData(oldp+583,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+584,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+585,(vlSelf->Multiplier__DOT__c53_149__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+586,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_6_io_out), 1U)))),3);
        bufp->chgCData(oldp+587,(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+588,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 1U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                        >> 3U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 5U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                            >> 7U)))))))),5);
        bufp->chgCData(oldp+589,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+590,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                  >> 3U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                   >> 5U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                  >> 7U)))))),3);
        bufp->chgCData(oldp+591,(vlSelf->Multiplier__DOT__c53_15__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+592,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_13__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                    >> 1U)))))),3);
        bufp->chgCData(oldp+593,(vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+594,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_6_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+595,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+596,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+597,(vlSelf->Multiplier__DOT__c53_150__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+598,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c32_6_io_out))))),3);
        bufp->chgCData(oldp+599,(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+600,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_7_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+601,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+602,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+603,(vlSelf->Multiplier__DOT__c53_151__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+604,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_7_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+605,(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+606,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_7_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+607,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+608,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+609,(vlSelf->Multiplier__DOT__c53_152__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+610,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c32_7_io_out))))),3);
        bufp->chgCData(oldp+611,(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+612,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_6_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+613,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+614,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+615,(vlSelf->Multiplier__DOT__c53_153__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+616,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_6_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+617,(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+618,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+619,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+620,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+621,(vlSelf->Multiplier__DOT__c53_154__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+622,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+623,(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+624,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_7_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+625,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+626,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+627,(vlSelf->Multiplier__DOT__c53_155__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+628,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_7_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+629,(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+630,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+631,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+632,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+633,(vlSelf->Multiplier__DOT__c53_156__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+634,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+635,(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+636,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+637,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+638,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+639,(vlSelf->Multiplier__DOT__c53_157__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+640,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+641,(vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+642,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+643,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+644,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+645,(vlSelf->Multiplier__DOT__c53_158__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+646,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+647,(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+648,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out)) 
                                           | (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0)))))),5);
        bufp->chgCData(oldp+649,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+650,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out)) 
                                   | (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0)))),3);
        bufp->chgCData(oldp+651,(vlSelf->Multiplier__DOT__c53_159__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+652,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+653,(vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+654,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0xaU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                        >> 0xcU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0xeU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT__casez_tmp 
                                                            >> 0x10U)))))))),5);
        bufp->chgCData(oldp+655,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+656,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                  >> 0xcU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 0xeU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 0x10U)))))),3);
        bufp->chgCData(oldp+657,(vlSelf->Multiplier__DOT__c53_16__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+658,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                    >> 0xaU)))))),3);
        bufp->chgCData(oldp+659,(vlSelf->Multiplier__DOT__c53_16__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+660,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+661,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+662,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+663,(vlSelf->Multiplier__DOT__c53_160__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+664,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+665,(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+666,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+667,(vlSelf->Multiplier__DOT__c53_161__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+668,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+669,(vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+670,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+671,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+672,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+673,(vlSelf->Multiplier__DOT__c53_162__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+674,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+675,(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+676,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+677,(vlSelf->Multiplier__DOT__c53_163__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+678,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+679,(vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+680,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+681,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+682,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+683,(vlSelf->Multiplier__DOT__c53_164__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+684,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+685,(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+686,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+687,(vlSelf->Multiplier__DOT__c53_165__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+688,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+689,(vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+690,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+691,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+692,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+693,(vlSelf->Multiplier__DOT__c53_166__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+694,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+695,(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+696,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+697,(vlSelf->Multiplier__DOT__c53_167__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+698,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+699,(vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+700,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+701,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+702,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+703,(vlSelf->Multiplier__DOT__c53_168__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+704,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+705,(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+706,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+707,(vlSelf->Multiplier__DOT__c53_169__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+708,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+709,(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+710,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 2U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                        >> 4U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 6U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                            >> 8U)))))))),5);
        bufp->chgCData(oldp+711,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+712,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                  >> 4U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                   >> 6U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                  >> 8U)))))),3);
        bufp->chgCData(oldp+713,(vlSelf->Multiplier__DOT__c53_17__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+714,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                    >> 2U)))))),3);
        bufp->chgCData(oldp+715,(vlSelf->Multiplier__DOT__c53_17__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+716,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+717,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+718,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+719,(vlSelf->Multiplier__DOT__c53_170__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+720,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+721,(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+722,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+723,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+724,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+725,(vlSelf->Multiplier__DOT__c53_171__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+726,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+727,(vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+728,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_8_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+729,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+730,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+731,(vlSelf->Multiplier__DOT__c53_172__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+732,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c32_8_io_out))))),3);
        bufp->chgCData(oldp+733,(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+734,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_1_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+735,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+736,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_1_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+737,(vlSelf->Multiplier__DOT__c53_173__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+738,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+739,(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+740,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_9_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+741,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+742,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+743,(vlSelf->Multiplier__DOT__c53_174__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+744,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c32_9_io_out))))),3);
        bufp->chgCData(oldp+745,(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+746,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_8_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+747,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+748,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+749,(vlSelf->Multiplier__DOT__c53_175__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+750,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_8_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+751,(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+752,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_8_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+753,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+754,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+755,(vlSelf->Multiplier__DOT__c53_176__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+756,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c22_8_io_out))))),3);
        bufp->chgCData(oldp+757,(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+758,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_9_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+759,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+760,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+761,(vlSelf->Multiplier__DOT__c53_177__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+762,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_9_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+763,(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+764,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_9_io_out) 
                                            << 3U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+765,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+766,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+767,(vlSelf->Multiplier__DOT__c53_178__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+768,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___c22_9_io_out))))),3);
        bufp->chgCData(oldp+769,(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+770,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_8_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+771,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+772,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+773,(vlSelf->Multiplier__DOT__c53_179__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+774,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_8_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+775,(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+776,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0xbU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                        >> 0xdU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT__casez_tmp 
                                                            >> 0x11U)))))))),5);
        bufp->chgCData(oldp+777,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+778,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                  >> 0xdU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 0xfU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 0x11U)))))),3);
        bufp->chgCData(oldp+779,(vlSelf->Multiplier__DOT__c53_18__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+780,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_16__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                    >> 0xbU)))))),3);
        bufp->chgCData(oldp+781,(vlSelf->Multiplier__DOT__c53_18__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+782,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+783,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+784,(vlSelf->Multiplier__DOT__c53_180__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+785,(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+786,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_9_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out) 
                                               >> 1U))))))),5);
        bufp->chgCData(oldp+787,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+788,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+789,(vlSelf->Multiplier__DOT__c53_181__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+790,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_9_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+791,(vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+792,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+793,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+794,(vlSelf->Multiplier__DOT__c53_182__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+795,(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+796,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+797,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+798,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_103__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+799,(vlSelf->Multiplier__DOT__c53_183__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+800,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+801,(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+802,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+803,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+804,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_2_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_106__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+805,(vlSelf->Multiplier__DOT__c53_184__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+806,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_102__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+807,(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+808,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_1_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT___c32_10_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+809,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+810,(((4U & ((IData)(vlSelf->Multiplier__DOT___c32_10_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_109__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+811,(vlSelf->Multiplier__DOT__c53_185__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+812,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_1_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+813,(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+814,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT___c32_11_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+815,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+816,(((4U & ((IData)(vlSelf->Multiplier__DOT___c32_11_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_111__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+817,(vlSelf->Multiplier__DOT__c53_186__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+818,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_108__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+819,(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+820,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT___c22_10_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+821,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+822,(((4U & ((IData)(vlSelf->Multiplier__DOT___c22_10_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_113__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+823,(vlSelf->Multiplier__DOT__c53_187__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+824,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+825,(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+826,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT___c22_11_io_out) 
                                               << 2U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+827,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+828,(((4U & ((IData)(vlSelf->Multiplier__DOT___c22_11_io_out) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_115__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+829,(vlSelf->Multiplier__DOT__c53_188__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+830,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_112__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+831,(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+832,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+833,(vlSelf->Multiplier__DOT__c53_189__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+834,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+835,(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+836,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 3U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                        >> 5U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 7U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                            >> 9U)))))))),5);
        bufp->chgCData(oldp+837,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+838,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                  >> 5U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                   >> 7U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                  >> 9U)))))),3);
        bufp->chgCData(oldp+839,(vlSelf->Multiplier__DOT__c53_19__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+840,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_17__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                    >> 3U)))))),3);
        bufp->chgCData(oldp+841,(vlSelf->Multiplier__DOT__c53_19__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+842,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+843,(vlSelf->Multiplier__DOT__c53_190__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+844,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+845,(vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+846,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+847,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+848,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+849,(vlSelf->Multiplier__DOT__c53_191__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+850,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+851,(vlSelf->Multiplier__DOT__c53_191__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+852,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+853,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+854,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_120__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+855,(vlSelf->Multiplier__DOT__c53_192__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+856,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_191__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+857,(vlSelf->Multiplier__DOT__c53_192__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+858,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_1_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_12_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+859,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+860,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_1_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_12_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+861,(vlSelf->Multiplier__DOT__c53_193__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+862,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_192__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+863,(vlSelf->Multiplier__DOT__c53_193__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+864,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_12_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_13_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+865,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+866,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_124__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_13_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+867,(vlSelf->Multiplier__DOT__c53_194__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+868,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_193__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_12_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+869,(vlSelf->Multiplier__DOT__c53_194__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+870,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_13_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_12_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+871,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+872,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_12_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+873,(vlSelf->Multiplier__DOT__c53_195__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+874,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_194__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_13_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+875,(vlSelf->Multiplier__DOT__c53_195__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+876,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_12_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_13_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+877,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+878,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_126__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_13_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+879,(vlSelf->Multiplier__DOT__c53_196__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+880,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_195__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_12_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+881,(vlSelf->Multiplier__DOT__c53_196__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+882,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+883,(vlSelf->Multiplier__DOT__c53_197__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+884,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_197__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_13_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+885,(vlSelf->Multiplier__DOT__c53_197__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+886,(((8U & ((IData)(vlSelf->Multiplier__DOT___c22_20_io_out) 
                                         << 2U)) | 
                                  ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_21_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out)))))),5);
        bufp->chgCData(oldp+887,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+888,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_140__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_21_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+889,(vlSelf->Multiplier__DOT__c53_198__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+890,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelf->Multiplier__DOT___c22_20_io_out), 1U)))),3);
        bufp->chgCData(oldp+891,(vlSelf->Multiplier__DOT__c53_198__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+892,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_21_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_22_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+893,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+894,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_141__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_22_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+895,(vlSelf->Multiplier__DOT__c53_199__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+896,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_198__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_21_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+897,(vlSelf->Multiplier__DOT__c53_199__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+898,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_55) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                        >> 2U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 4U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT__casez_tmp 
                                                            >> 6U)))))))),5);
        bufp->chgCData(oldp+899,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+900,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                  >> 2U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 4U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 6U)))))),3);
        bufp->chgCData(oldp+901,(vlSelf->Multiplier__DOT__c53_2__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+902,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_55))))),3);
        bufp->chgCData(oldp+903,(vlSelf->Multiplier__DOT__c53_2__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+904,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0xcU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                        >> 0xeU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                           >> 0x10U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT__casez_tmp 
                                                            >> 0x12U)))))))),5);
        bufp->chgCData(oldp+905,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+906,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT__casez_tmp 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+907,(vlSelf->Multiplier__DOT__c53_20__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+908,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_18__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                    >> 0xcU)))))),3);
        bufp->chgCData(oldp+909,(vlSelf->Multiplier__DOT__c53_20__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+910,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_22_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_23_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+911,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+912,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_142__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_23_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+913,(vlSelf->Multiplier__DOT__c53_200__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+914,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_199__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_22_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+915,(vlSelf->Multiplier__DOT__c53_200__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+916,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_23_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_24_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+917,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+918,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_143__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_24_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+919,(vlSelf->Multiplier__DOT__c53_201__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+920,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_200__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_23_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+921,(vlSelf->Multiplier__DOT__c53_201__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+922,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_24_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_19_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+923,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+924,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_144__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_19_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+925,(vlSelf->Multiplier__DOT__c53_202__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+926,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_201__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_24_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+927,(vlSelf->Multiplier__DOT__c53_202__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+928,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_19_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_20_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+929,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+930,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_20_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+931,(vlSelf->Multiplier__DOT__c53_203__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+932,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_202__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_19_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+933,(vlSelf->Multiplier__DOT__c53_203__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+934,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_20_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_21_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+935,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+936,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_21_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+937,(vlSelf->Multiplier__DOT__c53_204__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+938,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_203__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_20_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+939,(vlSelf->Multiplier__DOT__c53_204__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+940,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_21_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+941,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+942,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_147__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+943,(vlSelf->Multiplier__DOT__c53_205__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+944,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_204__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_21_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+945,(vlSelf->Multiplier__DOT__c53_205__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+946,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+947,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+948,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_148__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+949,(vlSelf->Multiplier__DOT__c53_206__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+950,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_205__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_149__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+951,(vlSelf->Multiplier__DOT__c53_206__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+952,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+953,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+954,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_150__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+955,(vlSelf->Multiplier__DOT__c53_207__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+956,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_206__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_151__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+957,(vlSelf->Multiplier__DOT__c53_207__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+958,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+959,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+960,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_152__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+961,(vlSelf->Multiplier__DOT__c53_208__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+962,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_207__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_153__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+963,(vlSelf->Multiplier__DOT__c53_208__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+964,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+965,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+966,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_154__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_157__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+967,(vlSelf->Multiplier__DOT__c53_209__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+968,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_208__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_155__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+969,(vlSelf->Multiplier__DOT__c53_209__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+970,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 4U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                        >> 6U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 8U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                            >> 0xaU)))))))),5);
        bufp->chgCData(oldp+971,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+972,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                  >> 6U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                   >> 8U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                  >> 0xaU)))))),3);
        bufp->chgCData(oldp+973,(vlSelf->Multiplier__DOT__c53_21__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+974,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_19__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                    >> 4U)))))),3);
        bufp->chgCData(oldp+975,(vlSelf->Multiplier__DOT__c53_21__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+976,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+977,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+978,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+979,(vlSelf->Multiplier__DOT__c53_210__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+980,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_209__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_156__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+981,(vlSelf->Multiplier__DOT__c53_210__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+982,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+983,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+984,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+985,(vlSelf->Multiplier__DOT__c53_211__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+986,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_210__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_158__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+987,(vlSelf->Multiplier__DOT__c53_211__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+988,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+989,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+990,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+991,(vlSelf->Multiplier__DOT__c53_212__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+992,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_211__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_160__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+993,(vlSelf->Multiplier__DOT__c53_212__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+994,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+995,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+996,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+997,(vlSelf->Multiplier__DOT__c53_213__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+998,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->Multiplier__DOT__c53_212__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_162__DOT___c32_2_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+999,(vlSelf->Multiplier__DOT__c53_213__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1000,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1001,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1002,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1003,(vlSelf->Multiplier__DOT__c53_214__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1004,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_213__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_164__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1005,(vlSelf->Multiplier__DOT__c53_214__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1006,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1007,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1008,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1009,(vlSelf->Multiplier__DOT__c53_215__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1010,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_214__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_166__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1011,(vlSelf->Multiplier__DOT__c53_215__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1012,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1013,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1014,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_168__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_171__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1015,(vlSelf->Multiplier__DOT__c53_216__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1016,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_215__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_169__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1017,(vlSelf->Multiplier__DOT__c53_216__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1018,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1019,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1020,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1021,(vlSelf->Multiplier__DOT__c53_217__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1022,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_216__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_170__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1023,(vlSelf->Multiplier__DOT__c53_217__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1024,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1025,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1026,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_172__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1027,(vlSelf->Multiplier__DOT__c53_218__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1028,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_217__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_173__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1029,(vlSelf->Multiplier__DOT__c53_218__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1030,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1031,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1032,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_174__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1033,(vlSelf->Multiplier__DOT__c53_219__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1034,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_218__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_175__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1035,(vlSelf->Multiplier__DOT__c53_219__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1036,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0xdU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0xfU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x11U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x13U)))))))),5);
        bufp->chgCData(oldp+1037,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1038,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0xfU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x11U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x13U)))))),3);
        bufp->chgCData(oldp+1039,(vlSelf->Multiplier__DOT__c53_22__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1040,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_20__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0xdU)))))),3);
        bufp->chgCData(oldp+1041,(vlSelf->Multiplier__DOT__c53_22__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1042,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1043,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1044,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_176__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1045,(vlSelf->Multiplier__DOT__c53_220__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1046,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_219__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_177__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1047,(vlSelf->Multiplier__DOT__c53_220__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1048,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1049,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1050,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1051,(vlSelf->Multiplier__DOT__c53_221__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1052,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_220__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_179__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1053,(vlSelf->Multiplier__DOT__c53_221__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1054,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_1_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_22_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1055,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1056,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_181__DOT___c32_1_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_22_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1057,(vlSelf->Multiplier__DOT__c53_222__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1058,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_221__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_2_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1059,(vlSelf->Multiplier__DOT__c53_222__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1060,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_22_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_25_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1061,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1062,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_25_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1063,(vlSelf->Multiplier__DOT__c53_223__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1064,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_222__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_22_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1065,(vlSelf->Multiplier__DOT__c53_223__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1066,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_25_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_26_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1067,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1068,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_183__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_26_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1069,(vlSelf->Multiplier__DOT__c53_224__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1070,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_223__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_25_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1071,(vlSelf->Multiplier__DOT__c53_224__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1072,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_26_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_23_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1073,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1074,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_184__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c32_23_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1075,(vlSelf->Multiplier__DOT__c53_225__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1076,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_224__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_26_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1077,(vlSelf->Multiplier__DOT__c53_225__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1078,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___c32_23_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_27_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1079,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1080,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_185__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_27_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1081,(vlSelf->Multiplier__DOT__c53_226__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1082,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_225__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT___c32_23_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1083,(vlSelf->Multiplier__DOT__c53_226__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1084,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_27_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_28_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1085,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1086,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_186__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1087,(vlSelf->Multiplier__DOT__c53_227__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1088,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_226__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_27_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1089,(vlSelf->Multiplier__DOT__c53_227__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1090,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_28_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_29_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1091,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1092,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_187__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_29_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1093,(vlSelf->Multiplier__DOT__c53_228__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1094,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_227__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_28_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1095,(vlSelf->Multiplier__DOT__c53_228__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1096,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_29_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_30_io_out) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1097,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1098,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT___c22_30_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1099,(vlSelf->Multiplier__DOT__c53_229__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1100,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_228__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_29_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1101,(vlSelf->Multiplier__DOT__c53_229__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1102,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 5U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 7U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 9U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0xbU)))))))),5);
        bufp->chgCData(oldp+1103,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1104,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 7U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 9U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1105,(vlSelf->Multiplier__DOT__c53_23__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1106,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_21__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 5U)))))),3);
        bufp->chgCData(oldp+1107,(vlSelf->Multiplier__DOT__c53_23__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1108,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_30_io_out) 
                                             << 2U)) 
                                      | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out) 
                                                << 1U)) 
                                         | ((2U & (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out)) 
                                            | (1U & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+1109,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1110,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_190__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1111,(vlSelf->Multiplier__DOT__c53_230__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1112,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_230__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_229__DOT___c32_1_io_out)) 
                                    | (1U & ((IData)(vlSelf->Multiplier__DOT___c22_30_io_out) 
                                             >> 1U))))),3);
        bufp->chgCData(oldp+1113,(vlSelf->Multiplier__DOT__c53_230__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1114,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0xeU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x10U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x12U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x14U)))))))),5);
        bufp->chgCData(oldp+1115,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1116,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x10U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x12U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x14U)))))),3);
        bufp->chgCData(oldp+1117,(vlSelf->Multiplier__DOT__c53_24__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1118,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_22__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0xeU)))))),3);
        bufp->chgCData(oldp+1119,(vlSelf->Multiplier__DOT__c53_24__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1120,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 6U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 8U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0xaU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0xcU)))))))),5);
        bufp->chgCData(oldp+1121,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1122,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 8U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0xaU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0xcU)))))),3);
        bufp->chgCData(oldp+1123,(vlSelf->Multiplier__DOT__c53_25__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1124,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_23__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 6U)))))),3);
        bufp->chgCData(oldp+1125,(vlSelf->Multiplier__DOT__c53_25__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1126,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0) 
                                    << 3U) | ((4U & 
                                               ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_153) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                               >> 4U))))))),5);
        bufp->chgCData(oldp+1127,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1128,(((4U & ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_153) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 2U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 4U)))))),3);
        bufp->chgCData(oldp+1129,(vlSelf->Multiplier__DOT__c53_26__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1130,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_1_io_out) 
                                          << 2U)) | (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0))),3);
        bufp->chgCData(oldp+1131,(vlSelf->Multiplier__DOT__c53_26__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1132,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0xfU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x11U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x13U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x15U)))))))),5);
        bufp->chgCData(oldp+1133,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1134,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x11U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x13U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x15U)))))),3);
        bufp->chgCData(oldp+1135,(vlSelf->Multiplier__DOT__c53_27__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1136,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_24__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0xfU)))))),3);
        bufp->chgCData(oldp+1137,(vlSelf->Multiplier__DOT__c53_27__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1138,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 7U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 9U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0xbU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0xdU)))))))),5);
        bufp->chgCData(oldp+1139,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1140,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 9U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0xbU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0xdU)))))),3);
        bufp->chgCData(oldp+1141,(vlSelf->Multiplier__DOT__c53_28__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1142,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_25__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 7U)))))),3);
        bufp->chgCData(oldp+1143,(vlSelf->Multiplier__DOT__c53_28__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1144,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1145,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 1U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 3U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 5U)))))),3);
        bufp->chgCData(oldp+1146,(vlSelf->Multiplier__DOT__c53_29__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1147,(vlSelf->Multiplier__DOT__c53_29__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1148,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 1U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 3U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 5U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 7U)))))))),5);
        bufp->chgCData(oldp+1149,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1150,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 3U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 5U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 7U)))))),3);
        bufp->chgCData(oldp+1151,(vlSelf->Multiplier__DOT__c53_3__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1152,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 1U)))))),3);
        bufp->chgCData(oldp+1153,(vlSelf->Multiplier__DOT__c53_3__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1154,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x10U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x12U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x14U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x16U)))))))),5);
        bufp->chgCData(oldp+1155,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1156,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x12U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x14U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x16U)))))),3);
        bufp->chgCData(oldp+1157,(vlSelf->Multiplier__DOT__c53_30__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1158,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_27__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x10U)))))),3);
        bufp->chgCData(oldp+1159,(vlSelf->Multiplier__DOT__c53_30__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1160,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 8U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0xaU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0xcU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0xeU)))))))),5);
        bufp->chgCData(oldp+1161,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1162,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0xaU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0xcU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0xeU)))))),3);
        bufp->chgCData(oldp+1163,(vlSelf->Multiplier__DOT__c53_31__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1164,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_28__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 8U)))))),3);
        bufp->chgCData(oldp+1165,(vlSelf->Multiplier__DOT__c53_31__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1166,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_167) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 2U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 4U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 6U)))))))),5);
        bufp->chgCData(oldp+1167,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1168,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 2U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 4U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 6U)))))),3);
        bufp->chgCData(oldp+1169,(vlSelf->Multiplier__DOT__c53_32__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1170,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_167))))),3);
        bufp->chgCData(oldp+1171,(vlSelf->Multiplier__DOT__c53_32__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1172,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x11U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x13U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x15U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x17U)))))))),5);
        bufp->chgCData(oldp+1173,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1174,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x13U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x15U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x17U)))))),3);
        bufp->chgCData(oldp+1175,(vlSelf->Multiplier__DOT__c53_33__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1176,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_30__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x11U)))))),3);
        bufp->chgCData(oldp+1177,(vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1178,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 9U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0xbU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0xdU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0xfU)))))))),5);
        bufp->chgCData(oldp+1179,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1180,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0xbU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0xdU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0xfU)))))),3);
        bufp->chgCData(oldp+1181,(vlSelf->Multiplier__DOT__c53_34__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1182,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_31__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 9U)))))),3);
        bufp->chgCData(oldp+1183,(vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1184,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 1U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 3U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 5U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 7U)))))))),5);
        bufp->chgCData(oldp+1185,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1186,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 3U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 5U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 7U)))))),3);
        bufp->chgCData(oldp+1187,(vlSelf->Multiplier__DOT__c53_35__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1188,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_32__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 1U)))))),3);
        bufp->chgCData(oldp+1189,(vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1190,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x12U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x14U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x18U)))))))),5);
        bufp->chgCData(oldp+1191,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1192,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x14U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x16U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x18U)))))),3);
        bufp->chgCData(oldp+1193,(vlSelf->Multiplier__DOT__c53_36__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1194,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x12U)))))),3);
        bufp->chgCData(oldp+1195,(vlSelf->Multiplier__DOT__c53_36__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1196,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0xaU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0xcU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0xeU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x10U)))))))),5);
        bufp->chgCData(oldp+1197,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1198,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0xcU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0xeU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x10U)))))),3);
        bufp->chgCData(oldp+1199,(vlSelf->Multiplier__DOT__c53_37__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1200,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0xaU)))))),3);
        bufp->chgCData(oldp+1201,(vlSelf->Multiplier__DOT__c53_37__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1202,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 2U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 4U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 6U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 8U)))))))),5);
        bufp->chgCData(oldp+1203,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1204,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 4U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 6U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 8U)))))),3);
        bufp->chgCData(oldp+1205,(vlSelf->Multiplier__DOT__c53_38__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1206,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 2U)))))),3);
        bufp->chgCData(oldp+1207,(vlSelf->Multiplier__DOT__c53_38__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1208,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x13U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x15U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x17U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x19U)))))))),5);
        bufp->chgCData(oldp+1209,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1210,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x15U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x17U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x19U)))))),3);
        bufp->chgCData(oldp+1211,(vlSelf->Multiplier__DOT__c53_39__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1212,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_36__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x13U)))))),3);
        bufp->chgCData(oldp+1213,(vlSelf->Multiplier__DOT__c53_39__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1214,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 2U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 4U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 6U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 8U)))))))),5);
        bufp->chgCData(oldp+1215,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1216,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 4U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 6U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 8U)))))),3);
        bufp->chgCData(oldp+1217,(vlSelf->Multiplier__DOT__c53_4__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1218,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 2U)))))),3);
        bufp->chgCData(oldp+1219,(vlSelf->Multiplier__DOT__c53_4__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1220,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0xbU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0xdU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0xfU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x11U)))))))),5);
        bufp->chgCData(oldp+1221,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1222,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0xdU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0xfU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x11U)))))),3);
        bufp->chgCData(oldp+1223,(vlSelf->Multiplier__DOT__c53_40__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1224,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_37__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1225,(vlSelf->Multiplier__DOT__c53_40__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1226,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 3U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 5U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 7U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 9U)))))))),5);
        bufp->chgCData(oldp+1227,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1228,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 5U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 7U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 9U)))))),3);
        bufp->chgCData(oldp+1229,(vlSelf->Multiplier__DOT__c53_41__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1230,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_38__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 3U)))))),3);
        bufp->chgCData(oldp+1231,(vlSelf->Multiplier__DOT__c53_41__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1232,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x14U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x16U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x18U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+1233,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1234,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x16U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x18U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x1aU)))))),3);
        bufp->chgCData(oldp+1235,(vlSelf->Multiplier__DOT__c53_42__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1236,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_39__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x14U)))))),3);
        bufp->chgCData(oldp+1237,(vlSelf->Multiplier__DOT__c53_42__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1238,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0xcU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0xeU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x10U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x12U)))))))),5);
        bufp->chgCData(oldp+1239,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1240,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0xeU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x10U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x12U)))))),3);
        bufp->chgCData(oldp+1241,(vlSelf->Multiplier__DOT__c53_43__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1242,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_40__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0xcU)))))),3);
        bufp->chgCData(oldp+1243,(vlSelf->Multiplier__DOT__c53_43__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1244,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 4U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 6U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 8U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0xaU)))))))),5);
        bufp->chgCData(oldp+1245,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1246,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 6U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 8U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0xaU)))))),3);
        bufp->chgCData(oldp+1247,(vlSelf->Multiplier__DOT__c53_44__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1248,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_41__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 4U)))))),3);
        bufp->chgCData(oldp+1249,(vlSelf->Multiplier__DOT__c53_44__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1250,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x15U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x17U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x19U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x1bU)))))))),5);
        bufp->chgCData(oldp+1251,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1252,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x17U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x19U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x1bU)))))),3);
        bufp->chgCData(oldp+1253,(vlSelf->Multiplier__DOT__c53_45__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1254,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_42__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x15U)))))),3);
        bufp->chgCData(oldp+1255,(vlSelf->Multiplier__DOT__c53_45__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1256,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0xdU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0xfU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x11U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x13U)))))))),5);
        bufp->chgCData(oldp+1257,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1258,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0xfU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x11U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x13U)))))),3);
        bufp->chgCData(oldp+1259,(vlSelf->Multiplier__DOT__c53_46__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1260,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_43__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0xdU)))))),3);
        bufp->chgCData(oldp+1261,(vlSelf->Multiplier__DOT__c53_46__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1262,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 5U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 7U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 9U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0xbU)))))))),5);
        bufp->chgCData(oldp+1263,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1264,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 7U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 9U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1265,(vlSelf->Multiplier__DOT__c53_47__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1266,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_44__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 5U)))))),3);
        bufp->chgCData(oldp+1267,(vlSelf->Multiplier__DOT__c53_47__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1268,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x16U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x18U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x1cU)))))))),5);
        bufp->chgCData(oldp+1269,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1270,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x18U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x1aU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x1cU)))))),3);
        bufp->chgCData(oldp+1271,(vlSelf->Multiplier__DOT__c53_48__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1272,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_45__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x16U)))))),3);
        bufp->chgCData(oldp+1273,(vlSelf->Multiplier__DOT__c53_48__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1274,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0xeU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x10U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x12U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x14U)))))))),5);
        bufp->chgCData(oldp+1275,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1276,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0x10U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x12U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x14U)))))),3);
        bufp->chgCData(oldp+1277,(vlSelf->Multiplier__DOT__c53_49__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1278,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_46__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0xeU)))))),3);
        bufp->chgCData(oldp+1279,(vlSelf->Multiplier__DOT__c53_49__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1280,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 3U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 5U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 7U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 9U)))))))),5);
        bufp->chgCData(oldp+1281,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1282,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 5U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 7U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 9U)))))),3);
        bufp->chgCData(oldp+1283,(vlSelf->Multiplier__DOT__c53_5__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1284,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_4__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 3U)))))),3);
        bufp->chgCData(oldp+1285,(vlSelf->Multiplier__DOT__c53_5__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1286,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 6U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 8U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0xaU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0xcU)))))))),5);
        bufp->chgCData(oldp+1287,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1288,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 8U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0xaU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0xcU)))))),3);
        bufp->chgCData(oldp+1289,(vlSelf->Multiplier__DOT__c53_50__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1290,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_47__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 6U)))))),3);
        bufp->chgCData(oldp+1291,(vlSelf->Multiplier__DOT__c53_50__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1292,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0) 
                                    << 3U) | ((4U & 
                                               ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_209) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                               >> 4U))))))),5);
        bufp->chgCData(oldp+1293,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1294,(((4U & ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_209) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 2U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 4U)))))),3);
        bufp->chgCData(oldp+1295,(vlSelf->Multiplier__DOT__c53_51__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1296,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_1_io_out) 
                                          << 2U)) | (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0))),3);
        bufp->chgCData(oldp+1297,(vlSelf->Multiplier__DOT__c53_51__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1298,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x17U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x19U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x1bU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x1dU)))))))),5);
        bufp->chgCData(oldp+1299,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1300,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x19U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x1bU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x1dU)))))),3);
        bufp->chgCData(oldp+1301,(vlSelf->Multiplier__DOT__c53_52__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1302,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_48__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x17U)))))),3);
        bufp->chgCData(oldp+1303,(vlSelf->Multiplier__DOT__c53_52__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1304,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0xfU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x11U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x13U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x15U)))))))),5);
        bufp->chgCData(oldp+1305,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1306,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0x11U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x13U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x15U)))))),3);
        bufp->chgCData(oldp+1307,(vlSelf->Multiplier__DOT__c53_53__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1308,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_49__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0xfU)))))),3);
        bufp->chgCData(oldp+1309,(vlSelf->Multiplier__DOT__c53_53__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1310,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 7U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 9U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0xbU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0xdU)))))))),5);
        bufp->chgCData(oldp+1311,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1312,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 9U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0xbU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0xdU)))))),3);
        bufp->chgCData(oldp+1313,(vlSelf->Multiplier__DOT__c53_54__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1314,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_50__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 7U)))))),3);
        bufp->chgCData(oldp+1315,(vlSelf->Multiplier__DOT__c53_54__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1316,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1317,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 1U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 3U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 5U)))))),3);
        bufp->chgCData(oldp+1318,(vlSelf->Multiplier__DOT__c53_55__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1319,(vlSelf->Multiplier__DOT__c53_55__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1320,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x18U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x1aU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x1cU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x1eU)))))))),5);
        bufp->chgCData(oldp+1321,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1322,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x1aU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x1cU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x1eU)))))),3);
        bufp->chgCData(oldp+1323,(vlSelf->Multiplier__DOT__c53_56__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1324,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_52__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x18U)))))),3);
        bufp->chgCData(oldp+1325,(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1326,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0x10U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x12U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x14U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x16U)))))))),5);
        bufp->chgCData(oldp+1327,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1328,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0x12U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x14U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x16U)))))),3);
        bufp->chgCData(oldp+1329,(vlSelf->Multiplier__DOT__c53_57__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1330,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_53__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x10U)))))),3);
        bufp->chgCData(oldp+1331,(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1332,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 8U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 0xaU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0xcU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0xeU)))))))),5);
        bufp->chgCData(oldp+1333,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1334,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0xaU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0xcU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0xeU)))))),3);
        bufp->chgCData(oldp+1335,(vlSelf->Multiplier__DOT__c53_58__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1336,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_54__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 8U)))))),3);
        bufp->chgCData(oldp+1337,(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1338,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_223) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                         >> 2U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                            >> 4U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 6U)))))))),5);
        bufp->chgCData(oldp+1339,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1340,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 2U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 4U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 6U)))))),3);
        bufp->chgCData(oldp+1341,(vlSelf->Multiplier__DOT__c53_59__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1342,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT___ppTemp_T_223))))),3);
        bufp->chgCData(oldp+1343,(vlSelf->Multiplier__DOT__c53_59__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1344,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 4U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 6U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 8U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0xaU)))))))),5);
        bufp->chgCData(oldp+1345,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1346,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 6U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 8U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0xaU)))))),3);
        bufp->chgCData(oldp+1347,(vlSelf->Multiplier__DOT__c53_6__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1348,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_5__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 4U)))))),3);
        bufp->chgCData(oldp+1349,(vlSelf->Multiplier__DOT__c53_6__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1350,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x19U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x1bU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x1dU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x1fU)))))))),5);
        bufp->chgCData(oldp+1351,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1352,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x1bU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x1dU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x1fU)))))),3);
        bufp->chgCData(oldp+1353,(vlSelf->Multiplier__DOT__c53_60__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1354,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x19U)))))),3);
        bufp->chgCData(oldp+1355,(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1356,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0x11U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x13U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x15U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x17U)))))))),5);
        bufp->chgCData(oldp+1357,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1358,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0x13U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x15U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x17U)))))),3);
        bufp->chgCData(oldp+1359,(vlSelf->Multiplier__DOT__c53_61__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1360,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x11U)))))),3);
        bufp->chgCData(oldp+1361,(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1362,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 9U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 0xbU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0xdU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0xfU)))))))),5);
        bufp->chgCData(oldp+1363,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1364,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0xbU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0xdU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0xfU)))))),3);
        bufp->chgCData(oldp+1365,(vlSelf->Multiplier__DOT__c53_62__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1366,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 9U)))))),3);
        bufp->chgCData(oldp+1367,(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1368,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                      >> 1U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                         >> 3U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                            >> 5U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 7U)))))))),5);
        bufp->chgCData(oldp+1369,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1370,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 3U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 5U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 7U)))))),3);
        bufp->chgCData(oldp+1371,(vlSelf->Multiplier__DOT__c53_63__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1372,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_59__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 1U)))))),3);
        bufp->chgCData(oldp+1373,(vlSelf->Multiplier__DOT__c53_63__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1374,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x1aU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x1cU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x1eU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0x20U)))))))),5);
        bufp->chgCData(oldp+1375,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1376,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x1cU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x1eU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0x20U)))))),3);
        bufp->chgCData(oldp+1377,(vlSelf->Multiplier__DOT__c53_64__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1378,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x1aU)))))),3);
        bufp->chgCData(oldp+1379,(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1380,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0x12U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x14U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x18U)))))))),5);
        bufp->chgCData(oldp+1381,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1382,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0x14U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x16U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x18U)))))),3);
        bufp->chgCData(oldp+1383,(vlSelf->Multiplier__DOT__c53_65__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1384,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x12U)))))),3);
        bufp->chgCData(oldp+1385,(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1386,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 0xaU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 0xcU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0xeU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x10U)))))))),5);
        bufp->chgCData(oldp+1387,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1388,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0xcU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0xeU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0x10U)))))),3);
        bufp->chgCData(oldp+1389,(vlSelf->Multiplier__DOT__c53_66__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1390,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 0xaU)))))),3);
        bufp->chgCData(oldp+1391,(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1392,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                      >> 2U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                         >> 4U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                            >> 6U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 8U)))))))),5);
        bufp->chgCData(oldp+1393,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1394,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 4U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 6U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 8U)))))),3);
        bufp->chgCData(oldp+1395,(vlSelf->Multiplier__DOT__c53_67__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1396,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_63__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 2U)))))),3);
        bufp->chgCData(oldp+1397,(vlSelf->Multiplier__DOT__c53_67__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1398,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x1bU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x1dU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x1fU)) 
                                                   << 1U)) 
                                            | (IData)(vlSelf->Multiplier__DOT__signal)))))),5);
        bufp->chgCData(oldp+1399,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1400,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x1dU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x1fU)) 
                                           << 1U)) 
                                    | (IData)(vlSelf->Multiplier__DOT__signal)))),3);
        bufp->chgCData(oldp+1401,(vlSelf->Multiplier__DOT__c53_68__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1402,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x1bU)))))),3);
        bufp->chgCData(oldp+1403,(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1404,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0x13U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x15U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x17U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x19U)))))))),5);
        bufp->chgCData(oldp+1405,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1406,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0x15U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x17U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x19U)))))),3);
        bufp->chgCData(oldp+1407,(vlSelf->Multiplier__DOT__c53_69__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1408,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x13U)))))),3);
        bufp->chgCData(oldp+1409,(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1410,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 5U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 7U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 9U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0xbU)))))))),5);
        bufp->chgCData(oldp+1411,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1412,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 7U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 9U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1413,(vlSelf->Multiplier__DOT__c53_7__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1414,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_6__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 5U)))))),3);
        bufp->chgCData(oldp+1415,(vlSelf->Multiplier__DOT__c53_7__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1416,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 0xbU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 0xdU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0xfU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x11U)))))))),5);
        bufp->chgCData(oldp+1417,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1418,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0xdU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0xfU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0x11U)))))),3);
        bufp->chgCData(oldp+1419,(vlSelf->Multiplier__DOT__c53_70__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1420,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1421,(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1422,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                      >> 3U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                         >> 5U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                            >> 7U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 9U)))))))),5);
        bufp->chgCData(oldp+1423,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1424,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 5U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 7U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 9U)))))),3);
        bufp->chgCData(oldp+1425,(vlSelf->Multiplier__DOT__c53_71__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1426,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_67__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 3U)))))),3);
        bufp->chgCData(oldp+1427,(vlSelf->Multiplier__DOT__c53_71__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1428,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x1cU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0x20U)) 
                                                   << 1U)) 
                                            | (IData)(vlSelf->Multiplier__DOT__signal)))))),5);
        bufp->chgCData(oldp+1429,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1430,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x1eU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0x20U)) 
                                           << 1U)) 
                                    | (IData)(vlSelf->Multiplier__DOT__signal)))),3);
        bufp->chgCData(oldp+1431,(vlSelf->Multiplier__DOT__c53_72__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1432,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x1cU)))))),3);
        bufp->chgCData(oldp+1433,(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1434,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0x14U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x16U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x18U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+1435,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1436,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0x16U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x18U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x1aU)))))),3);
        bufp->chgCData(oldp+1437,(vlSelf->Multiplier__DOT__c53_73__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1438,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x14U)))))),3);
        bufp->chgCData(oldp+1439,(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1440,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 0xcU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 0xeU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0x10U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x12U)))))))),5);
        bufp->chgCData(oldp+1441,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1442,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0xeU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0x10U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0x12U)))))),3);
        bufp->chgCData(oldp+1443,(vlSelf->Multiplier__DOT__c53_74__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1444,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 0xcU)))))),3);
        bufp->chgCData(oldp+1445,(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1446,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                      >> 4U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                         >> 6U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                            >> 8U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0xaU)))))))),5);
        bufp->chgCData(oldp+1447,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1448,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 6U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 8U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 0xaU)))))),3);
        bufp->chgCData(oldp+1449,(vlSelf->Multiplier__DOT__c53_75__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1450,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_71__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 4U)))))),3);
        bufp->chgCData(oldp+1451,(vlSelf->Multiplier__DOT__c53_75__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1452,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 0x1dU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 0x1fU)) 
                                                << 2U)) 
                                         | (IData)(vlSelf->__VdfgTmp_h87e2503e__0))))),5);
        bufp->chgCData(oldp+1453,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1454,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 0x1fU)) 
                                          << 2U)) | (IData)(vlSelf->__VdfgTmp_h87e2503e__0))),3);
        bufp->chgCData(oldp+1455,(vlSelf->Multiplier__DOT__c53_76__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1456,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 0x1dU)))))),3);
        bufp->chgCData(oldp+1457,(vlSelf->Multiplier__DOT__c53_76__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1458,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                      >> 0x15U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x17U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x19U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                             >> 0x1bU)))))))),5);
        bufp->chgCData(oldp+1459,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1460,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                   >> 0x17U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 0x19U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x1bU)))))),3);
        bufp->chgCData(oldp+1461,(vlSelf->Multiplier__DOT__c53_77__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1462,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x15U)))))),3);
        bufp->chgCData(oldp+1463,(vlSelf->Multiplier__DOT__c53_77__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1464,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 0xdU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 0xfU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0x11U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x13U)))))))),5);
        bufp->chgCData(oldp+1465,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1466,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0xfU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0x11U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0x13U)))))),3);
        bufp->chgCData(oldp+1467,(vlSelf->Multiplier__DOT__c53_78__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1468,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 0xdU)))))),3);
        bufp->chgCData(oldp+1469,(vlSelf->Multiplier__DOT__c53_78__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1470,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                      >> 5U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                         >> 7U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                            >> 9U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0xbU)))))))),5);
        bufp->chgCData(oldp+1471,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1472,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 7U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 9U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1473,(vlSelf->Multiplier__DOT__c53_79__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1474,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_75__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 5U)))))),3);
        bufp->chgCData(oldp+1475,(vlSelf->Multiplier__DOT__c53_79__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1476,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                      >> 6U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                         >> 8U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                            >> 0xaU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT__casez_tmp 
                                                             >> 0xcU)))))))),5);
        bufp->chgCData(oldp+1477,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1478,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                   >> 8U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                    >> 0xaU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT__casez_tmp 
                                                     >> 0xcU)))))),3);
        bufp->chgCData(oldp+1479,(vlSelf->Multiplier__DOT__c53_8__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1480,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_8__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_7__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                     >> 6U)))))),3);
        bufp->chgCData(oldp+1481,(vlSelf->Multiplier__DOT__c53_8__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1482,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_1_io_out) 
                                                   << 3U)) 
                                         | ((8U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                            >> 0x1cU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                            >> 0x1eU)) 
                                                   << 2U)) 
                                               | (2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                              >> 0x20U)) 
                                                     << 1U))))))),5);
        bufp->chgCData(oldp+1483,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1484,((1U | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                         | (2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                           >> 0x20U)) 
                                                  << 1U))))),3);
        bufp->chgCData(oldp+1485,(vlSelf->Multiplier__DOT__c53_80__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1486,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_76__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 0x1cU)))))),3);
        bufp->chgCData(oldp+1487,(vlSelf->Multiplier__DOT__c53_80__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1488,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                      >> 0x14U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                         >> 0x16U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 0x18U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                             >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+1489,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1490,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                   >> 0x16U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                    >> 0x18U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                     >> 0x1aU)))))),3);
        bufp->chgCData(oldp+1491,(vlSelf->Multiplier__DOT__c53_81__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1492,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_77__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0x14U)))))),3);
        bufp->chgCData(oldp+1493,(vlSelf->Multiplier__DOT__c53_81__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1494,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                      >> 0xcU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                         >> 0xeU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                            >> 0x10U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                             >> 0x12U)))))))),5);
        bufp->chgCData(oldp+1495,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1496,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                   >> 0xeU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                    >> 0x10U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                     >> 0x12U)))))),3);
        bufp->chgCData(oldp+1497,(vlSelf->Multiplier__DOT__c53_82__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1498,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_78__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 0xcU)))))),3);
        bufp->chgCData(oldp+1499,(vlSelf->Multiplier__DOT__c53_82__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1500,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1501,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                   >> 6U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 8U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0xaU)))))),3);
        bufp->chgCData(oldp+1502,(vlSelf->Multiplier__DOT__c53_83__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1503,(vlSelf->Multiplier__DOT__c53_83__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1504,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1505,(vlSelf->Multiplier__DOT__c53_84__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1506,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                     >> 0x1bU)))))),3);
        bufp->chgCData(oldp+1507,(vlSelf->Multiplier__DOT__c53_84__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1508,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                      >> 0x13U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                         >> 0x15U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                            >> 0x17U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x19U)))))))),5);
        bufp->chgCData(oldp+1509,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1510,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                   >> 0x15U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                    >> 0x17U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                     >> 0x19U)))))),3);
        bufp->chgCData(oldp+1511,(vlSelf->Multiplier__DOT__c53_85__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1512,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_81__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                     >> 0x13U)))))),3);
        bufp->chgCData(oldp+1513,(vlSelf->Multiplier__DOT__c53_85__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1514,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                      >> 0xbU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                         >> 0xdU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                            >> 0xfU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0x11U)))))))),5);
        bufp->chgCData(oldp+1515,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1516,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                   >> 0xdU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                    >> 0xfU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                     >> 0x11U)))))),3);
        bufp->chgCData(oldp+1517,(vlSelf->Multiplier__DOT__c53_86__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1518,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_82__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1519,(vlSelf->Multiplier__DOT__c53_86__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1520,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_1_io_out) 
                                                   << 3U)) 
                                         | ((8U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x1cU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                            >> 0x1eU)) 
                                                   << 2U)) 
                                               | (2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                              >> 0x20U)) 
                                                     << 1U))))))),5);
        bufp->chgCData(oldp+1521,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1522,((1U | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                         | (2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                           >> 0x20U)) 
                                                  << 1U))))),3);
        bufp->chgCData(oldp+1523,(vlSelf->Multiplier__DOT__c53_87__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1524,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_84__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                     >> 0x1cU)))))),3);
        bufp->chgCData(oldp+1525,(vlSelf->Multiplier__DOT__c53_87__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1526,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                      >> 0x14U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                         >> 0x16U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                            >> 0x18U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                             >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+1527,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1528,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                   >> 0x16U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                    >> 0x18U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                     >> 0x1aU)))))),3);
        bufp->chgCData(oldp+1529,(vlSelf->Multiplier__DOT__c53_88__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1530,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_85__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                     >> 0x14U)))))),3);
        bufp->chgCData(oldp+1531,(vlSelf->Multiplier__DOT__c53_88__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1532,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                      >> 0xcU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                         >> 0xeU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                            >> 0x10U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                             >> 0x12U)))))))),5);
        bufp->chgCData(oldp+1533,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1534,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                   >> 0xeU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                    >> 0x10U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                     >> 0x12U)))))),3);
        bufp->chgCData(oldp+1535,(vlSelf->Multiplier__DOT__c53_89__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1536,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_86__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0xcU)))))),3);
        bufp->chgCData(oldp+1537,(vlSelf->Multiplier__DOT__c53_89__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1538,((((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0) 
                                    << 3U) | ((4U & 
                                               ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_97) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                               >> 4U))))))),5);
        bufp->chgCData(oldp+1539,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1540,(((4U & ((IData)(vlSelf->Multiplier__DOT___ppTemp_T_97) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                    >> 2U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                     >> 4U)))))),3);
        bufp->chgCData(oldp+1541,(vlSelf->Multiplier__DOT__c53_9__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1542,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_1_io_out) 
                                          << 2U)) | (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0))),3);
        bufp->chgCData(oldp+1543,(vlSelf->Multiplier__DOT__c53_9__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1544,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1545,(vlSelf->Multiplier__DOT__c53_90__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1546,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                     >> 0x1bU)))))),3);
        bufp->chgCData(oldp+1547,(vlSelf->Multiplier__DOT__c53_90__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1548,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                      >> 0x13U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                         >> 0x15U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                            >> 0x17U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                             >> 0x19U)))))))),5);
        bufp->chgCData(oldp+1549,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1550,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                   >> 0x15U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                    >> 0x17U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x19U)))))),3);
        bufp->chgCData(oldp+1551,(vlSelf->Multiplier__DOT__c53_91__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1552,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_88__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                     >> 0x13U)))))),3);
        bufp->chgCData(oldp+1553,(vlSelf->Multiplier__DOT__c53_91__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1554,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                      >> 0xbU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                         >> 0xdU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                            >> 0xfU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                             >> 0x11U)))))))),5);
        bufp->chgCData(oldp+1555,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1556,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                   >> 0xdU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                    >> 0xfU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 0x11U)))))),3);
        bufp->chgCData(oldp+1557,(vlSelf->Multiplier__DOT__c53_92__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1558,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_89__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1559,(vlSelf->Multiplier__DOT__c53_92__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1560,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_1_io_out) 
                                                   << 3U)) 
                                         | ((8U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 0x1cU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                            >> 0x1eU)) 
                                                   << 2U)) 
                                               | (2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                              >> 0x20U)) 
                                                     << 1U))))))),5);
        bufp->chgCData(oldp+1561,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1562,((1U | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                         | (2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                           >> 0x20U)) 
                                                  << 1U))))),3);
        bufp->chgCData(oldp+1563,(vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1564,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_90__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                     >> 0x1cU)))))),3);
        bufp->chgCData(oldp+1565,(vlSelf->Multiplier__DOT__c53_93__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1566,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                      >> 0x14U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                         >> 0x16U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                            >> 0x18U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                             >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+1567,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1568,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                   >> 0x16U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                    >> 0x18U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x1aU)))))),3);
        bufp->chgCData(oldp+1569,(vlSelf->Multiplier__DOT__c53_94__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1570,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_91__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                     >> 0x14U)))))),3);
        bufp->chgCData(oldp+1571,(vlSelf->Multiplier__DOT__c53_94__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1572,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                      >> 0xcU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                         >> 0xeU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                            >> 0x10U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                             >> 0x12U)))))))),5);
        bufp->chgCData(oldp+1573,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1574,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                   >> 0xeU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                    >> 0x10U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 0x12U)))))),3);
        bufp->chgCData(oldp+1575,(vlSelf->Multiplier__DOT__c53_95__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1576,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_92__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                     >> 0xcU)))))),3);
        bufp->chgCData(oldp+1577,(vlSelf->Multiplier__DOT__c53_95__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1578,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1579,(vlSelf->Multiplier__DOT__c53_96__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1580,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x1bU)))))),3);
        bufp->chgCData(oldp+1581,(vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1582,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                      >> 0x13U)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                         >> 0x15U)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                            >> 0x17U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                             >> 0x19U)))))))),5);
        bufp->chgCData(oldp+1583,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1584,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                   >> 0x15U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                    >> 0x17U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                     >> 0x19U)))))),3);
        bufp->chgCData(oldp+1585,(vlSelf->Multiplier__DOT__c53_97__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1586,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_94__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                     >> 0x13U)))))),3);
        bufp->chgCData(oldp+1587,(vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1588,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_1_io_out) 
                                             << 3U)) 
                                   | ((8U & ((IData)(
                                                     (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                      >> 0xbU)) 
                                             << 3U)) 
                                      | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                         >> 0xdU)) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                            >> 0xfU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                             >> 0x11U)))))))),5);
        bufp->chgCData(oldp+1589,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1590,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                   >> 0xdU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                    >> 0xfU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                     >> 0x11U)))))),3);
        bufp->chgCData(oldp+1591,(vlSelf->Multiplier__DOT__c53_98__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1592,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_95__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                     >> 0xbU)))))),3);
        bufp->chgCData(oldp+1593,(vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+1594,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_1_io_out) 
                                                   << 3U)) 
                                         | ((8U & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                            >> 0x1cU)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                            >> 0x1eU)) 
                                                   << 2U)) 
                                               | (2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                              >> 0x20U)) 
                                                     << 1U))))))),5);
        bufp->chgCData(oldp+1595,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1596,((1U | ((4U & ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                         | (2U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                           >> 0x20U)) 
                                                  << 1U))))),3);
        bufp->chgCData(oldp+1597,(vlSelf->Multiplier__DOT__c53_99__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+1598,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_1_io_out) 
                                          << 2U)) | 
                                   ((2U & (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_1_io_out)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                     >> 0x1cU)))))),3);
        bufp->chgCData(oldp+1599,(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out),2);
    }
    bufp->chgBit(oldp+1600,(vlSelf->clock));
    bufp->chgBit(oldp+1601,(vlSelf->reset));
    bufp->chgBit(oldp+1602,(vlSelf->io_go));
    bufp->chgBit(oldp+1603,(vlSelf->io_xSigned));
    bufp->chgBit(oldp+1604,(vlSelf->io_ySigned));
    bufp->chgIData(oldp+1605,(vlSelf->io_x),32);
    bufp->chgIData(oldp+1606,(vlSelf->io_y),32);
    bufp->chgQData(oldp+1607,(vlSelf->io_res),64);
    bufp->chgCData(oldp+1609,(((3U == (3U & vlSelf->io_y))
                                ? 1U : ((2U == (3U 
                                                & vlSelf->io_y)) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1610,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h557bf8db__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 1U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1611,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 3U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1612,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha690227c__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 5U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1613,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5102e58c__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 7U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1614,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h514988d4__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 9U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1615,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0xbU))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1616,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0xdU))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1617,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5feb7463__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0xfU))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1618,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha28613e5__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0x11U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1619,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0x13U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1620,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0x15U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1621,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_hb76a2bdc__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0x17U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1622,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5be92e1d__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0x19U))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1623,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0)
                                ? 1U : ((4U == (7U 
                                                & (vlSelf->io_y 
                                                   >> 0x1bU))) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1624,(((IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0)
                                ? 1U : ((4U == (vlSelf->io_y 
                                                >> 0x1dU)) 
                                        << 1U))),2);
    bufp->chgCData(oldp+1625,((((IData)((3U == (3U 
                                                & vlSelf->io_y))) 
                                << 1U) | (1U & (IData)(vlSelf->Multiplier__DOT__casez_tmp)))),2);
    bufp->chgCData(oldp+1626,(((((~ (IData)((3U == 
                                             (3U & vlSelf->io_y)))) 
                                 & (2U == (3U & vlSelf->io_y))) 
                                << 1U) | (1U & (IData)(
                                                       (vlSelf->Multiplier__DOT__casez_tmp 
                                                        >> 1U))))),2);
    bufp->chgCData(oldp+1627,(((2U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 1U) & (vlSelf->io_x 
                                                 >> 0xeU))) 
                               | (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                >> 0x11U))))),2);
    bufp->chgCData(oldp+1628,(((2U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 1U) & (vlSelf->io_x 
                                                 >> 0xfU))) 
                               | (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                >> 0x12U))))),2);
    bufp->chgCData(oldp+1629,(((2U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 1U) & (vlSelf->io_x 
                                                 >> 0x16U))) 
                               | (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                >> 0x19U))))),2);
    bufp->chgCData(oldp+1630,(((2U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 1U) & (vlSelf->io_x 
                                                 >> 0x17U))) 
                               | (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                >> 0x1aU))))),2);
    bufp->chgCData(oldp+1631,(((2U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 1U) & (vlSelf->io_x 
                                                 >> 0x1eU))) 
                               | (IData)(vlSelf->__VdfgTmp_hab77e2e0__0))),2);
    bufp->chgCData(oldp+1632,(((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5102e58c__0)) 
                                 & (0x200U == (0x380U 
                                               & vlSelf->io_y))) 
                                << 1U) | (1U & (IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                        >> 1U))))),2);
    bufp->chgCData(oldp+1633,(((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5feb7463__0)) 
                                 & (0x20000U == (0x38000U 
                                                 & vlSelf->io_y))) 
                                << 1U) | (1U & (IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                        >> 1U))))),2);
    bufp->chgCData(oldp+1634,(((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_hb76a2bdc__0)) 
                                 & (0x2000000U == (0x3800000U 
                                                   & vlSelf->io_y))) 
                                << 1U) | (1U & (IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                        >> 1U))))),2);
    bufp->chgCData(oldp+1635,(((2U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 1U) & (vlSelf->io_x 
                                                 >> 6U))) 
                               | (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                >> 9U))))),2);
    bufp->chgCData(oldp+1636,(((2U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 1U) & (vlSelf->io_x 
                                                 >> 7U))) 
                               | (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                >> 0xaU))))),2);
    bufp->chgCData(oldp+1637,(((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h557bf8db__0)) 
                                 & (8U == (0xeU & vlSelf->io_y))) 
                                << 2U) | ((2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                          >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlSelf->Multiplier__DOT__casez_tmp 
                                                           >> 3U)))))),3);
    bufp->chgCData(oldp+1638,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 0xbU))) 
                               | ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0xfU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                 >> 0x11U)))))),3);
    bufp->chgCData(oldp+1639,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 0xcU))) 
                               | ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0x10U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                 >> 0x12U)))))),3);
    bufp->chgCData(oldp+1640,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 0x13U))) 
                               | ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0x17U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                 >> 0x19U)))))),3);
    bufp->chgCData(oldp+1641,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 0x14U))) 
                               | ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0x18U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                 >> 0x1aU)))))),3);
    bufp->chgCData(oldp+1642,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 0x1bU))) 
                               | ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 0x1fU)) 
                                         << 1U)) | 
                                  (1U & (~ ((IData)(vlSelf->io_xSigned)
                                             ? (IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                        >> 0x20U))
                                             : ((~ (IData)(
                                                           (0x18000000U 
                                                            == 
                                                            (0x18000000U 
                                                             & vlSelf->io_y)))) 
                                                & (vlSelf->io_y 
                                                   >> 0x1dU)))))))),3);
    bufp->chgCData(oldp+1643,((1U | ((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                             << 2U) 
                                            & (vlSelf->io_x 
                                               >> 0x1cU))) 
                                     | (2U & ((IData)(
                                                      (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                       >> 0x20U)) 
                                              << 1U))))),3);
    bufp->chgCData(oldp+1644,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_2__DOT___c32_2_io_out) 
                                      << 1U)) | (((
                                                   (~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha690227c__0)) 
                                                   & (0x80U 
                                                      == 
                                                      (0xe0U 
                                                       & vlSelf->io_y))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (IData)(vlSelf->Multiplier__DOT__c53_3__DOT___c32_2_io_out))))),3);
    bufp->chgCData(oldp+1645,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out) 
                                      << 1U)) | ((2U 
                                                  & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                      << 1U) 
                                                     & (vlSelf->io_x 
                                                        >> 0x19U))) 
                                                 | (1U 
                                                    & (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_2_io_out))))),3);
    bufp->chgCData(oldp+1646,(((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h514988d4__0)) 
                                 & (0x800U == (0xe00U 
                                               & vlSelf->io_y))) 
                                << 2U) | ((2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                          >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                           >> 3U)))))),3);
    bufp->chgCData(oldp+1647,(((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha28613e5__0)) 
                                 & (0x80000U == (0xe0000U 
                                                 & vlSelf->io_y))) 
                                << 2U) | ((2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                          >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                           >> 3U)))))),3);
    bufp->chgCData(oldp+1648,(((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h5be92e1d__0)) 
                                 & (0x8000000U == (0xe000000U 
                                                   & vlSelf->io_y))) 
                                << 2U) | ((2U & ((IData)(
                                                         (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                          >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                           >> 3U)))))),3);
    bufp->chgCData(oldp+1649,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 3U))) 
                               | ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 7U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                 >> 9U)))))),3);
    bufp->chgCData(oldp+1650,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 4U))) 
                               | ((2U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                  >> 8U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                 >> 0xaU)))))),3);
    bufp->chgCData(oldp+1651,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0)) 
                                  & (0x20U == (0x38U 
                                               & vlSelf->io_y))) 
                                 << 3U) | ((4U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                           >> 1U)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_27 
                                                         >> 3U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT__casez_tmp 
                                                            >> 5U)))))))),5);
    bufp->chgCData(oldp+1652,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_1__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53__DOT___c32_1_io_out)) 
                                                 | ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_hac82e295__0)) 
                                                    & (0x20U 
                                                       == 
                                                       (0x38U 
                                                        & vlSelf->io_y)))))),3);
    bufp->chgCData(oldp+1653,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x600U 
                                                                         == 
                                                                         (0x600U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 0xbU)))))))))),5);
    bufp->chgCData(oldp+1654,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x600U 
                                                                     == 
                                                                     (0x600U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0xbU)))))))),3);
    bufp->chgCData(oldp+1655,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                        << 3U) & (vlSelf->io_x 
                                                  >> 8U))) 
                                | ((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                   >> 0xdU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0xfU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0x11U)))))))),5);
    bufp->chgCData(oldp+1656,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0xbU)))))),3);
    bufp->chgCData(oldp+1657,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                        << 3U) & (vlSelf->io_x 
                                                  >> 9U))) 
                                | ((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                   >> 0xeU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0x10U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0x12U)))))))),5);
    bufp->chgCData(oldp+1658,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_107__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_104__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0xcU)))))),3);
    bufp->chgCData(oldp+1659,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_105__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x1800U 
                                                                         == 
                                                                         (0x1800U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 0xdU)))))))))),5);
    bufp->chgCData(oldp+1660,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_125 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x1800U 
                                                                     == 
                                                                     (0x1800U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0xdU)))))))),3);
    bufp->chgCData(oldp+1661,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0)) 
                                  & (0x2000U == (0x3800U 
                                                 & vlSelf->io_y))) 
                                 << 3U) | ((4U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                           >> 1U)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                         >> 3U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                            >> 5U)))))))),5);
    bufp->chgCData(oldp+1662,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_11__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_9__DOT___c32_1_io_out)) 
                                                 | ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h4c6e6f5e__0)) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x3800U 
                                                        & vlSelf->io_y)))))),3);
    bufp->chgCData(oldp+1663,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_110__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x6000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 0xfU)))))))))),5);
    bufp->chgCData(oldp+1664,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_139 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x6000U 
                                                                     == 
                                                                     (0x6000U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0xfU)))))))),3);
    bufp->chgCData(oldp+1665,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x18000U 
                                                                         == 
                                                                         (0x18000U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 0x11U)))))))))),5);
    bufp->chgCData(oldp+1666,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_153 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x18000U 
                                                                     == 
                                                                     (0x18000U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0x11U)))))))),3);
    bufp->chgCData(oldp+1667,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x60000U 
                                                                         == 
                                                                         (0x60000U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 0x13U)))))))))),5);
    bufp->chgCData(oldp+1668,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_167 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x60000U 
                                                                     == 
                                                                     (0x60000U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0x13U)))))))),3);
    bufp->chgCData(oldp+1669,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                        << 3U) & (vlSelf->io_x 
                                                  >> 0x10U))) 
                                | ((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                   >> 0x15U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0x17U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0x19U)))))))),5);
    bufp->chgCData(oldp+1670,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x13U)))))),3);
    bufp->chgCData(oldp+1671,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                        << 3U) & (vlSelf->io_x 
                                                  >> 0x11U))) 
                                | ((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                   >> 0x16U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0x18U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0x1aU)))))))),5);
    bufp->chgCData(oldp+1672,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_123__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_121__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x14U)))))),3);
    bufp->chgCData(oldp+1673,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_122__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x180000U 
                                                                         == 
                                                                         (0x180000U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 0x15U)))))))))),5);
    bufp->chgCData(oldp+1674,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_181 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x180000U 
                                                                     == 
                                                                     (0x180000U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0x15U)))))))),3);
    bufp->chgCData(oldp+1675,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_125__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x600000U 
                                                                         == 
                                                                         (0x600000U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 0x17U)))))))))),5);
    bufp->chgCData(oldp+1676,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_195 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_167 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x600000U 
                                                                     == 
                                                                     (0x600000U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0x17U)))))))),3);
    bufp->chgCData(oldp+1677,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x1800000U 
                                                                         == 
                                                                         (0x1800000U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 0x19U)))))))))),5);
    bufp->chgCData(oldp+1678,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_209 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x1800000U 
                                                                     == 
                                                                     (0x1800000U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0x19U)))))))),3);
    bufp->chgCData(oldp+1679,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                        << 3U) & (vlSelf->io_x 
                                                  >> 0x18U))) 
                                | ((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                   >> 0x1dU)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 0x1fU)) 
                                           << 1U)) 
                                    | (1U & (~ ((IData)(vlSelf->io_xSigned)
                                                 ? (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                            >> 0x20U))
                                                 : 
                                                ((~ (IData)(
                                                            (0x6000000U 
                                                             == 
                                                             (0x6000000U 
                                                              & vlSelf->io_y)))) 
                                                 & (vlSelf->io_y 
                                                    >> 0x1bU)))))))))),5);
    bufp->chgCData(oldp+1680,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x6000000U 
                                                                     == 
                                                                     (0x6000000U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 0x1bU)))))))),3);
    bufp->chgCData(oldp+1681,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_129__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x1bU)))))),3);
    bufp->chgCData(oldp+1682,((1U | ((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_1_io_out) 
                                               << 3U)) 
                                     | ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                << 3U) 
                                               & (vlSelf->io_x 
                                                  >> 0x19U))) 
                                        | ((4U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                           >> 0x1eU)) 
                                                  << 2U)) 
                                           | (2U & 
                                              ((IData)(
                                                       (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                        >> 0x20U)) 
                                               << 1U))))))),5);
    bufp->chgCData(oldp+1683,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_131__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_130__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0x1cU)))))),3);
    bufp->chgCData(oldp+1684,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_137__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_12__DOT___c32_2_io_out) 
                                       << 2U)) | ((
                                                   ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0)) 
                                                    & (0x8000U 
                                                       == 
                                                       (0xe000U 
                                                        & vlSelf->io_y))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out))))))),5);
    bufp->chgCData(oldp+1685,(((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha492cabb__0)) 
                                 & (0x8000U == (0xe000U 
                                                & vlSelf->io_y))) 
                                << 2U) | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_15__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->Multiplier__DOT__c53_14__DOT___c32_2_io_out))))),3);
    bufp->chgCData(oldp+1686,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0)) 
                                  & (0x800000U == (0xe00000U 
                                                   & vlSelf->io_y))) 
                                 << 3U) | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_35__DOT___c32_2_io_out) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->Multiplier__DOT__c53_34__DOT___c32_2_io_out) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(vlSelf->Multiplier__DOT__c53_33__DOT___c32_2_io_out))))))),5);
    bufp->chgCData(oldp+1687,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_146__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_145__DOT___c32_1_io_out)) 
                                                 | ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68865fde__0)) 
                                                    & (0x800000U 
                                                       == 
                                                       (0xe00000U 
                                                        & vlSelf->io_y)))))),3);
    bufp->chgCData(oldp+1688,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_159__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_58__DOT___c32_2_io_out) 
                                       << 2U)) | ((4U 
                                                   & ((IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out)) 
                                                     | ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0)) 
                                                        & (4U 
                                                           == 
                                                           (vlSelf->io_y 
                                                            >> 0x1dU)))))))),5);
    bufp->chgCData(oldp+1689,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_57__DOT___c32_2_io_out) 
                                      << 1U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_56__DOT___c32_2_io_out)) 
                                                 | ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h68e1d768__0)) 
                                                    & (4U 
                                                       == 
                                                       (vlSelf->io_y 
                                                        >> 0x1dU)))))),3);
    bufp->chgCData(oldp+1690,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_161__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_62__DOT___c32_2_io_out) 
                                       << 2U)) | ((4U 
                                                   & ((IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out)) 
                                                     | (1U 
                                                        & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                           & vlSelf->io_x))))))),5);
    bufp->chgCData(oldp+1691,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_61__DOT___c32_2_io_out) 
                                      << 1U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_60__DOT___c32_2_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & vlSelf->io_x))))),3);
    bufp->chgCData(oldp+1692,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_163__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_66__DOT___c32_2_io_out) 
                                       << 2U)) | ((4U 
                                                   & ((IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out)) 
                                                     | (1U 
                                                        & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                           & (vlSelf->io_x 
                                                              >> 1U)))))))),5);
    bufp->chgCData(oldp+1693,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_65__DOT___c32_2_io_out) 
                                      << 1U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_64__DOT___c32_2_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 1U)))))),3);
    bufp->chgCData(oldp+1694,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_165__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_70__DOT___c32_2_io_out) 
                                       << 2U)) | ((4U 
                                                   & ((IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out)) 
                                                     | (1U 
                                                        & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                           & (vlSelf->io_x 
                                                              >> 2U)))))))),5);
    bufp->chgCData(oldp+1695,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_69__DOT___c32_2_io_out) 
                                      << 1U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_68__DOT___c32_2_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 2U)))))),3);
    bufp->chgCData(oldp+1696,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_167__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_74__DOT___c32_2_io_out) 
                                       << 2U)) | ((4U 
                                                   & ((IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out)) 
                                                     | (1U 
                                                        & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                           & (vlSelf->io_x 
                                                              >> 3U)))))))),5);
    bufp->chgCData(oldp+1697,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_73__DOT___c32_2_io_out) 
                                      << 1U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_72__DOT___c32_2_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 3U)))))),3);
    bufp->chgCData(oldp+1698,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                        << 3U) & (vlSelf->io_x 
                                                  >> 6U))) 
                                | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_98__DOT___c32_2_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_97__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_96__DOT___c32_2_io_out))))))),5);
    bufp->chgCData(oldp+1699,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_178__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 9U)))))),3);
    bufp->chgCData(oldp+1700,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                        << 3U) & (vlSelf->io_x 
                                                  >> 7U))) 
                                | ((4U & ((IData)(vlSelf->Multiplier__DOT__c53_101__DOT___c32_2_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_100__DOT___c32_2_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->Multiplier__DOT__c53_99__DOT___c32_2_io_out))))))),5);
    bufp->chgCData(oldp+1701,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_182__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_180__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 0xaU)))))),3);
    bufp->chgCData(oldp+1702,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_188__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_114__DOT___c32_2_io_out) 
                                       << 2U)) | ((4U 
                                                   & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       << 2U) 
                                                      & (vlSelf->io_x 
                                                         >> 0xfU))) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out))))))),5);
    bufp->chgCData(oldp+1703,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 0xfU))) 
                               | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_117__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out))))),3);
    bufp->chgCData(oldp+1704,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_189__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT__c53_116__DOT___c32_2_io_out) 
                                       << 2U)) | ((4U 
                                                   & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       << 2U) 
                                                      & (vlSelf->io_x 
                                                         >> 0x10U))) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out))))))),5);
    bufp->chgCData(oldp+1705,(((4U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                       << 2U) & (vlSelf->io_x 
                                                 >> 0x10U))) 
                               | ((2U & ((IData)(vlSelf->Multiplier__DOT__c53_119__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSelf->Multiplier__DOT__c53_118__DOT___c32_2_io_out))))),3);
    bufp->chgCData(oldp+1706,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_196__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)(vlSelf->Multiplier__DOT___c22_13_io_out) 
                                       << 2U)) | ((4U 
                                                   & ((IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                          << 1U) 
                                                         & (vlSelf->io_x 
                                                            >> 0x18U))) 
                                                     | (1U 
                                                        & (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out))))))),5);
    bufp->chgCData(oldp+1707,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_127__DOT___c32_2_io_out) 
                                      << 1U)) | ((2U 
                                                  & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                      << 1U) 
                                                     & (vlSelf->io_x 
                                                        >> 0x18U))) 
                                                 | (1U 
                                                    & (IData)(vlSelf->Multiplier__DOT__c53_128__DOT___c32_2_io_out))))),3);
    bufp->chgCData(oldp+1708,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0)) 
                                  & (0x200000U == (0x380000U 
                                                   & vlSelf->io_y))) 
                                 << 3U) | ((4U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_153 
                                                           >> 1U)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_139 
                                                         >> 3U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_125 
                                                            >> 5U)))))))),5);
    bufp->chgCData(oldp+1709,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_29__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_26__DOT___c32_1_io_out)) 
                                                 | ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h1e610ac9__0)) 
                                                    & (0x200000U 
                                                       == 
                                                       (0x380000U 
                                                        & vlSelf->io_y)))))),3);
    bufp->chgCData(oldp+1710,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0)) 
                                  & (0x20000000U == 
                                     (0x38000000U & vlSelf->io_y))) 
                                 << 3U) | ((4U & ((IData)(
                                                          (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                           >> 1U)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(
                                                        (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                         >> 3U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->Multiplier__DOT___ppTemp_T_181 
                                                            >> 5U)))))))),5);
    bufp->chgCData(oldp+1711,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_55__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_51__DOT___c32_1_io_out)) 
                                                 | ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_ha0b85421__0)) 
                                                    & (0x20000000U 
                                                       == 
                                                       (0x38000000U 
                                                        & vlSelf->io_y)))))),3);
    bufp->chgCData(oldp+1712,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & (((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                        << 3U) & (vlSelf->io_x 
                                                  >> 1U))) 
                                | ((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_223 
                                                   >> 6U)) 
                                          << 2U)) | 
                                   ((2U & ((IData)(
                                                   (vlSelf->Multiplier__DOT___ppTemp_T_209 
                                                    >> 8U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelf->Multiplier__DOT___ppTemp_T_195 
                                                     >> 0xaU)))))))),5);
    bufp->chgCData(oldp+1713,(((4U & ((IData)(vlSelf->Multiplier__DOT__c53_83__DOT___c32_1_io_out) 
                                      << 2U)) | ((2U 
                                                  & (IData)(vlSelf->Multiplier__DOT__c53_79__DOT___c32_1_io_out)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->Multiplier__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                       & (vlSelf->io_x 
                                                          >> 4U)))))),3);
    bufp->chgCData(oldp+1714,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_80__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x18U 
                                                                         == 
                                                                         (0x18U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 5U)))))))))),5);
    bufp->chgCData(oldp+1715,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_69 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_41 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x18U 
                                                                     == 
                                                                     (0x18U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 5U)))))))),3);
    bufp->chgCData(oldp+1716,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_87__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x60U 
                                                                         == 
                                                                         (0x60U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 7U)))))))))),5);
    bufp->chgCData(oldp+1717,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_83 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_55 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x60U 
                                                                     == 
                                                                     (0x60U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 7U)))))))),3);
    bufp->chgCData(oldp+1718,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out) 
                                         << 3U)) | 
                               ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                >> 0x1bU)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->io_xSigned)
                                                             ? (IData)(
                                                                       (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                                        >> 0x20U))
                                                             : 
                                                            ((~ (IData)(
                                                                        (0x180U 
                                                                         == 
                                                                         (0x180U 
                                                                          & vlSelf->io_y)))) 
                                                             & (vlSelf->io_y 
                                                                >> 9U)))))))))),5);
    bufp->chgCData(oldp+1719,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->io_xSigned)
                                                         ? (IData)(
                                                                   (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                                    >> 0x20U))
                                                         : 
                                                        ((~ (IData)(
                                                                    (0x180U 
                                                                     == 
                                                                     (0x180U 
                                                                      & vlSelf->io_y)))) 
                                                         & (vlSelf->io_y 
                                                            >> 9U)))))))),3);
}
