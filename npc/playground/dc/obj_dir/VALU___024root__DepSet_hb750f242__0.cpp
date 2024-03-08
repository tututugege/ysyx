// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU___024root.h"

VL_INLINE_OPT void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ALU__DOT__adderB = (vlSelf->io_B ^ ((0U 
                                                 == (IData)(vlSelf->io_aluOp))
                                                 ? 0U
                                                 : 0xffffffffU));
    vlSelf->ALU__DOT___sltRes_T_2 = ((vlSelf->io_A 
                                      & vlSelf->ALU__DOT__adderB) 
                                     >> 0x1fU);
    vlSelf->ALU__DOT___adderOut_T_1 = (0x3ffffffffULL 
                                       & ((0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->io_A)) 
                                              + (QData)((IData)(vlSelf->ALU__DOT__adderB)))) 
                                          + (QData)((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->io_aluOp))))));
    vlSelf->io_Cout = (1U & ((0U != (IData)(vlSelf->io_aluOp)) 
                             ^ (IData)((vlSelf->ALU__DOT___adderOut_T_1 
                                        >> 0x20U))));
    vlSelf->io_OF = (1U & (((~ (IData)((vlSelf->ALU__DOT___adderOut_T_1 
                                        >> 0x1fU))) 
                            & (IData)(vlSelf->ALU__DOT___sltRes_T_2)) 
                           | ((~ (vlSelf->io_A >> 0x1fU)) 
                              & ((~ (vlSelf->ALU__DOT__adderB 
                                     >> 0x1fU)) & (IData)(
                                                          (vlSelf->ALU__DOT___adderOut_T_1 
                                                           >> 0x1fU))))));
    vlSelf->io_Result = (((((((((0U == (IData)(vlSelf->io_aluOp))
                                 ? (IData)(vlSelf->ALU__DOT___adderOut_T_1)
                                 : 0U) | ((1U == (IData)(vlSelf->io_aluOp))
                                           ? (IData)(vlSelf->ALU__DOT___adderOut_T_1)
                                           : 0U)) | 
                              ((2U == (IData)(vlSelf->io_aluOp))
                                ? (~ vlSelf->io_A) : 0U)) 
                             | ((3U == (IData)(vlSelf->io_aluOp))
                                 ? (vlSelf->io_A & vlSelf->io_B)
                                 : 0U)) | ((4U == (IData)(vlSelf->io_aluOp))
                                            ? (vlSelf->io_A 
                                               | vlSelf->io_B)
                                            : 0U)) 
                           | ((5U == (IData)(vlSelf->io_aluOp))
                               ? (vlSelf->io_A ^ vlSelf->io_B)
                               : 0U)) | ((7U == (IData)(vlSelf->io_aluOp))
                                          ? (1U & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->ALU__DOT___adderOut_T_1)))))
                                          : 0U)) | 
                         ((6U == (IData)(vlSelf->io_aluOp))
                           ? (1U & ((IData)(vlSelf->ALU__DOT___sltRes_T_2) 
                                    | (((vlSelf->io_A 
                                         ^ vlSelf->ALU__DOT__adderB) 
                                        >> 0x1fU) & (IData)(
                                                            (vlSelf->ALU__DOT___adderOut_T_1 
                                                             >> 0x1fU)))))
                           : 0U));
    vlSelf->io_Zero = (1U & (~ (IData)((0U != vlSelf->io_Result))));
}

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VALU___024root___eval_triggers__ico(VALU___024root* vlSelf);

bool VALU___024root___eval_phase__ico(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VALU___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VALU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VALU___024root___eval_act(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_act\n"); );
}

void VALU___024root___eval_nba(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_nba\n"); );
}

void VALU___024root___eval_triggers__act(VALU___024root* vlSelf);

bool VALU___024root___eval_phase__act(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VALU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VALU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VALU___024root___eval_phase__nba(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VALU___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__nba(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("build/ALU.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VALU___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/ALU.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("build/ALU.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VALU___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VALU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_aluOp & 0xf8U))) {
        Verilated::overWidthError("io_aluOp");}
}
#endif  // VL_DEBUG
