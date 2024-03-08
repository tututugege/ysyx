// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub__TOP__0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+7,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"io_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"io_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"io_Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"io_Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_OF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"io_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"io_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"io_Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"io_Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_OF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"addOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"subOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"notOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"andOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"orOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"xorOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"equOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"sltOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"Cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"adderB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2,0,"adderOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+4,0,"adderOutBundle_Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"adderOutBundle_Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"notRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"andRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"orRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"xorRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"equRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"sltRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VALU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VALU___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VALU___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_const_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VALU___024root__trace_full_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU___024root__trace_full_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ALU__DOT__adderB),32);
    bufp->fullQData(oldp+2,((0x1ffffffffULL & vlSelf->ALU__DOT___adderOut_T_1)),33);
    bufp->fullIData(oldp+4,((IData)(vlSelf->ALU__DOT___adderOut_T_1)),32);
    bufp->fullBit(oldp+5,((1U & (IData)((vlSelf->ALU__DOT___adderOut_T_1 
                                         >> 0x20U)))));
    bufp->fullIData(oldp+6,((1U & (~ (IData)((0U != (IData)(vlSelf->ALU__DOT___adderOut_T_1)))))),32);
    bufp->fullBit(oldp+7,(vlSelf->clock));
    bufp->fullBit(oldp+8,(vlSelf->reset));
    bufp->fullCData(oldp+9,(vlSelf->io_aluOp),3);
    bufp->fullIData(oldp+10,(vlSelf->io_A),32);
    bufp->fullIData(oldp+11,(vlSelf->io_B),32);
    bufp->fullIData(oldp+12,(vlSelf->io_Result),32);
    bufp->fullBit(oldp+13,(vlSelf->io_Zero));
    bufp->fullBit(oldp+14,(vlSelf->io_Cout));
    bufp->fullBit(oldp+15,(vlSelf->io_OF));
    bufp->fullBit(oldp+16,((0U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+17,((1U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+18,((2U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+19,((3U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+20,((4U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+21,((5U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+22,((7U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+23,((6U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+24,((0U != (IData)(vlSelf->io_aluOp))));
    bufp->fullIData(oldp+25,((~ vlSelf->io_A)),32);
    bufp->fullIData(oldp+26,((vlSelf->io_A & vlSelf->io_B)),32);
    bufp->fullIData(oldp+27,((vlSelf->io_A | vlSelf->io_B)),32);
    bufp->fullIData(oldp+28,((vlSelf->io_A ^ vlSelf->io_B)),32);
    bufp->fullIData(oldp+29,((1U & ((IData)(vlSelf->ALU__DOT___sltRes_T_2) 
                                    | (((vlSelf->io_A 
                                         ^ vlSelf->ALU__DOT__adderB) 
                                        >> 0x1fU) & (IData)(
                                                            (vlSelf->ALU__DOT___adderOut_T_1 
                                                             >> 0x1fU)))))),32);
}
