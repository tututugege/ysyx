// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__trace_chg_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VALU___024root__trace_chg_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ALU__DOT__adderB),32);
        bufp->chgQData(oldp+1,((0x1ffffffffULL & vlSelf->ALU__DOT___adderOut_T_1)),33);
        bufp->chgIData(oldp+3,((IData)(vlSelf->ALU__DOT___adderOut_T_1)),32);
        bufp->chgBit(oldp+4,((1U & (IData)((vlSelf->ALU__DOT___adderOut_T_1 
                                            >> 0x20U)))));
        bufp->chgIData(oldp+5,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ALU__DOT___adderOut_T_1)))))),32);
    }
    bufp->chgBit(oldp+6,(vlSelf->clock));
    bufp->chgBit(oldp+7,(vlSelf->reset));
    bufp->chgCData(oldp+8,(vlSelf->io_aluOp),3);
    bufp->chgIData(oldp+9,(vlSelf->io_A),32);
    bufp->chgIData(oldp+10,(vlSelf->io_B),32);
    bufp->chgIData(oldp+11,(vlSelf->io_Result),32);
    bufp->chgBit(oldp+12,(vlSelf->io_Zero));
    bufp->chgBit(oldp+13,(vlSelf->io_Cout));
    bufp->chgBit(oldp+14,(vlSelf->io_OF));
    bufp->chgBit(oldp+15,((0U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+16,((1U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+17,((2U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+18,((3U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+19,((4U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+20,((5U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+21,((7U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+22,((6U == (IData)(vlSelf->io_aluOp))));
    bufp->chgBit(oldp+23,((0U != (IData)(vlSelf->io_aluOp))));
    bufp->chgIData(oldp+24,((~ vlSelf->io_A)),32);
    bufp->chgIData(oldp+25,((vlSelf->io_A & vlSelf->io_B)),32);
    bufp->chgIData(oldp+26,((vlSelf->io_A | vlSelf->io_B)),32);
    bufp->chgIData(oldp+27,((vlSelf->io_A ^ vlSelf->io_B)),32);
    bufp->chgIData(oldp+28,((1U & ((IData)(vlSelf->ALU__DOT___sltRes_T_2) 
                                   | (((vlSelf->io_A 
                                        ^ vlSelf->ALU__DOT__adderB) 
                                       >> 0x1fU) & (IData)(
                                                           (vlSelf->ALU__DOT___adderOut_T_1 
                                                            >> 0x1fU)))))),32);
}

void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_cleanup\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
