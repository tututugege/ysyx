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
        bufp->chgCData(oldp+0,(vlSelf->TOP__DOT__ps2__DOT__fifo
                               [vlSelf->TOP__DOT__ps2__DOT__r_ptr]),8);
        bufp->chgCData(oldp+1,(vlSelf->TOP__DOT__seg[0]),8);
        bufp->chgCData(oldp+2,(vlSelf->TOP__DOT__seg[1]),8);
        bufp->chgCData(oldp+3,(vlSelf->TOP__DOT__seg[2]),8);
        bufp->chgCData(oldp+4,(vlSelf->TOP__DOT__seg[3]),8);
        bufp->chgCData(oldp+5,(vlSelf->TOP__DOT__seg[4]),8);
        bufp->chgCData(oldp+6,(vlSelf->TOP__DOT__seg[5]),8);
        bufp->chgCData(oldp+7,(vlSelf->TOP__DOT__seg[6]),8);
        bufp->chgCData(oldp+8,(vlSelf->TOP__DOT__seg[7]),8);
        bufp->chgCData(oldp+9,(vlSelf->TOP__DOT__data0),8);
        bufp->chgCData(oldp+10,(vlSelf->TOP__DOT__data1),8);
        bufp->chgCData(oldp+11,(vlSelf->TOP__DOT__data2),8);
        bufp->chgCData(oldp+12,(vlSelf->TOP__DOT__data3),8);
        bufp->chgCData(oldp+13,(vlSelf->TOP__DOT__switch[0]),4);
        bufp->chgCData(oldp+14,(vlSelf->TOP__DOT__switch[1]),4);
        bufp->chgCData(oldp+15,(vlSelf->TOP__DOT__switch[2]),4);
        bufp->chgCData(oldp+16,(vlSelf->TOP__DOT__switch[3]),4);
        bufp->chgCData(oldp+17,(vlSelf->TOP__DOT__switch[4]),4);
        bufp->chgCData(oldp+18,(vlSelf->TOP__DOT__switch[5]),4);
        bufp->chgCData(oldp+19,(vlSelf->TOP__DOT__switch[6]),4);
        bufp->chgCData(oldp+20,(vlSelf->TOP__DOT__switch[7]),4);
        bufp->chgSData(oldp+21,(vlSelf->TOP__DOT__ps2__DOT__buffer),10);
        bufp->chgCData(oldp+22,(vlSelf->TOP__DOT__ps2__DOT__fifo[0]),8);
        bufp->chgCData(oldp+23,(vlSelf->TOP__DOT__ps2__DOT__fifo[1]),8);
        bufp->chgCData(oldp+24,(vlSelf->TOP__DOT__ps2__DOT__fifo[2]),8);
        bufp->chgCData(oldp+25,(vlSelf->TOP__DOT__ps2__DOT__fifo[3]),8);
        bufp->chgCData(oldp+26,(vlSelf->TOP__DOT__ps2__DOT__fifo[4]),8);
        bufp->chgCData(oldp+27,(vlSelf->TOP__DOT__ps2__DOT__fifo[5]),8);
        bufp->chgCData(oldp+28,(vlSelf->TOP__DOT__ps2__DOT__fifo[6]),8);
        bufp->chgCData(oldp+29,(vlSelf->TOP__DOT__ps2__DOT__fifo[7]),8);
        bufp->chgCData(oldp+30,(vlSelf->TOP__DOT__ps2__DOT__w_ptr),3);
        bufp->chgCData(oldp+31,(vlSelf->TOP__DOT__ps2__DOT__r_ptr),3);
        bufp->chgCData(oldp+32,(vlSelf->TOP__DOT__ps2__DOT__count),4);
        bufp->chgCData(oldp+33,(vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+34,((IData)((4U == (6U & (IData)(vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync))))));
        bufp->chgCData(oldp+35,((0xfU & (IData)(vlSelf->TOP__DOT__data3))),4);
        bufp->chgCData(oldp+36,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+37,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0));
        bufp->chgBit(oldp+38,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1));
        bufp->chgBit(oldp+39,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2));
        bufp->chgBit(oldp+40,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3));
        bufp->chgBit(oldp+41,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4));
        bufp->chgBit(oldp+42,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5));
        bufp->chgBit(oldp+43,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6));
        bufp->chgCData(oldp+44,((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+45,((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3))))),4);
        bufp->chgCData(oldp+46,((0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+47,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+48,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0));
        bufp->chgBit(oldp+49,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1));
        bufp->chgBit(oldp+50,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2));
        bufp->chgBit(oldp+51,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3));
        bufp->chgBit(oldp+52,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4));
        bufp->chgBit(oldp+53,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5));
        bufp->chgBit(oldp+54,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6));
        bufp->chgCData(oldp+55,((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+56,((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3))))),4);
        bufp->chgCData(oldp+57,((0xfU & (IData)(vlSelf->TOP__DOT__data2))),4);
        bufp->chgCData(oldp+58,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+59,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0));
        bufp->chgBit(oldp+60,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1));
        bufp->chgBit(oldp+61,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2));
        bufp->chgBit(oldp+62,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3));
        bufp->chgBit(oldp+63,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4));
        bufp->chgBit(oldp+64,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5));
        bufp->chgBit(oldp+65,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6));
        bufp->chgCData(oldp+66,((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+67,((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3))))),4);
        bufp->chgCData(oldp+68,((0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+69,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+70,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0));
        bufp->chgBit(oldp+71,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1));
        bufp->chgBit(oldp+72,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2));
        bufp->chgBit(oldp+73,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3));
        bufp->chgBit(oldp+74,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4));
        bufp->chgBit(oldp+75,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5));
        bufp->chgBit(oldp+76,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6));
        bufp->chgCData(oldp+77,((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+78,((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3))))),4);
        bufp->chgCData(oldp+79,((0xfU & (IData)(vlSelf->TOP__DOT__data1))),4);
        bufp->chgCData(oldp+80,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+81,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0));
        bufp->chgBit(oldp+82,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1));
        bufp->chgBit(oldp+83,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2));
        bufp->chgBit(oldp+84,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3));
        bufp->chgBit(oldp+85,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4));
        bufp->chgBit(oldp+86,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5));
        bufp->chgBit(oldp+87,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6));
        bufp->chgCData(oldp+88,((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+89,((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6) 
                                  << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5) 
                                             << 2U) 
                                            | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3))))),4);
        bufp->chgCData(oldp+90,((0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+91,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 5U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3) 
                                                   << 3U)))) 
                                 | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2) 
                                     << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+92,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0));
        bufp->chgBit(oldp+93,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1));
        bufp->chgBit(oldp+94,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2));
        bufp->chgBit(oldp+95,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3));
        bufp->chgBit(oldp+96,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4));
        bufp->chgBit(oldp+97,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5));
        bufp->chgBit(oldp+98,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6));
        bufp->chgCData(oldp+99,((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+100,((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 2U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 1U) 
                                                | (IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3))))),4);
        bufp->chgCData(oldp+101,((0xfU & (IData)(vlSelf->TOP__DOT__data0))),4);
        bufp->chgCData(oldp+102,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6) 
                                    << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3) 
                                                    << 3U)))) 
                                  | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2) 
                                      << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+103,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0));
        bufp->chgBit(oldp+104,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1));
        bufp->chgBit(oldp+105,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2));
        bufp->chgBit(oldp+106,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3));
        bufp->chgBit(oldp+107,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4));
        bufp->chgBit(oldp+108,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5));
        bufp->chgBit(oldp+109,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6));
        bufp->chgCData(oldp+110,((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+111,((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 2U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 1U) 
                                                | (IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3))))),4);
        bufp->chgCData(oldp+112,((0xfU & ((IData)(vlSelf->TOP__DOT__data0) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+113,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6) 
                                    << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3) 
                                                    << 3U)))) 
                                  | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2) 
                                      << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0))))),7);
        bufp->chgBit(oldp+114,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0));
        bufp->chgBit(oldp+115,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1));
        bufp->chgBit(oldp+116,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2));
        bufp->chgBit(oldp+117,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3));
        bufp->chgBit(oldp+118,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4));
        bufp->chgBit(oldp+119,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5));
        bufp->chgBit(oldp+120,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6));
        bufp->chgCData(oldp+121,((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0)))),3);
        bufp->chgCData(oldp+122,((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6) 
                                   << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5) 
                                              << 2U) 
                                             | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4) 
                                                 << 1U) 
                                                | (IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    }
    bufp->chgBit(oldp+123,(vlSelf->clock));
    bufp->chgBit(oldp+124,(vlSelf->reset));
    bufp->chgBit(oldp+125,(vlSelf->clr));
    bufp->chgBit(oldp+126,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+127,(vlSelf->ps2_data));
    bufp->chgCData(oldp+128,(vlSelf->seg0n),8);
    bufp->chgCData(oldp+129,(vlSelf->seg1n),8);
    bufp->chgCData(oldp+130,(vlSelf->seg2n),8);
    bufp->chgCData(oldp+131,(vlSelf->seg3n),8);
    bufp->chgCData(oldp+132,(vlSelf->seg4n),8);
    bufp->chgCData(oldp+133,(vlSelf->seg5n),8);
    bufp->chgCData(oldp+134,(vlSelf->seg6n),8);
    bufp->chgCData(oldp+135,(vlSelf->seg7n),8);
    bufp->chgBit(oldp+136,(vlSelf->ready));
    bufp->chgBit(oldp+137,(vlSelf->overflow));
    bufp->chgBit(oldp+138,((1U & (~ (IData)(vlSelf->clr)))));
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
