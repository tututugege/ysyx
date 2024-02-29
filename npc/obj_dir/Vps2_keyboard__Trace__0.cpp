// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vps2_keyboard__Syms.h"


void Vps2_keyboard___024root__trace_chg_0_sub_0(Vps2_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vps2_keyboard___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_chg_0\n"); );
    // Init
    Vps2_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_keyboard___024root*>(voidSelf);
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vps2_keyboard___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vps2_keyboard___024root__trace_chg_0_sub_0(Vps2_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->ps2_keyboard__DOT__buffer),10);
        bufp->chgCData(oldp+1,(vlSelf->ps2_keyboard__DOT__fifo[0]),8);
        bufp->chgCData(oldp+2,(vlSelf->ps2_keyboard__DOT__fifo[1]),8);
        bufp->chgCData(oldp+3,(vlSelf->ps2_keyboard__DOT__fifo[2]),8);
        bufp->chgCData(oldp+4,(vlSelf->ps2_keyboard__DOT__fifo[3]),8);
        bufp->chgCData(oldp+5,(vlSelf->ps2_keyboard__DOT__fifo[4]),8);
        bufp->chgCData(oldp+6,(vlSelf->ps2_keyboard__DOT__fifo[5]),8);
        bufp->chgCData(oldp+7,(vlSelf->ps2_keyboard__DOT__fifo[6]),8);
        bufp->chgCData(oldp+8,(vlSelf->ps2_keyboard__DOT__fifo[7]),8);
        bufp->chgCData(oldp+9,(vlSelf->ps2_keyboard__DOT__w_ptr),3);
        bufp->chgCData(oldp+10,(vlSelf->ps2_keyboard__DOT__r_ptr),3);
        bufp->chgCData(oldp+11,(vlSelf->ps2_keyboard__DOT__count),4);
        bufp->chgCData(oldp+12,(vlSelf->ps2_keyboard__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+13,((IData)((4U == (6U & (IData)(vlSelf->ps2_keyboard__DOT__ps2_clk_sync))))));
    }
    bufp->chgBit(oldp+14,(vlSelf->clk));
    bufp->chgBit(oldp+15,(vlSelf->clrn));
    bufp->chgBit(oldp+16,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+17,(vlSelf->ps2_data));
    bufp->chgBit(oldp+18,(vlSelf->nextdata_n));
    bufp->chgCData(oldp+19,(vlSelf->data),8);
    bufp->chgBit(oldp+20,(vlSelf->ready));
    bufp->chgBit(oldp+21,(vlSelf->overflow));
}

void Vps2_keyboard___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_cleanup\n"); );
    // Init
    Vps2_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_keyboard___024root*>(voidSelf);
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
