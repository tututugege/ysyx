// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 2900);
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgCData(oldp+0,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_2_io_out) 
                                       << 1U)) | ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_1_io_out)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+1,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                >> 6U)) 
                                       << 2U)) | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                               >> 8U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                                >> 0xaU)))))),3);
        bufp->chgCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+3,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_1_io_out) 
                                       << 2U)) | ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_19__DOT___c32_1_io_out)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                                >> 4U)))))),3);
        bufp->chgCData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+5,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_209__DOT___c32_1_io_out) 
                                          << 3U)) | 
                                ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_156__DOT___c32_2_io_out) 
                                        << 2U)) | (
                                                   (4U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_159__DOT___c32_2_io_out) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+6,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_2_io_out) 
                                       << 1U)) | ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_1_io_out)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+7,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_2_io_out) 
                                       << 1U)) | ((2U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_159__DOT___c32_2_io_out) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+9,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_1_io_out) 
                                       << 2U)) | ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_209__DOT___c32_1_io_out)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_156__DOT___c32_2_io_out) 
                                                        >> 1U))))),3);
        bufp->chgCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+11,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_161__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+12,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+13,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_161__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+15,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+17,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_163__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+18,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+19,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_163__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+21,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+23,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_165__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+24,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+25,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_165__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+27,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+29,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_167__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+30,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+31,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_167__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+33,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+35,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_169__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_168__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+36,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_215__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_215__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_215__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+37,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_169__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_168__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_215__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+39,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_215__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_215__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+41,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_215__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_169__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_168__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_171__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_170__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+42,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_216__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_216__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_216__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+43,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_168__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_171__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_170__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_216__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+45,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_216__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_215__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_169__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_216__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+47,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_216__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_170__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_173__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_172__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+48,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_217__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_217__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_217__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+49,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_173__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_172__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_217__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+51,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_217__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_216__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_170__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_217__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+53,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_217__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_173__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_172__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_175__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+54,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_218__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_218__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_218__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+55,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_172__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_175__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_218__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+57,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_218__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_217__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_173__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_218__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+59,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_218__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_175__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+60,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+61,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+63,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_218__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_175__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+65,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_20__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0xdU)) 
                                           << 3U)) 
                                    | ((4U & ((IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                       >> 0xfU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                          >> 0x11U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                           >> 0x13U)))))))),5);
        bufp->chgCData(oldp+66,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+67,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                 >> 0xfU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                                >> 0x11U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                                 >> 0x13U)))))),3);
        bufp->chgCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+69,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_20__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                                 >> 0xdU)))))),3);
        bufp->chgCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+71,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+72,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+73,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+75,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+77,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_2_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+78,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+79,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_2_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+81,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+83,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_2_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_1_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_22_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+84,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+85,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_1_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_22_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+87,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_2_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+89,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_22_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_25_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+90,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+91,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_25_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+93,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_22_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+95,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_1_io_out) 
                                           << 3U)) 
                                 | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_25_io_out) 
                                           << 2U)) 
                                    | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_2_io_out) 
                                              << 1U)) 
                                       | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_26_io_out) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+96,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+97,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_2_io_out) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_26_io_out) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+99,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_1_io_out) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_1_io_out)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_25_io_out) 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+101,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_26_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_23_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+102,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+103,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_23_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+105,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_26_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+107,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_23_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_27_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+108,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+109,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_27_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+111,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_23_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+113,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_27_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_28_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+114,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+115,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_28_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+117,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_27_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+119,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_28_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_29_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+120,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+121,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_29_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+123,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_28_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+125,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_29_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_30_io_out) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+126,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+127,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_30_io_out) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+129,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_29_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+131,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 5U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 7U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 9U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0xbU)))))))),5);
        bufp->chgCData(oldp+132,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+133,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 7U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 9U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0xbU)))))),3);
        bufp->chgCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+135,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 5U)))))),3);
        bufp->chgCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+137,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_30_io_out) 
                                            << 2U)) 
                                     | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_2_io_out) 
                                               << 1U)) 
                                        | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_117__DOT___c32_2_io_out)) 
                                           | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_190__DOT___c32_2_io_out))))))),5);
        bufp->chgCData(oldp+138,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+139,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_117__DOT___c32_2_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_190__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+141,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_1_io_out)) 
                                   | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_30_io_out) 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+143,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0xeU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x10U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x12U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x14U)))))))),5);
        bufp->chgCData(oldp+144,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+145,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x10U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x12U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x14U)))))),3);
        bufp->chgCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+147,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0xeU)))))),3);
        bufp->chgCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+149,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 6U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 8U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0xaU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0xcU)))))))),5);
        bufp->chgCData(oldp+150,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+151,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 8U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0xaU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0xcU)))))),3);
        bufp->chgCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+153,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 6U)))))),3);
        bufp->chgCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+155,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h1e610ac9__0) 
                                   << 3U) | ((4U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                              >> 4U))))))),5);
        bufp->chgCData(oldp+156,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+157,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 2U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 4U)))))),3);
        bufp->chgCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+159,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_1_io_out) 
                                         << 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h1e610ac9__0))),3);
        bufp->chgCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+161,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0xfU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x11U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x13U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x15U)))))))),5);
        bufp->chgCData(oldp+162,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+163,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x11U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x13U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x15U)))))),3);
        bufp->chgCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+165,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0xfU)))))),3);
        bufp->chgCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+167,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 7U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 9U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0xbU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0xdU)))))))),5);
        bufp->chgCData(oldp+168,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+169,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 9U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0xbU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0xdU)))))),3);
        bufp->chgCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+171,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 7U)))))),3);
        bufp->chgCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+173,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h1e610ac9__0)) 
                                       & (0x200000U 
                                          == (0x380000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))) 
                                      << 3U) | ((4U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 1U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                                 >> 5U)))))))),5);
        bufp->chgCData(oldp+174,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+175,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 1U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 3U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 5U)))))),3);
        bufp->chgCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+177,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_1_io_out)) 
                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h1e610ac9__0)) 
                                      & (0x200000U 
                                         == (0x380000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))))),3);
        bufp->chgCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+179,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_2__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 1U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 3U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 5U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 7U)))))))),5);
        bufp->chgCData(oldp+180,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+181,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 3U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 5U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 7U)))))),3);
        bufp->chgCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+183,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_2__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 1U)))))),3);
        bufp->chgCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+185,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x10U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x12U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x14U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x16U)))))))),5);
        bufp->chgCData(oldp+186,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+187,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x12U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x14U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x16U)))))),3);
        bufp->chgCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+189,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x10U)))))),3);
        bufp->chgCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+191,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 8U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0xaU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0xcU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0xeU)))))))),5);
        bufp->chgCData(oldp+192,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+193,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0xaU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0xcU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0xeU)))))),3);
        bufp->chgCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+195,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 8U)))))),3);
        bufp->chgCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+197,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 2U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 4U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 6U)))))))),5);
        bufp->chgCData(oldp+198,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+199,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 2U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 4U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 6U)))))),3);
        bufp->chgCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+201,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167))))),3);
        bufp->chgCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+203,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x11U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x13U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x15U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x17U)))))))),5);
        bufp->chgCData(oldp+204,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+205,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x13U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x15U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x17U)))))),3);
        bufp->chgCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+207,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x11U)))))),3);
        bufp->chgCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+209,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 9U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0xbU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0xdU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0xfU)))))))),5);
        bufp->chgCData(oldp+210,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+211,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0xbU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0xdU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0xfU)))))),3);
        bufp->chgCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+213,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 9U)))))),3);
        bufp->chgCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+215,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 1U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 3U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 5U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 7U)))))))),5);
        bufp->chgCData(oldp+216,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+217,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 3U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 5U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 7U)))))),3);
        bufp->chgCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+219,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 1U)))))),3);
        bufp->chgCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+221,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x12U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x14U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x16U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x18U)))))))),5);
        bufp->chgCData(oldp+222,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+223,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x14U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x16U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x18U)))))),3);
        bufp->chgCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+225,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x12U)))))),3);
        bufp->chgCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+227,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0xaU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0xcU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0xeU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x10U)))))))),5);
        bufp->chgCData(oldp+228,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+229,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0xcU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0xeU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x10U)))))),3);
        bufp->chgCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+231,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0xaU)))))),3);
        bufp->chgCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+233,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 2U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 4U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 6U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 8U)))))))),5);
        bufp->chgCData(oldp+234,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+235,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 4U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 6U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 8U)))))),3);
        bufp->chgCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+237,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 2U)))))),3);
        bufp->chgCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+239,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+240,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+241,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+243,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+245,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 2U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 4U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 6U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 8U)))))))),5);
        bufp->chgCData(oldp+246,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+247,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 4U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 6U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 8U)))))),3);
        bufp->chgCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+249,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 2U)))))),3);
        bufp->chgCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+251,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0xbU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0xdU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x11U)))))))),5);
        bufp->chgCData(oldp+252,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+253,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0xdU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0xfU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x11U)))))),3);
        bufp->chgCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+255,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0xbU)))))),3);
        bufp->chgCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+257,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 3U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 5U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 7U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 9U)))))))),5);
        bufp->chgCData(oldp+258,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+259,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 5U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 7U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 9U)))))),3);
        bufp->chgCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+261,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 3U)))))),3);
        bufp->chgCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+263,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+264,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+265,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+267,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+269,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0xcU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0xeU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x10U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x12U)))))))),5);
        bufp->chgCData(oldp+270,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+271,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+273,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0xcU)))))),3);
        bufp->chgCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+275,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 4U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 6U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 8U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0xaU)))))))),5);
        bufp->chgCData(oldp+276,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+277,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 6U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 8U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0xaU)))))),3);
        bufp->chgCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+279,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 4U)))))),3);
        bufp->chgCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+281,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x15U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x17U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x19U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x1bU)))))))),5);
        bufp->chgCData(oldp+282,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+283,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x17U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x19U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x1bU)))))),3);
        bufp->chgCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+285,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x15U)))))),3);
        bufp->chgCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+287,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0xdU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0xfU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x11U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x13U)))))))),5);
        bufp->chgCData(oldp+288,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+289,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0xfU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x11U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x13U)))))),3);
        bufp->chgCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+291,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0xdU)))))),3);
        bufp->chgCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+293,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 5U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 7U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 9U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0xbU)))))))),5);
        bufp->chgCData(oldp+294,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+295,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 7U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 9U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0xbU)))))),3);
        bufp->chgCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+297,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 5U)))))),3);
        bufp->chgCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+299,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x16U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x18U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1aU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x1cU)))))))),5);
        bufp->chgCData(oldp+300,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+301,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x18U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x1aU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x1cU)))))),3);
        bufp->chgCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+303,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x16U)))))),3);
        bufp->chgCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+305,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0xeU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x10U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x12U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x14U)))))))),5);
        bufp->chgCData(oldp+306,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+307,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x10U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x12U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x14U)))))),3);
        bufp->chgCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+309,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0xeU)))))),3);
        bufp->chgCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+311,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 3U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 5U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 7U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 9U)))))))),5);
        bufp->chgCData(oldp+312,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+313,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 5U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 7U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 9U)))))),3);
        bufp->chgCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+315,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 3U)))))),3);
        bufp->chgCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+317,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 6U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 8U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0xaU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0xcU)))))))),5);
        bufp->chgCData(oldp+318,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+319,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 8U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0xaU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0xcU)))))),3);
        bufp->chgCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+321,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 6U)))))),3);
        bufp->chgCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+323,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha0b85421__0) 
                                   << 3U) | ((4U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                             >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                              >> 4U))))))),5);
        bufp->chgCData(oldp+324,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+325,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 2U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 4U)))))),3);
        bufp->chgCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+327,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_1_io_out) 
                                         << 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha0b85421__0))),3);
        bufp->chgCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+329,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x17U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x19U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1bU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x1dU)))))))),5);
        bufp->chgCData(oldp+330,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+331,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x19U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x1bU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x1dU)))))),3);
        bufp->chgCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+333,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x17U)))))),3);
        bufp->chgCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+335,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0xfU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x11U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x13U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x15U)))))))),5);
        bufp->chgCData(oldp+336,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+337,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x11U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x13U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x15U)))))),3);
        bufp->chgCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+339,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0xfU)))))),3);
        bufp->chgCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+341,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 7U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 9U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0xbU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0xdU)))))))),5);
        bufp->chgCData(oldp+342,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+343,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 9U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0xbU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0xdU)))))),3);
        bufp->chgCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+345,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 7U)))))),3);
        bufp->chgCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+347,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha0b85421__0)) 
                                       & (0x20000000U 
                                          == (0x38000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))) 
                                      << 3U) | ((4U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 1U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                                 >> 5U)))))))),5);
        bufp->chgCData(oldp+348,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+349,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                  >> 1U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 3U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 5U)))))),3);
        bufp->chgCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+351,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_1_io_out)) 
                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha0b85421__0)) 
                                      & (0x20000000U 
                                         == (0x38000000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))))),3);
        bufp->chgCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+353,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x18U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x1aU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1cU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x1eU)))))))),5);
        bufp->chgCData(oldp+354,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+355,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x1aU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x1cU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x1eU)))))),3);
        bufp->chgCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+357,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x18U)))))),3);
        bufp->chgCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+359,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0x10U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x12U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x14U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x16U)))))))),5);
        bufp->chgCData(oldp+360,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+361,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x12U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x14U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x16U)))))),3);
        bufp->chgCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+363,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0x10U)))))),3);
        bufp->chgCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+365,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 8U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 0xaU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0xcU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0xeU)))))))),5);
        bufp->chgCData(oldp+366,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+367,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0xaU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0xcU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0xeU)))))),3);
        bufp->chgCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+369,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 8U)))))),3);
        bufp->chgCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+371,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                        >> 2U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 4U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                            >> 6U)))))))),5);
        bufp->chgCData(oldp+372,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+373,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                  >> 2U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 4U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 6U)))))),3);
        bufp->chgCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+375,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223))))),3);
        bufp->chgCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+377,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 4U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 6U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 8U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0xaU)))))))),5);
        bufp->chgCData(oldp+378,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+379,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 6U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 8U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0xaU)))))),3);
        bufp->chgCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+381,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 4U)))))),3);
        bufp->chgCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+383,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x19U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x1bU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1dU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x1fU)))))))),5);
        bufp->chgCData(oldp+384,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+385,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x1bU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x1dU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x1fU)))))),3);
        bufp->chgCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+387,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x19U)))))),3);
        bufp->chgCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+389,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0x11U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x13U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x15U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x17U)))))))),5);
        bufp->chgCData(oldp+390,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+391,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x13U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x15U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x17U)))))),3);
        bufp->chgCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+393,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0x11U)))))),3);
        bufp->chgCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+395,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 9U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 0xbU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0xdU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0xfU)))))))),5);
        bufp->chgCData(oldp+396,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+397,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0xbU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0xdU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0xfU)))))),3);
        bufp->chgCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+399,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 9U)))))),3);
        bufp->chgCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+401,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                     >> 1U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                        >> 3U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 5U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                            >> 7U)))))))),5);
        bufp->chgCData(oldp+402,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+403,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                  >> 3U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 5U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 7U)))))),3);
        bufp->chgCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+405,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                    >> 1U)))))),3);
        bufp->chgCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+407,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x1aU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x1cU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1eU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0x20U)))))))),5);
        bufp->chgCData(oldp+408,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+409,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x1cU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x1eU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0x20U)))))),3);
        bufp->chgCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+411,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x1aU)))))),3);
        bufp->chgCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+413,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0x12U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x14U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x16U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x18U)))))))),5);
        bufp->chgCData(oldp+414,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+415,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x14U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x16U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x18U)))))),3);
        bufp->chgCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+417,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0x12U)))))),3);
        bufp->chgCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+419,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 0xaU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 0xcU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0xeU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0x10U)))))))),5);
        bufp->chgCData(oldp+420,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+421,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0xcU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0xeU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0x10U)))))),3);
        bufp->chgCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+423,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 0xaU)))))),3);
        bufp->chgCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+425,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                     >> 2U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                        >> 4U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 6U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                            >> 8U)))))))),5);
        bufp->chgCData(oldp+426,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+427,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                  >> 4U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 6U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 8U)))))),3);
        bufp->chgCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+429,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                    >> 2U)))))),3);
        bufp->chgCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+431,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x1bU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x1dU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1fU)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__signal)))))),5);
        bufp->chgCData(oldp+432,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+433,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x1dU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x1fU)) 
                                          << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__signal)))),3);
        bufp->chgCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+435,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+437,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+438,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+439,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+441,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+443,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 5U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 7U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 9U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0xbU)))))))),5);
        bufp->chgCData(oldp+444,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+445,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 7U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 9U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0xbU)))))),3);
        bufp->chgCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+447,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 5U)))))),3);
        bufp->chgCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+449,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 0xbU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 0xdU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0x11U)))))))),5);
        bufp->chgCData(oldp+450,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+451,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0xdU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0xfU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0x11U)))))),3);
        bufp->chgCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+453,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 0xbU)))))),3);
        bufp->chgCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+455,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                     >> 3U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                        >> 5U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 7U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                            >> 9U)))))))),5);
        bufp->chgCData(oldp+456,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+457,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                  >> 5U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 7U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 9U)))))),3);
        bufp->chgCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+459,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                    >> 3U)))))),3);
        bufp->chgCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+461,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x1cU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x20U)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__signal)))))),5);
        bufp->chgCData(oldp+462,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+463,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x1eU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0x20U)) 
                                          << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__signal)))),3);
        bufp->chgCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+465,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+467,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+468,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+469,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+471,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+473,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 0xcU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 0xeU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0x10U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0x12U)))))))),5);
        bufp->chgCData(oldp+474,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+475,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+477,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 0xcU)))))),3);
        bufp->chgCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+479,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                     >> 4U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                        >> 6U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 8U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                            >> 0xaU)))))))),5);
        bufp->chgCData(oldp+480,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+481,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                  >> 6U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 8U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 0xaU)))))),3);
        bufp->chgCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+483,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                    >> 4U)))))),3);
        bufp->chgCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+485,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 0x1dU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 0x1fU)) 
                                               << 2U)) 
                                        | (IData)(vlSelf->__VdfgTmp_h1a499f6c__0))))),5);
        bufp->chgCData(oldp+486,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+487,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 0x1fU)) 
                                         << 2U)) | (IData)(vlSelf->__VdfgTmp_h1a499f6c__0))),3);
        bufp->chgCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+489,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 0x1dU)))))),3);
        bufp->chgCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+491,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0x15U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x17U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x19U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x1bU)))))))),5);
        bufp->chgCData(oldp+492,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+493,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x17U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x19U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x1bU)))))),3);
        bufp->chgCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+495,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0x15U)))))),3);
        bufp->chgCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+497,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 0xdU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 0xfU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0x11U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0x13U)))))))),5);
        bufp->chgCData(oldp+498,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+499,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0xfU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0x11U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0x13U)))))),3);
        bufp->chgCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+501,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 0xdU)))))),3);
        bufp->chgCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+503,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                     >> 5U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                        >> 7U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 9U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                            >> 0xbU)))))))),5);
        bufp->chgCData(oldp+504,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+505,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                  >> 7U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 9U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 0xbU)))))),3);
        bufp->chgCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+507,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                    >> 5U)))))),3);
        bufp->chgCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+509,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                     >> 6U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                        >> 8U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0xaU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                            >> 0xcU)))))))),5);
        bufp->chgCData(oldp+510,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+511,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                  >> 8U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                   >> 0xaU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                  >> 0xcU)))))),3);
        bufp->chgCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+513,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                    >> 6U)))))),3);
        bufp->chgCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+515,((1U | ((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+516,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+517,((1U | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+519,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+521,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+522,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+523,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+525,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+527,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                     >> 0xcU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                        >> 0xeU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                           >> 0x10U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                            >> 0x12U)))))))),5);
        bufp->chgCData(oldp+528,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+529,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+531,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                    >> 0xcU)))))),3);
        bufp->chgCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+533,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                             << 3U) 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                               >> 1U))) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                        >> 6U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                           >> 8U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                            >> 0xaU)))))))),5);
        bufp->chgCData(oldp+534,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+535,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                  >> 6U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                   >> 8U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                  >> 0xaU)))))),3);
        bufp->chgCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+537,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_1_io_out)) 
                                   | (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                               >> 4U)))))),3);
        bufp->chgCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+539,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                     >> 0x1bU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                        >> 0x1dU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                           >> 0x1fU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ ((3U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                                                   ? (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                              >> 0x20U))
                                                   : 
                                                  ((~ (IData)(
                                                              (0x18U 
                                                               == 
                                                               (0x18U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 5U)))))))))),5);
        bufp->chgCData(oldp+540,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+541,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 0x1dU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                   >> 0x1fU)) 
                                          << 1U)) | 
                                   (1U & (~ ((3U != 
                                              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                                              ? (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                         >> 0x20U))
                                              : ((~ (IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x18U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                    >> 5U)))))))),3);
        bufp->chgCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+543,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+545,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+546,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+547,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+549,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+551,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                     >> 0xbU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                        >> 0xdU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 0x11U)))))))),5);
        bufp->chgCData(oldp+552,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+553,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 0xdU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                   >> 0xfU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0x11U)))))),3);
        bufp->chgCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+555,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                    >> 0xbU)))))),3);
        bufp->chgCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+557,((1U | ((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+558,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+559,((1U | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+561,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+563,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+564,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+565,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+567,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+569,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                     >> 0xcU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                        >> 0xeU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                           >> 0x10U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 0x12U)))))))),5);
        bufp->chgCData(oldp+570,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+571,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+573,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                    >> 0xcU)))))),3);
        bufp->chgCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+575,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h4c6e6f5e__0) 
                                   << 3U) | ((4U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                             >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                              >> 4U))))))),5);
        bufp->chgCData(oldp+576,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+577,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 2U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                  >> 4U)))))),3);
        bufp->chgCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+579,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_1_io_out) 
                                         << 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h4c6e6f5e__0))),3);
        bufp->chgCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+581,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                     >> 0x1bU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                        >> 0x1dU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                           >> 0x1fU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ ((3U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                                                   ? (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                              >> 0x20U))
                                                   : 
                                                  ((~ (IData)(
                                                              (0x60U 
                                                               == 
                                                               (0x60U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 7U)))))))))),5);
        bufp->chgCData(oldp+582,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+583,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                  >> 0x1dU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                   >> 0x1fU)) 
                                          << 1U)) | 
                                   (1U & (~ ((3U != 
                                              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                                              ? (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                         >> 0x20U))
                                              : ((~ (IData)(
                                                            (0x60U 
                                                             == 
                                                             (0x60U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                    >> 7U)))))))),3);
        bufp->chgCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+585,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+587,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+588,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+589,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+591,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+593,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                     >> 0xbU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                        >> 0xdU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                            >> 0x11U)))))))),5);
        bufp->chgCData(oldp+594,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+595,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                  >> 0xdU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                   >> 0xfU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                  >> 0x11U)))))),3);
        bufp->chgCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+597,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                    >> 0xbU)))))),3);
        bufp->chgCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+599,((1U | ((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+600,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+601,((1U | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+603,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+605,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                        >> 0x16U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                           >> 0x18U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                            >> 0x1aU)))))))),5);
        bufp->chgCData(oldp+606,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+607,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+609,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                    >> 0x14U)))))),3);
        bufp->chgCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+611,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                     >> 0xcU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                        >> 0xeU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                           >> 0x10U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                            >> 0x12U)))))))),5);
        bufp->chgCData(oldp+612,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+613,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+615,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                    >> 0xcU)))))),3);
        bufp->chgCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+617,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                     >> 0x1bU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x1dU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x1fU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ ((3U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                                                   ? (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                              >> 0x20U))
                                                   : 
                                                  ((~ (IData)(
                                                              (0x180U 
                                                               == 
                                                               (0x180U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 9U)))))))))),5);
        bufp->chgCData(oldp+618,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+619,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                  >> 0x1dU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                   >> 0x1fU)) 
                                          << 1U)) | 
                                   (1U & (~ ((3U != 
                                              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                                              ? (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                         >> 0x20U))
                                              : ((~ (IData)(
                                                            (0x180U 
                                                             == 
                                                             (0x180U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                    >> 9U)))))))),3);
        bufp->chgCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+621,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0x1bU)))))),3);
        bufp->chgCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+623,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                     >> 0x13U)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                        >> 0x15U)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0x17U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                            >> 0x19U)))))))),5);
        bufp->chgCData(oldp+624,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+625,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+627,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                    >> 0x13U)))))),3);
        bufp->chgCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+629,(((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_1_io_out) 
                                            << 3U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                     >> 0xbU)) 
                                            << 3U)) 
                                     | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                        >> 0xdU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                            >> 0x11U)))))))),5);
        bufp->chgCData(oldp+630,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+631,(((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                  >> 0xdU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                   >> 0xfU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                  >> 0x11U)))))),3);
        bufp->chgCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+633,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                    >> 0xbU)))))),3);
        bufp->chgCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+635,((1U | ((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_1_io_out) 
                                                  << 3U)) 
                                        | ((8U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                           >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                             >> 0x20U)) 
                                                    << 1U))))))),5);
        bufp->chgCData(oldp+636,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_2_io_out) 
                                         << 1U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_2_io_out))))),3);
        bufp->chgCData(oldp+637,((1U | ((4U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                        | (2U & ((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                          >> 0x20U)) 
                                                 << 1U))))),3);
        bufp->chgCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_1_io_out),2);
        bufp->chgCData(oldp+639,(((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_1_io_out) 
                                         << 2U)) | 
                                  ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_1_io_out)) 
                                   | (1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                    >> 0x1cU)))))),3);
        bufp->chgCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_2_io_out),2);
        bufp->chgCData(oldp+641,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_memWrite));
        bufp->chgBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_memRead));
        bufp->chgCData(oldp+644,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+645,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+646,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_regWrite));
        bufp->chgIData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_imm),32);
        bufp->chgCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_aluOp),4);
        bufp->chgCData(oldp+650,((((IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_13))) 
                                   << 1U) | (1U & (
                                                   (7U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_3)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_4)) 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 3U)))))),2);
        bufp->chgCData(oldp+651,(((2U & (((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_3)) 
                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                             >> 3U)) 
                                         << 1U)) | 
                                  ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T)) 
                                   | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_4)) 
                                      | ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_9)) 
                                         | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_13))))))),2);
        bufp->chgCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_pcSrc),2);
        bufp->chgBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_jump));
        bufp->chgBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_csrWrite));
        bufp->chgBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__io_ID2EX_bits_csrRead_0));
        bufp->chgBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_syscall));
        bufp->chgBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_mret));
        bufp->chgBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_halt));
        bufp->chgIData(oldp+659,((0x3fffffffU & (~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 2U)))),30);
        bufp->chgCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type),3);
        bufp->chgBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__io_IF2ID_valid_0));
        bufp->chgIData(oldp+662,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rFireReg)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rdataReg
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__instruction)),32);
        bufp->chgBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__io_r_ready_0));
        bufp->chgBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IF__io_brTaken));
        bufp->chgIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IF__io_pcBr),32);
        bufp->chgIData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext),32);
        bufp->chgBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___brFail_io_out));
        bufp->chgBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__brEnable));
        bufp->chgBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rFireReg));
        bufp->chgIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rdataReg),32);
        bufp->chgIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__instruction),32);
        bufp->chgBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT____Vcellinp__brFail__io_cond));
        bufp->chgBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0));
        bufp->chgIData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata0),32);
        bufp->chgIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata1),32);
        bufp->chgCData(oldp+676,((3U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))),2);
        bufp->chgCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN),3);
        bufp->chgBit(oldp+678,((5U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IF_io_pcNext 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__indexAddr),2);
        bufp->chgBit(oldp+680,((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_bits_araddr 
                                           >> 0x10U))));
        bufp->chgBit(oldp+681,((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                           >> 0x10U))));
        bufp->chgIData(oldp+682,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt));
        bufp->chgCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter),4);
        bufp->chgCData(oldp+685,((1U & (0x35U >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter)))))),4);
        bufp->chgIData(oldp+686,(((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb) 
                                                  >> 4U)))
                                   ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata))),32);
        bufp->chgCData(oldp+687,((0xfU & ((0U != (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb) 
                                                     >> 4U)))
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb) 
                                              >> 4U)
                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb)))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
        bufp->chgBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel));
        bufp->chgCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd),3);
        bufp->chgSData(oldp+691,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                  >> 0x10U)),16);
        bufp->chgCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr),2);
        bufp->chgBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en));
        bufp->chgBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en));
        bufp->chgBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en));
        bufp->chgBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en));
        bufp->chgIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_addr),22);
        bufp->chgBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode));
        bufp->chgCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN),2);
        bufp->chgIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_addr),22);
        bufp->chgBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode));
        bufp->chgIData(oldp+702,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_addr),22);
        bufp->chgBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode));
        bufp->chgIData(oldp+704,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_addr),22);
        bufp->chgBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode));
        bufp->chgSData(oldp+706,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
        bufp->chgBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en));
        bufp->chgBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en));
        bufp->chgBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en));
        bufp->chgBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en));
        bufp->chgIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_addr),22);
        bufp->chgBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode));
        bufp->chgCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN),2);
        bufp->chgIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_addr),22);
        bufp->chgBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode));
        bufp->chgIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_addr),22);
        bufp->chgBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode));
        bufp->chgIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_addr),22);
        bufp->chgBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode));
        bufp->chgCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd),3);
        bufp->chgCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr),2);
        bufp->chgBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en));
        bufp->chgBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en));
        bufp->chgBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en));
        bufp->chgBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en));
        bufp->chgIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_addr),22);
        bufp->chgBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode));
        bufp->chgCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN),2);
        bufp->chgIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_addr),22);
        bufp->chgBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode));
        bufp->chgIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_addr),22);
        bufp->chgBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode));
        bufp->chgIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_addr),22);
        bufp->chgBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode));
        bufp->chgBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en));
        bufp->chgBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en));
        bufp->chgBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en));
        bufp->chgBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en));
        bufp->chgIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_addr),22);
        bufp->chgBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode));
        bufp->chgCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN),2);
        bufp->chgIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_addr),22);
        bufp->chgBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode));
        bufp->chgIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_addr),22);
        bufp->chgBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode));
        bufp->chgIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_addr),22);
        bufp->chgBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte));
        bufp->chgCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
        bufp->chgCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel),8);
        bufp->chgBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en));
        bufp->chgBit(oldp+752,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))));
    }
    bufp->chgBit(oldp+753,(vlSelf->clock));
    bufp->chgBit(oldp+754,(vlSelf->reset));
    bufp->chgSData(oldp+755,(vlSelf->externalPins_gpio_out),16);
    bufp->chgSData(oldp+756,(vlSelf->externalPins_gpio_in),16);
    bufp->chgCData(oldp+757,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+758,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+759,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+760,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+761,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+762,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+763,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+764,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+765,(vlSelf->externalPins_ps2_clk));
    bufp->chgBit(oldp+766,(vlSelf->externalPins_ps2_data));
    bufp->chgCData(oldp+767,(vlSelf->externalPins_vga_r),8);
    bufp->chgCData(oldp+768,(vlSelf->externalPins_vga_g),8);
    bufp->chgCData(oldp+769,(vlSelf->externalPins_vga_b),8);
    bufp->chgBit(oldp+770,(vlSelf->externalPins_vga_hsync));
    bufp->chgBit(oldp+771,(vlSelf->externalPins_vga_vsync));
    bufp->chgBit(oldp+772,(vlSelf->externalPins_vga_valid));
    bufp->chgBit(oldp+773,(vlSelf->externalPins_uart_rx));
    bufp->chgBit(oldp+774,(vlSelf->externalPins_uart_tx));
    bufp->chgBit(oldp+775,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->chgBit(oldp+776,((1U & (((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
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
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_0))))))))) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                     | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                          ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                          : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                        >> 0x1fU))))));
    bufp->chgCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->chgBit(oldp+778,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->chgBit(oldp+779,((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready) 
                                          & ((0x10001U 
                                              == (0x3ffffU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0xcU))) 
                                             | (4U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                                     | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                                        | (IData)((
                                                   (0U 
                                                    == 
                                                    (0x30000000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                                   & (~ 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                         : 
                                                        (0x1cU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel)))))))))));
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
                                    << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8))));
    __Vtemp_8[3U] = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_15) 
                      << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14) 
                                    << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12))));
    bufp->chgIData(oldp+780,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                ? ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
                                    ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                            << 8U)) 
                                        | ((0xff00U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                               >> 8U)) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                              >> 0x18U))))
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata)
                                : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                               ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                               : 0U)
                                           : 0U) | 
                                         (((0U == (3U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                      >> 0x1cU)))
                                            ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                [3U] 
                                                << 0x18U) 
                                               | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))
                                            : 0U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h6a47b861__0) 
                                                 & (0U 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led)
                                                 : 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h6a47b861__0) 
                                                  & (4U 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__sw)
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h6a47b861__0) 
                                                   & (8U 
                                                      == 
                                                      (0xcU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg
                                                   : 0U)))
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready)
                                                   ? 
                                                  (0xffU 
                                                   & (((0U 
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
                                                   : 0U)
                                               : 0U)))))),32);
    bufp->chgBit(oldp+781,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->chgBit(oldp+782,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready) 
                            & ((0x10001U == (0x3ffffU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                >> 0xcU))) 
                               | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))))));
    bufp->chgIData(oldp+783,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState))
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
    bufp->chgQData(oldp+784,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__converter__DOT__head)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__converter__DOT__arHiFifo_1)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__converter__DOT__arHiFifo_0))
                               ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rdata)) 
                                  << 0x20U) : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rdata)))),64);
    bufp->chgCData(oldp+786,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
                               ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                               & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9), 1U)))))
                               : 0U)),2);
    bufp->chgQData(oldp+787,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                     ? (((QData)((IData)(
                                                         ((1U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdataReg
                                                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdataReg
                                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))
                                     : 0ULL) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                  : 0ULL) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   (((QData)((IData)(
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
                                            : 0ULL))),64);
    bufp->chgCData(oldp+789,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                   ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                       ? 0U : 3U) : 0U)
                               : 0U)),2);
    bufp->chgBit(oldp+790,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->chgIData(oldp+791,(((0U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0xfU)))
                               ? 0U : ((((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWrite))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWdata
                                        : ((0x40000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                            ? ((0x20000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                ? (
                                                   (0x10000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_15
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_14)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_13
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_12))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_11
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_10)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_9
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_8)))
                                            : ((0x20000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                ? (
                                                   (0x10000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_7
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_6)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_5
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_4))
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_3
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_2)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_1
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_0))))))),32);
    bufp->chgIData(oldp+792,(((0U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x14U)))
                               ? 0U : ((((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWrite))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWdata
                                        : ((0x800000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                            ? ((0x400000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                ? (
                                                   (0x200000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_15
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_14)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_13
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_12))
                                                : (
                                                   (0x200000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_11
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_10)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_9
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_8)))
                                            : ((0x400000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                ? (
                                                   (0x200000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_7
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_6)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_5
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_4))
                                                : (
                                                   (0x200000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_3
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_2)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_1
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_0))))))),32);
    bufp->chgBit(oldp+793,(((0x200U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                        >> 0x10U)) 
                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__nodeIn_awready)))));
    bufp->chgBit(oldp+794,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___wSel_T)) 
                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->chgBit(oldp+795,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                             : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->chgBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->chgBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->chgCData(oldp+799,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_arvalid) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_arready))
                               ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen)) 
                                            << 4U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN)))
                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_awvalid) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_awready))
                                   ? 0x10U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                               << 5U) 
                                              | (((0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgSData(oldp+800,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                               << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->chgCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                             [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->chgBit(oldp+803,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss));
    bufp->chgBit(oldp+804,((1U & ((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_7)
                                   : ((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_6)
                                       : ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_5)
                                           : ((0x800U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_4)
                                               : ((0x1000U 
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
    bufp->chgSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel),16);
    bufp->chgBit(oldp+806,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                  | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                       ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                       : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                     >> 0x1fU)))));
    bufp->chgIData(oldp+807,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                            << 1U)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgBit(oldp+808,(((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3))));
    bufp->chgBit(oldp+809,(((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2))));
    bufp->chgBit(oldp+810,(((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1))));
    bufp->chgBit(oldp+811,(((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0))));
    bufp->chgBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI));
    bufp->chgBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__psram__DOT__isSwitch));
    bufp->chgCData(oldp+814,((((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_6)
                                : 0U) | (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_7)
                                           : 0U) | 
                                         (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_4)
                                            : 0U) | 
                                          (((8U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel))
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
    bufp->chgBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode));
    bufp->chgIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wdata),32);
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
}
