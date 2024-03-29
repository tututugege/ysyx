// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu___024root.h"

VL_ATTR_COLD void VSimpleCpu___024root___eval_static(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSimpleCpu___024root___eval_initial(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VSimpleCpu___024root___eval_final(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__stl(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSimpleCpu___024root___eval_phase__stl(VSimpleCpu___024root* vlSelf);

VL_ATTR_COLD void VSimpleCpu___024root___eval_settle(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_settle\n"); );
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
            VSimpleCpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/SimpleCpu.v", 3226, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSimpleCpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__stl(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleCpu___024root___eval_triggers__stl(VSimpleCpu___024root* vlSelf);
VL_ATTR_COLD void VSimpleCpu___024root___eval_stl(VSimpleCpu___024root* vlSelf);

VL_ATTR_COLD bool VSimpleCpu___024root___eval_phase__stl(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSimpleCpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSimpleCpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__ico(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__act(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__nba(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleCpu___024root___ctor_var_reset(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Halt = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrRead = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__RF_io_wdata = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF_io_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF_io_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu_io_B = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu_io_Result = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__PcReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT___BrCond_T_7 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__PcNormal = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__CsrData = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2 = VL_RAND_RESET_I(5);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4 = VL_RAND_RESET_I(8);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6 = VL_RAND_RESET_I(9);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_30 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_hi_lo_9 = VL_RAND_RESET_I(8);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_39 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_43 = VL_RAND_RESET_I(9);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_50 = VL_RAND_RESET_I(8);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_54 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_58 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_62 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_68 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_70 = VL_RAND_RESET_I(5);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_74 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10 = VL_RAND_RESET_I(10);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_12 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15 = VL_RAND_RESET_I(6);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_34 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_36 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_38 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_42 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_44 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_46 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h7a85f64f__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h204e6eb3__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5f0b060b__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hcac90371__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h509685ac__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0 = 0;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h4df8558f__0 = 0;
    vlSelf->SimpleCpu__DOT__RF__DOT__Wen = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_45 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_58 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_77 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_90 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4 = VL_RAND_RESET_I(4);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_6 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14 = VL_RAND_RESET_I(3);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18 = VL_RAND_RESET_I(2);
    vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 = VL_RAND_RESET_Q(34);
    vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 = 0;
    vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0 = 0;
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1 = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign = VL_RAND_RESET_I(1);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0 = 0;
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h7e8a5b94__0 = 0;
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h9506ca72__0 = 0;
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_he1e97e09__0 = 0;
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h195eb17c__0 = 0;
    vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT__mcauseReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT__mtvalReg = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T_1 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusWdata = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecWdata = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT___mepcWdata_T_3 = VL_RAND_RESET_I(32);
    vlSelf->SimpleCpu__DOT__Csr__DOT___mcauseWdata_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_pmem_read__1__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
