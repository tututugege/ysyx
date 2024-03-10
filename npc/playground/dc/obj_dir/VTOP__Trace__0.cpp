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
        bufp->chgCData(oldp+0,(vlSelf->TOP__DOT__alu_io_Result),4);
        bufp->chgBit(oldp+1,((1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__alu_io_Result)))))));
        bufp->chgBit(oldp+2,(vlSelf->TOP__DOT__alu_io_Cout));
        bufp->chgBit(oldp+3,(vlSelf->TOP__DOT__alu_io_OF));
        bufp->chgCData(oldp+4,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->TOP__DOT__alu_io_Result)))))),4);
        bufp->chgCData(oldp+5,(vlSelf->TOP__DOT__alu_io_Cout),4);
        bufp->chgCData(oldp+6,(vlSelf->TOP__DOT__alu_io_OF),4);
        bufp->chgCData(oldp+7,(vlSelf->TOP__DOT__alu__DOT__adderB),4);
        bufp->chgCData(oldp+8,((0x1fU & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1))),5);
        bufp->chgCData(oldp+9,((0xfU & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1))),4);
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1) 
                                     >> 4U))));
        bufp->chgCData(oldp+11,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1))))))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+12,(((((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_0))))),7);
        bufp->chgCData(oldp+13,(((((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0))))),7);
        bufp->chgCData(oldp+14,(((((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0))))),7);
        bufp->chgCData(oldp+15,(((((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+16,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0));
        bufp->chgBit(oldp+17,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1));
        bufp->chgBit(oldp+18,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2));
        bufp->chgBit(oldp+19,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3));
        bufp->chgBit(oldp+20,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4));
        bufp->chgBit(oldp+21,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5));
        bufp->chgBit(oldp+22,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6));
        bufp->chgCData(oldp+23,((((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+24,((((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3))))),4);
        bufp->chgBit(oldp+25,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_0));
        bufp->chgBit(oldp+26,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_1));
        bufp->chgBit(oldp+27,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_2));
        bufp->chgBit(oldp+28,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_3));
        bufp->chgBit(oldp+29,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_4));
        bufp->chgBit(oldp+30,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_5));
        bufp->chgBit(oldp+31,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_6));
        bufp->chgCData(oldp+32,((((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+33,((((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_3))))),4);
        bufp->chgBit(oldp+34,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_0));
        bufp->chgBit(oldp+35,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_1));
        bufp->chgBit(oldp+36,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_2));
        bufp->chgBit(oldp+37,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_3));
        bufp->chgBit(oldp+38,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_4));
        bufp->chgBit(oldp+39,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_5));
        bufp->chgBit(oldp+40,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_6));
        bufp->chgCData(oldp+41,((((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+42,((((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_3))))),4);
        bufp->chgBit(oldp+43,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0));
        bufp->chgBit(oldp+44,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1));
        bufp->chgBit(oldp+45,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2));
        bufp->chgBit(oldp+46,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3));
        bufp->chgBit(oldp+47,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4));
        bufp->chgBit(oldp+48,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5));
        bufp->chgBit(oldp+49,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6));
        bufp->chgCData(oldp+50,((((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+51,((((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3))))),4);
    }
    bufp->chgBit(oldp+52,(vlSelf->clock));
    bufp->chgBit(oldp+53,(vlSelf->reset));
    bufp->chgCData(oldp+54,(vlSelf->io_A),4);
    bufp->chgCData(oldp+55,(vlSelf->io_B),4);
    bufp->chgCData(oldp+56,(vlSelf->io_aluOp),3);
    bufp->chgCData(oldp+57,(vlSelf->io_segRes),8);
    bufp->chgCData(oldp+58,(vlSelf->io_segZero),8);
    bufp->chgCData(oldp+59,(vlSelf->io_segCout),8);
    bufp->chgCData(oldp+60,(vlSelf->io_segOF),8);
    bufp->chgBit(oldp+61,((0U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+62,((1U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+63,((2U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+64,((3U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+65,((4U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+66,((5U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+67,((7U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+68,((6U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+69,((0U != (IData)(vlSelf->io_aluOp))));
    bufp->chgCData(oldp+70,((0xfU & (~ (IData)(vlSelf->io_A)))),4);
    bufp->chgCData(oldp+71,(((IData)(vlSelf->io_A) 
                             & (IData)(vlSelf->io_B))),4);
    bufp->chgCData(oldp+72,(((IData)(vlSelf->io_A) 
                             | (IData)(vlSelf->io_B))),4);
    bufp->chgCData(oldp+73,(((IData)(vlSelf->io_A) 
                             ^ (IData)(vlSelf->io_B))),4);
    bufp->chgCData(oldp+74,((1U & ((IData)(vlSelf->TOP__DOT__alu__DOT___sltRes_T_2) 
                                   | ((((IData)(vlSelf->io_A) 
                                        ^ (IData)(vlSelf->TOP__DOT__alu__DOT__adderB)) 
                                       & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1)) 
                                      >> 3U)))),4);
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
