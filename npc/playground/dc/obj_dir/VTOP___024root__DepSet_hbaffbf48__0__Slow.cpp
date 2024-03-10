// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "VTOP__pch.h"
#include "VTOP___024root.h"

VL_ATTR_COLD void VTOP___024root___eval_static(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VTOP___024root___eval_final(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTOP___024root___eval_phase__stl(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTOP___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/TOP.v", 255, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTOP___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___stl_sequent__TOP__0(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_segRes = (0xffU & (~ ((((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_6) 
                                       << 7U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_5) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_4) 
                                                     << 5U) 
                                                    | ((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_3) 
                                                       << 4U)))) 
                                     | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_2) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_1) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_0) 
                                                      << 1U))))));
    vlSelf->io_segZero = (0xffU & (~ ((((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6) 
                                        << 7U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3) 
                                                        << 4U)))) 
                                      | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2) 
                                          << 3U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1) 
                                           << 2U) | 
                                          ((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0) 
                                           << 1U))))));
    vlSelf->io_segCout = (0xffU & (~ ((((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6) 
                                        << 7U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3) 
                                                        << 4U)))) 
                                      | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2) 
                                          << 3U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1) 
                                           << 2U) | 
                                          ((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0) 
                                           << 1U))))));
    vlSelf->io_segOF = (0xffU & (~ ((((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_6) 
                                      << 7U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_5) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_4) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_3) 
                                                      << 4U)))) 
                                    | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_2) 
                                        << 3U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_1) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_0) 
                                                     << 1U))))));
    vlSelf->TOP__DOT__alu__DOT__adderB = ((IData)(vlSelf->io_B) 
                                          ^ ((0U == (IData)(vlSelf->io_aluOp))
                                              ? 0U : 0xfU));
    vlSelf->TOP__DOT__alu__DOT___sltRes_T_2 = (1U & 
                                               (((IData)(vlSelf->io_A) 
                                                 & (IData)(vlSelf->TOP__DOT__alu__DOT__adderB)) 
                                                >> 3U));
    vlSelf->TOP__DOT__alu__DOT___adderOut_T_1 = (0x3fU 
                                                 & ((0x1fU 
                                                     & ((IData)(vlSelf->io_A) 
                                                        + (IData)(vlSelf->TOP__DOT__alu__DOT__adderB))) 
                                                    + 
                                                    (0U 
                                                     != (IData)(vlSelf->io_aluOp))));
    vlSelf->TOP__DOT__alu_io_Cout = (1U & ((0U != (IData)(vlSelf->io_aluOp)) 
                                           ^ ((IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1) 
                                              >> 4U)));
    vlSelf->TOP__DOT__alu_io_OF = (1U & (((~ ((IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1) 
                                              >> 3U)) 
                                          & (IData)(vlSelf->TOP__DOT__alu__DOT___sltRes_T_2)) 
                                         | ((~ ((IData)(vlSelf->io_A) 
                                                >> 3U)) 
                                            & ((~ ((IData)(vlSelf->TOP__DOT__alu__DOT__adderB) 
                                                   >> 3U)) 
                                               & ((IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1) 
                                                  >> 3U)))));
    vlSelf->TOP__DOT__alu_io_Result = (0xfU & (((((
                                                   ((((0U 
                                                       == (IData)(vlSelf->io_aluOp))
                                                       ? (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1)
                                                       : 0U) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->io_aluOp))
                                                         ? (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1)
                                                         : 0U)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->io_aluOp))
                                                        ? 
                                                       (~ (IData)(vlSelf->io_A))
                                                        : 0U)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->io_aluOp))
                                                       ? 
                                                      ((IData)(vlSelf->io_A) 
                                                       & (IData)(vlSelf->io_B))
                                                       : 0U)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->io_aluOp))
                                                      ? 
                                                     ((IData)(vlSelf->io_A) 
                                                      | (IData)(vlSelf->io_B))
                                                      : 0U)) 
                                                 | ((5U 
                                                     == (IData)(vlSelf->io_aluOp))
                                                     ? 
                                                    ((IData)(vlSelf->io_A) 
                                                     ^ (IData)(vlSelf->io_B))
                                                     : 0U)) 
                                                | ((7U 
                                                    == (IData)(vlSelf->io_aluOp))
                                                    ? 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xfU 
                                                                   & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1))))))
                                                    : 0U)) 
                                               | ((6U 
                                                   == (IData)(vlSelf->io_aluOp))
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelf->TOP__DOT__alu__DOT___sltRes_T_2) 
                                                      | ((((IData)(vlSelf->io_A) 
                                                           ^ (IData)(vlSelf->TOP__DOT__alu__DOT__adderB)) 
                                                          & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1)) 
                                                         >> 3U)))
                                                   : 0U)));
    vlSelf->TOP__DOT__seg7Res__DOT___outReg_5_T_2 = 
        ((0U == (IData)(vlSelf->TOP__DOT__alu_io_Result)) 
         | (1U == (IData)(vlSelf->TOP__DOT__alu_io_Result)));
    vlSelf->TOP__DOT__seg7Res__DOT___outReg_6_T_2 = 
        ((0U == (IData)(vlSelf->TOP__DOT__alu_io_Result)) 
         | (2U == (IData)(vlSelf->TOP__DOT__alu_io_Result)));
    vlSelf->TOP__DOT__seg7Res__DOT___outReg_6_T_8 = 
        ((((IData)(vlSelf->TOP__DOT__seg7Res__DOT___outReg_6_T_2) 
           | (3U == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
          | (5U == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
         | (6U == (IData)(vlSelf->TOP__DOT__alu_io_Result)));
}

VL_ATTR_COLD void VTOP___024root___eval_stl(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTOP___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTOP___024root___eval_triggers__stl(VTOP___024root* vlSelf);

VL_ATTR_COLD bool VTOP___024root___eval_phase__stl(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTOP___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTOP___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__ico(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__nba(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_A = 0;
    vlSelf->io_B = 0;
    vlSelf->io_aluOp = 0;
    vlSelf->io_segRes = 0;
    vlSelf->io_segZero = 0;
    vlSelf->io_segCout = 0;
    vlSelf->io_segOF = 0;
    vlSelf->TOP__DOT__alu_io_Result = 0;
    vlSelf->TOP__DOT__alu_io_Cout = 0;
    vlSelf->TOP__DOT__alu_io_OF = 0;
    vlSelf->TOP__DOT__alu__DOT__adderB = 0;
    vlSelf->TOP__DOT__alu__DOT___adderOut_T_1 = 0;
    vlSelf->TOP__DOT__alu__DOT___sltRes_T_2 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT___outReg_6_T_2 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT___outReg_6_T_8 = 0;
    vlSelf->TOP__DOT__seg7Res__DOT___outReg_5_T_2 = 0;
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6 = 0;
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_0 = 0;
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_1 = 0;
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_2 = 0;
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_3 = 0;
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_4 = 0;
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_5 = 0;
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_6 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
