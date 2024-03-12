// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu__Syms.h"
#include "VSimpleCpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__stl(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleCpu___024root___eval_triggers__stl(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimpleCpu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VSimpleCpu___024root___stl_sequent__TOP__0(VSimpleCpu___024root* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu___024root___ico_sequent__TOP__1(VSimpleCpu___024root* vlSelf);

VL_ATTR_COLD void VSimpleCpu___024root___eval_stl(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSimpleCpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4));
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3));
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2));
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1));
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0));
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__1((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1));
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__1((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2));
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__1((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3));
        VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__1((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4));
        VSimpleCpu___024root___ico_sequent__TOP__1(vlSelf);
    }
}
